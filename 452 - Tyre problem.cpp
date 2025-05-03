// There are 
// N
// N bikes and 
// M
// M cars on the road.

// Each bike has 
// 2
// 2 tyres.
// Each car has 
// 4
// 4 tyres.
// Find the total number of tyres on the road.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,n,m;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>> n >> m;
	    std::cout << (n*2)+(m*4) << std::endl;
	}

}
