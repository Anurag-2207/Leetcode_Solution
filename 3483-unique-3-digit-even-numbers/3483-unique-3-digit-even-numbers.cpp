class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        set<int>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==i) continue;
                for(int k=0;k<n;k++){
                    if(k==j || k==i) continue;
                    int x=digits[i]*100+digits[j]*10+digits[k];
                    if(x%2==0 && x>=100) st.insert(x);
                }
            }
        }
        return st.size();
    }
};