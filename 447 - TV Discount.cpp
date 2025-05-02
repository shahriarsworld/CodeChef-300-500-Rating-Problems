// Chef is looking to buy a TV and has shortlisted two models. The first one costs 
// A
// A rupees, while the second one costs 
// B
// B rupees.

// Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of 
// C
// C rupees on the first TV, and a flat discount of 
// D
// D rupees on the second one.

// Help Chef determine which of the two TVs would be cheaper to buy during the sale.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,a,b,c,d;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> a >> b >> c >> d;
	    if((a-c)<(b-d)){
	        std::cout << "First" << std::endl;
	    }else if((a-c)==(b-d)){
	        std::cout << "Any" << std::endl;
	    }
	    
	    else{
	        std::cout << "Second" << std::endl;
	    }
	}

}
