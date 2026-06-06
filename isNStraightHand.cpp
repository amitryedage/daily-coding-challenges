class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupsize) {
        //Base case if we can't split card evenly 
        if(hand.size() % groupsize != 0) return false;
        //Create the map which store the count along with that it will sort that automatically 
        map<int,int> count;
        for(int c : hand){
            count[c]++;
        }
        for(auto i = count.begin() ; i != count.end() ; ++i ){
            int current_card = i->first;
            int counter = i->second;

            if(counter > 0){
                for(int j = 0 ; j < groupsize ; ++j){
                    int next_card = current_card+j;
                    if(count[next_card] < counter ) return false;

                    count[next_card] -=counter;
                }
            }
        }
        return true;
        
    }
};