// Air Quality Index
// In the light of G-20 summit, government has decided to keep the average air quality index (AQI) strictly below 
// 100
// 100.
// On some random day, Chef measures the AQI and found the value to be 
// X
// X.

// Find whether the government was able to keep the AQI within limits.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	if(x<100){
	    std::cout << "YES" << std::endl;
	}else{
	    std::cout << "NO" << std::endl;
	}

}
