// Chef is ordering food online (instead of cooking) and the bill comes out to be Rs. 
// X
// X. Chef can use one of the following two coupons to avail a discount.

// Get 
// 10
// 10 percent off on the bill amount
// Get a flat discount of Rs. 
// 100
// 100 on the bill amount
// What is the maximum discount Chef can avail?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x;
	    int tenPercent =  (x*10)/100;

	    if(tenPercent<100){
	        std::cout << 100 << std::endl;
	    }else{
	        std::cout << tenPercent << std::endl;
	    }
	}

}
