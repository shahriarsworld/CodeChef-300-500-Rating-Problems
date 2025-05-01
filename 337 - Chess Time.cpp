// Chess Time
// Chef has recently started playing chess, and wants to play as many games as possible.

// He calculated that playing one game of chess takes at least 
// 20
// 20 minutes of his time.

// Chef has 
// N
// N hours of free time. What is the maximum number of complete chess games he can play in that time?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> x;
	    int hour = 3;
	    std::cout << (x * hour) << std::endl;
	}

}
