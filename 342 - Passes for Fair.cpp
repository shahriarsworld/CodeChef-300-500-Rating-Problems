// Passes for Fair
// There is a fair going on in Chefland. Chef wants to visit the fair along with his 
// N
// N friends. Chef manages to collect 
// K
// K passes for the fair. Will Chef be able to enter the fair with all his 
// N
// N friends?

// A person can enter the fair using one pass, and each pass can be used by only one person.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    std::cin >>x >>y;
	    if(x<y){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
