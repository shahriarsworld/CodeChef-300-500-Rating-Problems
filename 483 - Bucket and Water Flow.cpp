// Alice has a bucket of water initially having 
// W
// W litres of water in it. The maximum capacity of the bucket is 
// X
// X liters.

// Alice turned on the tap and the water starts flowing into the bucket at a rate of 
// Y
// Y litres/hour. She left the tap running for exactly 
// Z
// Z hours. Determine whether the bucket has been overflown, filled exactly, or is still left unfilled.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,w,x,y,z;
	cin>> count;
	for (int i = 0; i < count; i++) {
	    cin>> w >> x >> y >>z;
	    if((y*z)+w > x){
	        std::cout << "overflow" << std::endl;
	    }else if((y*z)+w == x){
	        std::cout << "filled" << std::endl;
	    }else{
	        std::cout << "unfilled" << std::endl;
	    }
	}

}

