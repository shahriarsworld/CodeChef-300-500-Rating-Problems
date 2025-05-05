// Chef's playlist contains 
// 3
// 3 songs named 
// A
// ,
// B
// A,B, and 
// C
// C, each of duration exactly 
// X
// X minutes. Chef generally plays these 
// 3
// 3 songs in loop, i.e, 
// A
// →
// B
// →
// C
// →
// A
// →
// B
// →
// C
// →
// A
// →
// …
// A→B→C→A→B→C→A→…

// Chef went on a train journey of 
// N
// N minutes and played his playlist on loop for the whole journey. How many times did he listen to the song 
// C
// C completely?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,n,x;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> n >> x;
        std::cout << n/(x*3) << std::endl;
	}

}
