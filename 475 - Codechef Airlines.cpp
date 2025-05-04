// Chef has opened a new airline. Chef has 
// 10
// 10 airplanes where each airplane has a capacity of 
// X
// X passengers.
// On the first day itself, 
// Y
// Y people are willing to book a seat in any one of Chef's airplanes.

// Given that Chef charges 
// Z
// Z rupees for each ticket, find the maximum amount he can earn on the first day.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y,z;
	cin>> count;
	for (int i = 0; i < count; i++) {
	    cin>> x >> y >> z;
	    int seatAvailable=10*x;
	    if(y<=seatAvailable){
	        std::cout << y*z << std::endl;
	    }else{
	        std::cout << seatAvailable*z << std::endl;
	    }
	}

}
