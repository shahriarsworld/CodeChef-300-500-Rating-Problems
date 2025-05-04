// Chef has finally decided to complete all of his pending assignments.

// There are 
// X
// X assignments where each assignment takes 
// Y
// Y minutes to complete.
// Find whether Chef would be able to complete all the assignments in 
// Z
// Z days.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y,z;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    cin>> x >> y >> z;
	    if ((x*y)<=(z*60*24)){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
