#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x >>y;
	    if(x<=y){
	        std::cout << 0 << std::endl;
	    }else
	    {
	        std::cout << (x-y) << std::endl;
	    }
	}

}
