// Chef bought car insurance. The policy of the insurance is:

// The maximum rebatable amount for any damage is Rs 
// X
// X lakhs.
// If the amount required for repairing the damage is 
// ≤
// X
// ≤X lakhs, that amount is rebated in full.
// Chef's car meets an accident and required Rs 
// Y
// Y lakhs for repairing.

// Determine the amount that will be rebated by the insurance company.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>> x >> y;
	    if(y<=x){
	        std::cout << y << std::endl;
	    }else{
	        std::cout << x << std::endl;
	    }
	}

}
