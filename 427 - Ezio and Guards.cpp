// Ezio can manipulate at most 
// X
// X number of guards with the apple of eden.

// Given that there are 
// Y
// Y number of guards, predict if he can safely manipulate all of them.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>> x >>y;
	    if(x>=y){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
