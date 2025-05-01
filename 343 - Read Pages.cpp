// Read Pages
// Chef has started studying for the upcoming test. The textbook has 
// N
// N pages in total. Chef wants to read at most 
// X
// X pages a day for 
// Y
// Y days.

// Find out whether it is possible for Chef to complete the whole book.
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,n,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>n >>x >>y;
	    if((x*y)>=n){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
