// To access CRED programs, one needs to have a credit score of 
// 750
// 750 or more.
// Given that the present credit score is 
// X
// X, determine if one can access CRED programs or not.

// If it is possible to access CRED programs, output 
// YES
// YES, otherwise output 
// NO
// NO.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	if(x>=750){
	    std::cout << "YES" << std::endl;
	}else{
	    std::cout << "NO" << std::endl;
	}

}
