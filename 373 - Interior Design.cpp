// Chef decided to redecorate his house, and now needs to decide between two different styles of interior design.

// For the first style, tiling the floor will cost 
// X
// 1
// X 
// 1
// ​
//   rupees and painting the walls will cost 
// Y
// 1
// Y 
// 1
// ​
//   rupees.

// For the second style, tiling the floor will cost 
// X
// 2
// X 
// 2
// ​
//   rupees and painting the walls will cost 
// Y
// 2
// Y 
// 2
// ​
//   rupees.

// Chef will choose whichever style has the lower total cost. How much will Chef pay for his interior design?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,w,x,y,z;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>w >>x >>y >>z;
	    if((w+x)>(y+z)){
	        std::cout << (y+z) << std::endl;
	    }else{
	        std::cout << (w+x) << std::endl;
	    }
	}

}
