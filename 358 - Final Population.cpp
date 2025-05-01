// There were initially 
// X
// X million people in a town, out of which 
// Y
// Y million people left the town and 
// Z
// Z million people immigrated to this town.

// Determine the final population of town in millions.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y,z;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y >>z;
	    std::cout << ((x+z)-y) << std::endl;
	}

}
