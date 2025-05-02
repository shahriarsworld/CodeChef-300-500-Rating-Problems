// Om has 
// X
// X rupees. He wants to gift a laptop worth 
// N
// N rupees to his girlfriend.

// We know that Om is the technical secretary of IIIT-A and has access to the Gymkhana funds of IIIT-A. Currently there are 
// M
// M rupees in the fund and Om can use the fund as much as he wants.

// Find whether Om can gift his girlfriend a new laptop.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,n,m;
	cin>>x >>n >>m;
	if(n<=(x+m)){
	    std::cout << "YES" << std::endl;
	}else{
	    std::cout << "NO" << std::endl;
	}

}
