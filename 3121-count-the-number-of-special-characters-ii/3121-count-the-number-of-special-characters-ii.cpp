class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> fl(26, -1);

        for(int i = 0; i < word.size(); i++) {
            if(word[i] >= 'a' && word[i] <= 'z') {
                 fl[word[i] - 'a'] = i;
            }
        }

        vector<int> fu(26, -1);

        for(int i = 0; i < word.size(); i++) {
            if(word[i] >= 'A' && word[i] <= 'Z') {
                if(fu[word[i] - 'A'] != -1) continue;
                else fu[word[i] - 'A'] = i;
            }
        }

        int cnt = 0;

        for(int i = 0; i < 26; i++) {
            if(fl[i] != -1 && fu[i] != -1 && fl[i] < fu[i])
                cnt++;
        }

        return cnt;
    }
};