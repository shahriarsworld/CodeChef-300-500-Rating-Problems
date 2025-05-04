// Given an integer N . Write a program to obtain the sum of the first and last digits of this number.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,n;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> n;
	    string s = to_string(n);
	    int firstNum = s[0] - '0';
	    int lastNum = s[s.length() - 1] - '0';
	    std::cout << firstNum+lastNum << std::endl;
	    
	}

}
