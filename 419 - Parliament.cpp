// An important resolution is being discussed in the Parliament of Chefland. There are 
// N
// N members present in the Parliament out of which 
// X
// X members voted in favour of the resolution and the remaining voted against it.

// According to the constitution of Chefland, a resolution is passed if and only if half or more than half the members present in the Parliament vote in favour of the resolution.

// Determine if the resolution is passed or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,y;
	float x;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>> x >> y;
	    if(y>=x/2){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
