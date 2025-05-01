// Chef rented a car for a day.

// Usually, the cost of the car is Rs 
// 10
// 10 per km. However, since Chef has booked the car for the whole day, he needs to pay for at least 
// 300
// 300 kms even if the car runs less than 
// 300
// 300 kms.

// If the car ran 
// X
// X kms, determine the cost Chef needs to pay.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x;
	    if(x<=300){
	        std::cout << 3000 << std::endl;
	    }else{
	        std::cout << (x*10) << std::endl;
	    }
	}

}
