// This semester, Chef took 
// X
// X courses. Each course has 
// Y
// Y units and each unit has 
// Z
// Z chapters in it.

// Find the total number of chapters Chef has to study this semester.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y,z;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y >>z;
	    std::cout << (x*y*z) << std::endl;
	}

}
