// Chef has to travel to another place. For this, he can avail any one of two cab services.

// The first cab service charges 
// X
// X rupees.
// The second cab service charges 
// Y
// Y rupees.
// Chef wants to spend the minimum amount of money. Which cab service should Chef take?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y;
	    if(x<y){
	        std::cout << "FIRST" << std::endl;
	    }else if(x==y){
	        std::cout << "ANY" << std::endl;
	    }else{
	        std::cout << "SECOND" << std::endl;
	    }
	}

}
