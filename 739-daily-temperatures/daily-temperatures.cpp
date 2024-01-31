class Solution {
public:
    vector<int> dailyTemperatures( vector<int>& arr) {
       stack<int>st;
        vector<int> res(arr.size(), 0);
        for (int i = arr.size() - 1; i >= 0; --i) {
            if (st.empty()) {
                st.push(i);
                res[i] = 0;
            } else {
                while (!st.empty() && arr[i] >= arr[st.top()]) {
                    st.pop();
                }

                if (st.empty()) {
                    res[i] = 0;
                } else {
                    res[i] = st.top() - i;
                }

                st.push(i);
            }
        }

        return res;
    }
}; 


