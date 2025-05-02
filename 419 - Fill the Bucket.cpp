// Chef has a bucket having a capacity of 
// K
// K liters. It is already filled with 
// X
// X liters of water.

// Find the maximum amount of extra water in liters that Chef can fill in the bucket without overflowing.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    std::cin >> x >> y;
	    std::cout << (x-y) << std::endl;
	}

}
