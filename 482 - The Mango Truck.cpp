// You are given that a mango weighs 
// X
// X kilograms and a truck weighs 
// Y
// Y kilograms. You want to cross a bridge that can withstand a weight of 
// Z
// Z kilograms.

// Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y,z;
	cin>> count;
	for (int i = 0; i < count; i++) {
	    cin>>x >> y >> z;
	    int left = (z-y);
	    std::cout << left/x << std::endl;
	}

}
