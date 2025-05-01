// Each item in Chef’s menu is assigned a spice level from 
// 1
// 1 to 
// 10
// 10. Based on the spice level, the item is categorised as:

// MILD: If the spice level is less than 
// 4
// 4.
// MEDIUM: If the spice level is greater than equal to 
// 4
// 4 but less than 
// 7
// 7.
// HOT: If the spice level is greater than equal to 
// 7
// 7.
// Given that the spice level of an item is 
// X
// X, find the category it lies in.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x;
	    if(x<4){
	        std::cout << "MILD" << std::endl;
	    }else if(x>=4 && x<7){
	        std::cout << "MEDIUM" << std::endl;
	    }else{
	        std::cout << "HOT" << std::endl;
	    }
	    
	}

}
