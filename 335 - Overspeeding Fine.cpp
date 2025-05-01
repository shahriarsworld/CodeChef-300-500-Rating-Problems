// Overspeeding Fine
// Chef was driving on a highway at a speed of 
// X
// X km/hour.

// To avoid accidents, there are fine imposed on overspeeding as follows:

// No fine if the speed of the car 
// ≤
// 70
// ≤70 km/hour.
// Rs 
// 500
// 500 fine if the speed of the car is strictly greater than 
// 70
// 70 and 
// ≤
// 100
// ≤100.
// Rs 
// 2000
// 2000 fine if the speed of the car is strictly greater than 
// 100
// 100.
// Determine the fine Chef needs to pay.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, x;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
	    cin>>x;
	    if(x<=70){
	        std::cout << 0 << std::endl;
	    }else if(x>70 && x<=100){
	        std::cout << 500 << std::endl;
	    }else{
	        std::cout << 2000 << std::endl;
	    }
	}

}
