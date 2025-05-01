#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	if(x<3){
	    std::cout << "GOLD" << std::endl;
	}else if(x>=3 && x<6){
	    std::cout << "SILVER" << std::endl;
	}else
	{
	    std::cout << "BRONZE" << std::endl;
	}

}
