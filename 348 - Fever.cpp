// Fever
// Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be 
// X
// X °F.

// A person is said to have fever if his body temperature is strictly greater than 
// 98
// 98 °F.

// Determine if Chef has fever or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> x;
	    if(x>98){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}
	

}
