// On every CodeChef user's profile page, the list of problems that they have set, tested, and written editorials for, is listed at the bottom.

// Given the number of problems in each of these 
// 3
// 3 categories as 
// X
// ,
// Y
// ,
// X,Y, and 
// Z
// Z respectively (where all three integers are distinct), find if the user has been most active as a Setter, Tester, or Editorialist.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y,z;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y >>z;
	    if(x>y && x>z){
	        std::cout << "Setter" << std::endl;
	    }else if(y>x && y>z){
	        std::cout << "Tester" << std::endl;
	    }else{
	        std::cout << "Editorialist" << std::endl;
	    }
	}

}
