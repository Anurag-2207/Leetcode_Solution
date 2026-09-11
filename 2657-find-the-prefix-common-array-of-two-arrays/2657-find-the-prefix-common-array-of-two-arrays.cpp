class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        set<int>st;
        int x=0;
        for(int i=0;i<A.size();i++){
            x+=2;
            st.insert(A[i]);
            st.insert(B[i]);
            ans.push_back(x-st.size());
        }
        return ans;
    }
};