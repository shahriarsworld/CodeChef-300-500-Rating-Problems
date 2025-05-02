// Alice buys a toy with a selling price of 
// 100
// 100 rupees. There is a discount of 
// x
// x percent on the toy. Find the amount Alice needs to pay for it.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x;
	    std::cout << (100-x) << std::endl;
	}

}
