#include <bits/stdc++.h>
using namespace std;

void insertSorted(stack<int>& st, int x) {
    if (st.empty() || st.top() <= x) {
        st.push(x);
        return;
    }
    int temp = st.top(); st.pop();
    insertSorted(st, x);
    st.push(temp);
}

void sortStack(stack<int>& st) {
    if (st.empty()) return;
    int x = st.top(); st.pop();
    sortStack(st);
    insertSorted(st, x);
}

int main() {
    stack<int> st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);

    sortStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
