class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int c=0,c1=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==1){
                c+=1;
            }
            if(sandwiches[i]==1){
                c1+=1;
            }
        }
        stack<int>st;
        for(int i=sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        int z=students.size()-c,o=c;
        cout<<z<<" "<<o;
        while(!st.empty()){
            int ele=st.top();
            if(ele==1 and o>=1){
                st.pop();
                o--;
            } 
            else if(ele==0 and z>=1){
                st.pop();
                z--;
            }
            else{
                return z+o;
            }
        }
        return 0;
       
    }
};