// Chef considers the climate HOT if the temperature is above 
// 20
// 20, otherwise he considers it COLD. You are given the temperature 
// C
// C, find whether the climate is HOT or COLD.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x;
	    if(x>20){
	        std::cout << "HOT" << std::endl;
	    }else{
	        std::cout << "COLD" << std::endl;
	    }
	}

}
