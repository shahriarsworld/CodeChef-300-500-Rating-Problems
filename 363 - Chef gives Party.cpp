// Chef wants to give a burger party to all his 
// N
// N friends i.e. he wants to buy one burger for each of his friends.

// The cost of each burger is 
// X
// X rupees while Chef has a total of 
// K
// K rupees.

// Determine whether he has enough money to buy a burger for each of his friends or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y,z;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y >>z;
	    if(z>=(x*y)){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
