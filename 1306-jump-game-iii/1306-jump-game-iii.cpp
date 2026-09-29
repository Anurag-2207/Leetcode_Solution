class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int>q;
        vector<bool>visit(arr.size(),false);
        q.push(start);
        visit[start]=true;
        while(!q.empty()){
            int i=q.front();
            q.pop();
            if(arr[i]==0) return true;
            int right=i+arr[i];
            int left=i-arr[i];
            if(right<arr.size() && !visit[right]){
                q.push(right);
                visit[right]=true;
            }
            if(left>=0 && !visit[left]){
                q.push(left);
                visit[left]=true;
            }
        }
        return false;

    }
};