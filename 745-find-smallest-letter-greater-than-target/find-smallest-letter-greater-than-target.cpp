class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        bool yes=false;
        int l=0, r=letters.size()-1;
        int mid;
        while(l<r)
        {
            mid=l+(r-l)/2;
            if(letters[mid]<=target) l=mid+1;
            else
            {
                r=mid;
            }
            cout<<yes<<endl;
        }
        if(letters[l]<=target) return letters[0];
        return letters[l];
    }
};