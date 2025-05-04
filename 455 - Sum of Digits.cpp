// You're given an integer N. Write a program to calculate the sum of all the digits of N.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int count;
    cin >> count;

    for (int i = 0; i < count; i++) {
        int x;
        cin >> x;

        string s = to_string(x); 
        int sum = 0;

        for (int j = 0; j < s.length(); j++) {
            sum += s[j] - '0';  
        }

        cout << sum << endl;
    }
}
