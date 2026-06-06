class Solution {
public:
    bool canReach(vector<int>& nums, int start) {
        int n= nums.size();
        queue<int> q;
        //create another vector which keep track which element we have alreday visted
        vector<bool> visited(n,false);
        q.push(start);
        visited[start] = true;
        while(!q.empty()){
            int curr = q.front();
            q.pop();

            if(nums[curr] == 0){
                return true;
            }
            //Option 1 jump in forward direction 
            int forward = curr+nums[curr];
            if(forward < n && !visited[forward]){
                visited[forward]= true;
                q.push(forward);
            }

            //option 2 jump in backword direction 
            int backword = curr - nums[curr];
            if(backword >= 0 && !visited[backword]){
                visited[backword]=true;
                q.push(backword);
            }

        }
        return false;
    }
};