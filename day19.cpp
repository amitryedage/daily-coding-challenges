#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(vector<string>& tokens) {
    stack<int> st;

    for (string token : tokens) {
        // If it's a number
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-')) {
            st.push(stoi(token));
        }
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int res = 0;

            if (token == "+") res = a + b;
            else if (token == "-") res = a - b;
            else if (token == "*") res = a * b;
            else if (token == "/") {
                // handle edge case of division by zero
                if (b == 0) {
                    throw runtime_error("Division by zero error"); //Edge case
                }
                res = a / b;  
            }

            st.push(res);
        }
    }

    return st.top();
}

int main() {
    vector<string> expr = {"2", "1", "+", "3", "*"};  
    // (2 + 1) * 3 = 9
    cout << "Result = " << evaluatePostfix(expr) << endl;

    vector<string> expr2 = {"4", "13", "5", "/", "+"};  
    // 4 + (13 / 5) = 6
    cout << "Result = " << evaluatePostfix(expr2) << endl;

    return 0;
}
