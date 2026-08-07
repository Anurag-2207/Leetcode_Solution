class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.size();
     int nf=0;
     int nt=0;
     int ans=0;
     for(int i=0,j=0;j<n;j++){
        if(answerKey[j]=='T') nt++;
        else nf++;
        while(i<j && min(nf,nt)>k){
            nf=answerKey[i] == 'F'?nf-1:nf;
            nt=answerKey[i]=='T'?nt-1:nt;
            i++;
        }
        ans=max(ans,j-i+1);
     }   
     return ans;
    }
};