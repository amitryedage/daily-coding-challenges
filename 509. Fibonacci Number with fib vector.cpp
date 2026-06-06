class Solution {
public:
    int fib(int n) {
        //Base case
          if(n==0) return 0;
        if(n==1) return 1;
        //create the fibonacci number 
        vector<int> fib(n+1,0);
        //Base cases
        fib[0] = 0;
        fib[1] = 1;
        for(int i = 2 ; i <= n ; i++){
            fib[i]=fib[i-1]+fib[i-2];

        }

        return fib[n];
        
    }
};