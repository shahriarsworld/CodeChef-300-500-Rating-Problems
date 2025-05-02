// Chef is watching TV. The current volume of the TV is 
// X
// X. Pressing the volume up button of the TV remote increases the volume by 
// 1
// 1 while pressing the volume down button decreases the volume by 
// 1
// 1. Chef wants to change the volume from 
// X
// X to 
// Y
// Y. Find the minimum number of button presses required to do so.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y;
	    if(x>y){
	        std::cout << (x-y) << std::endl;
	    }else{
	        std::cout << (y-x) << std::endl;
	    }
	}

}
