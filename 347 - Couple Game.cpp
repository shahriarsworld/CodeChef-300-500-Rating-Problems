// Couple Game
// There are 
// G
// G girl and 
// B
// B boy students at IIT (BHU) such that 
// B
// >
// G
// B>G.

// If ICM were a team game where teams could only be of size 
// 2
// 2, having exactly 
// 1
// 1 girl student and 
// 1
// 1 boy student, what would be the minimum number of boy students from IIT (BHU) who would not be able to participate?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,g,b;
	cin>>count;
	for (int i = 0; i < count; i++) {
	   cin>>g >>b;
	   std::cout << (b-g) << std::endl;
	}

}
