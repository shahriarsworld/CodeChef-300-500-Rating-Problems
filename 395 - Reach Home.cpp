// Chef is hungry and wants to reach home.

// Chef can travel up to 
// 5
// 5 kilometres on 
// 1
// 1 litre of fuel on his motorcycle.
// Currently, his motorcycle is filled with 
// X
// X litres of fuel and his home is 
// Y
// Y kilometres away.

// Determine whether Chef can reach his home on his motorcycle or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y;
	    if(x*5>=y){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
