// Chef categorises an instagram account as spam, if, the following count of the account is more than 
// 10
// 10 times the count of followers.

// Given the following and follower count of an account as 
// X
// X and 
// Y
// Y respectively, find whether it is a spam account.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y;
	    if((y*10)<x){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
