#include <iostream>

using namespace std;

public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(') st.push(')');
            else if (ch == '[') st.push(']');
            else if (ch == '{') st.push('}');
            else if (!st.empty() && ch == st.top()) st.pop();
            else return false; 
        }
        return st.empty();
}

int main() {

    string s = "()";

    bool answer = isValid(s);

    cout << answer << endl;

    return 0;
}