class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<float>v;
        for(int i=0;i<arr.size();i++){
            for( int j=i+1;j<arr.size();j++){
                v.push_back((float(arr[i])/float(arr[j])));
            }
        }
        sort(v.begin(),v.end());
        float ele=v[k-1];
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(ele==((float(arr[i])/float(arr[j])))){
                    return {arr[i],arr[j]};
                }
            }
        }
        return {};

    }
};