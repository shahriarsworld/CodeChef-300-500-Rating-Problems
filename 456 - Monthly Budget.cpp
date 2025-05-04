// Akshat has 
// X
// X rupees to spend in the current month. His daily expenditure is 
// Y
// Y rupees, i.e., he spends 
// Y
// Y rupees each day.

// Given that the current month has 
// 30
// 30 days, find out if Akshat has enough money to meet his daily expenditures for this month.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>> count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y;
	    if (y*30 <= x){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}

