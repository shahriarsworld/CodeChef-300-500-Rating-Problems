// Chef wants to gift 
// C
// C chocolates to Botswal on his birthday. However, he has only 
// X
// X chocolates with him.
// The cost of 
// 1
// 1 chocolate is 
// Y
// Y rupees.

// Find the minimum money in rupees Chef needs to spend so that he can gift 
// C
// C chocolates to Botswal.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,c,x,y;
	cin>> count;
	for (int i = 0; i < count; i++) {
	    cin>> c >> x >> y;
	    int needed = c-x;
	    std::cout << needed*y << std::endl;
	}

}
