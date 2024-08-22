
    
#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 


// Function to calculate the typing time for a given password
int calculate_typing_time(const string& s) {
    int time = 2; // Time for the first character
    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            time += 1;
        } else {
            time += 2;
        }
    }
    return time;
}

// Function to find the strongest password by inserting one character
string find_strongest_password(const string& s) {
    string best_password = s;
    int max_time = -1;

    for (size_t i = 0; i <= s.size(); ++i) {
        for (char ch = 'a'; ch <= 'z'; ++ch) {
            string new_password = s.substr(0, i) + ch + s.substr(i);
            int current_time = calculate_typing_time(new_password);
            if (current_time > max_time) {
                max_time = current_time;
                best_password = new_password;
            }
        }
    }

    return best_password;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << find_strongest_password(s) << endl;
    }

    return 0;
}

    


