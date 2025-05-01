// A sorting algorithm 
// A
// A is said to have more time complexity than a sorting algorithm 
// B
// B if it uses more number of comparisons for sorting the same array than algorithm 
// B
// B.

// Given that algorithm 
// A
// A uses 
// X
// X comparisons to sort an array and algorithm 
// B
// B uses 
// Y
// Y comparisons to sort the same array, find whether algorithm 
// A
// A has more time complexity.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,a,b;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>a >>b;
	    if(a>b){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
