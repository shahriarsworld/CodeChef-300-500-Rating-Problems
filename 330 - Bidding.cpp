// Bidding
// Alice, Bob and Charlie are bidding for an artifact at an auction.
// Alice bids 
// A
// A rupees, Bob bids 
// B
// B rupees, and Charlie bids 
// C
// C rupees (where 
// A
// A, 
// B
// B, and 
// C
// C are distinct).

// According to the rules of the auction, the person who bids the highest amount will win the auction.
// Determine who will win the auction.
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
	    cin>>a >>b >>c;
	    if(a>b && a>c){
	        std::cout << "Alice" << std::endl;
	    }else if(b>a && b>c){
	        std::cout << "Bob" << std::endl;
	    }else{
	        std::cout << "Charlie" << std::endl;
	    }
	}

}
