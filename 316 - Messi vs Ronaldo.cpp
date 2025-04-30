#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t >>x >>y >>z;
	int messi = (t*2)+x;
	int ronaldo = (y*2)+z;
	if(messi==ronaldo){
	    std::cout << "Equal" << std::endl;
	}else if(messi>ronaldo){
	    std::cout << "Messi" << std::endl;
	}else{
	    std::cout << "Ronaldo" << std::endl;
	}

}
