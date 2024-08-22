

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int min_cost(string s) {
    int n = s.length();
    int open_count = 0, close_count = 0;
    for (char c : s) {
        if (c == '(') open_count++;
        else if (c == ')') close_count++;
    }
    if (open_count != close_count) return -1; // Invalid input

    stack<int> open_stack, close_stack;
    int cost = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            open_stack.push(i);
        } else if (s[i] == ')') {
            close_stack.push(i);
        } else {
            if (!open_stack.empty()) {
                cost += i - open_stack.top();
                open_stack.pop();
            } else {
                cost += close_stack.top() - i;
                close_stack.pop();
            }
        }
    }

    return cost;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << min_cost(s) << endl;
    }

    return 0;
}
