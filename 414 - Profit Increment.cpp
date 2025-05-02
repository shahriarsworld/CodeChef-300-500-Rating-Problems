// Chef recently started selling a special fruit.
// He has been selling the fruit for 
// X
// X rupees (
// X
// X is a multiple of 
// 100
// 100). He earns a profit of 
// Y
// Y rupees on selling the fruit currently.

// Chef decided to increase the selling price by 
// 10
// %
// 10%. Please help him calculate his new profit after the increase in selling price.

// Note that only the selling price has been increased and the buying price is same.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y;
	    int percent = ((x*10)/100);
	    int newP = (x+percent)-(x-y);
	    std::cout << newP << std::endl;
	}

}
