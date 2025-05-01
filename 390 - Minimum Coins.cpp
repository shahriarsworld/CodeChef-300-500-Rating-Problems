// There are only 
// 2
// 2 type of denominations in Chefland:

// Coins worth 
// 1
// 1 rupee each
// Notes worth 
// 10
// 10 rupees each
// Chef wants to pay his friend exactly 
// X
// X rupees. What is the minimum number of coins Chef needs to pay exactly 
// X
// X rupees?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x;
	    std::cout << x%10 << std::endl;
	}

}
