// The doctor prescribed Chef to take a multivitamin tablet 
// 3
// 3 times a day for the next 
// X
// X days.

// Chef already has 
// Y
// Y multivitamin tablets.

// Determine if Chef has enough tablets for these 
// X
// X days or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y;
	    if(3*x<=y){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
