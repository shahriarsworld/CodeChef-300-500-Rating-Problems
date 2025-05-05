// Chef has finally got the chance of his lifetime to drive in the 
// F
// 1
// F1 tournament. But, there is one problem. Chef did not know about the 107% rule and now he is worried whether he will be allowed to race in the main event or not.

// Given the fastest finish time as 
// X
// X seconds and Chef's finish time as 
// Y
// Y seconds, determine whether Chef will be allowed to race in the main event or not.

// Note that, Chef will only be allowed to race if his finish time is within 107% of the fastest finish time.


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count;
	float x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>> x >> y;
	    float percent = (x*107)/100;
	    if(y<=percent){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	    
	}

}
