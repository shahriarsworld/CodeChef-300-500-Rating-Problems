#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x >>y;
	    int attack = (y/x);
	    std::cout << attack << std::endl;
	}

}
