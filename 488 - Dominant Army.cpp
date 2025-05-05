// In the medieval age, there were 
// 3
// 3 kingdoms 
// A
// A, 
// B
// B, and 
// C
// C. The army of these kingdom had 
// N
// A
// N 
// A
// ​
//  , 
// N
// B
// N 
// B
// ​
//  , and 
// N
// C
// N 
// C
// ​
//   soldiers respectively.

// You are given that an army with 
// X
// X soldiers can defeat an army with 
// Y
// Y soldiers only if 
// X
// >
// Y
// X>Y.

// An army is said to be dominant if it can defeat both the other armies combined. For example, kingdom 
// C
// C's army will be dominant only if 
// N
// C
// >
// N
// A
// +
// N
// B
// N 
// C
// ​
//  >N 
// A
// ​
//  +N 
// B
// ​
//  .

// Determine whether any of the armies is dominant or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,a,b,c;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    cin >> a >> b >> c;
	    if((a>b+c) || (b>a+c) || (c>a+b)){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
