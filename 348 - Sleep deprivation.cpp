// Sleep deprivation
// A person is said to be sleep deprived if he slept strictly less than 
// 7
// 7 hours in a day.

// Chef was only able to sleep 
// X
// X hours yesterday. Determine if he is sleep deprived or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> x;
	if(x<7){
	    std::cout << "YES" << std::endl;
	}else
	{
	    std::cout << "NO" << std::endl;
	}
	}
