class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> freq;
        for(int task : tasks){
            freq[task]++;

        }
        int total_round = 0 ;
        for(auto& i : freq){
            int count = i.second;
            if(count == 1) return -1; //since we can't excute the only 1 task minimum 2 task can be excuted 
            if(count % 3 == 0) {
                total_round +=count/3;
            }
            else{
                total_round +=count/3+1;
            }

        }
        return total_round;
    }
};