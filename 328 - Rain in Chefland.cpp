// Rain in Chefland
// In Chefland, precipitation is measured using a rain gauge in millimetre per hour.

// Chef categorises rainfall as:

// LIGHT, if rainfall is less than 
// 3
// 3 millimetre per hour.
// MODERATE, if rainfall is greater than equal to 
// 3
// 3 millimetre per hour and less than 
// 7
// 7 millimetre per hour.
// HEAVY if rainfall is greater than equal to 
// 7
// 7 millimetre per hour.
// Given that it rains at 
// X
// X millimetre per hour on a day, find whether the rain is LIGHT, MODERATE, or HEAVY.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,t;
    std::cin >> x;
	for(int i=0; i<x; i++){
	cin>>t;
	if(t<3){
	    std::cout << "LIGHT" << std::endl;
	}else if(t>=3 && t<7){
	    std::cout << "MODERATE" << std::endl;
	}else{
	    std::cout << "HEAVY" << std::endl;
	}
}
}
