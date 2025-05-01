// Chef has a rectangular plate of length 
// N
// c
// m
// Ncm and width 
// M
// c
// m
// Mcm. He wants to make a wireframe around the plate. The wireframe costs 
// X
// X rupees per cm.

// Determine the cost Chef needs to incur to buy the wireframe.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y,z;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y >>z;
	    int length = (x*2)+(y*2);
	    std::cout << length*z << std::endl;
	}

}
