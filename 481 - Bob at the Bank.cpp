// Bob has an account in the Bobby Bank. His current account balance is 
// W
// W rupees.

// Each month, the office in which Bob works deposits a fixed amount of 
// X
// X rupees to his account.
// Y
// Y rupees is deducted from Bob's account each month as bank charges.

// Find his final account balance after 
// Z
// Z months. Note that the account balance can be negative as well.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,w,x,y,z;
	cin>> count;
	for (int i = 0; i < count; i++) {
	    cin>> w >> x >> y >>z;
	    std::cout << w+(x-y)*z << std::endl;
	}

}
