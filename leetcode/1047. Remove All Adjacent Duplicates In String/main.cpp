#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {

    string S = "abbaca";

    //if (S.length() == 0) return S;

    stack<char> st;

    auto itr = S.begin();

    st.push(*itr);
    itr++;

    while (itr != S.end()) {
        if (*itr == st.top()) {
            st.pop();
        } else st.push(*itr);

        itr++;
    }

    string res = "";

    while (!st.empty()) {
        res.push_back(st.top());
        st.pop();
    }

    reverse(res.begin(), res.end());

    cout << res << endl;
}
