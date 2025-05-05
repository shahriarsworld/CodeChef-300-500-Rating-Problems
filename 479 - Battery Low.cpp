// Chef's phone shows a Battery Low notification if the battery level is 
// 15
// %
// 15% or less.

// Given that the battery level of Chef's phone is 
// X
// %
// X%, determine whether it would show a Battery low notification.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	cin>> count;
	for (int i = 0; i < count; i++) {
	    cin>> x;
	    if(x<=15){
	        std::cout << "Yes" << std::endl;
	    }else{
	        std::cout << "No" << std::endl;
	    }
	}

}
