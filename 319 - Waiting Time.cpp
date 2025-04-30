#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,k,x;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>k >>x;
	    k= k*7;
	    std::cout << (k-x) << std::endl;
	}

}
