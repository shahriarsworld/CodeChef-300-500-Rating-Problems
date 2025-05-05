// Alice, Bob, and Charlie are contributing to buy a Netflix subscription. However, Netfix allows only two users to share a subscription.

// Given that Alice, Bob, and Charlie have 
// A
// ,
// B
// ,
// A,B, and 
// C
// C rupees respectively and a Netflix subscription costs 
// X
// X rupees, find whether any two of them can contribute to buy a subscription.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,a,b,c,x;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> a >> b >> c >>x;
	    if((a+b)>=x || (a+c)>=x || (b+c)>=x){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
