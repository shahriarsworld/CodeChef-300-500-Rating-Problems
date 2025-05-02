// Alice wrote an exam containing 
// N
// N true or false questions (i.e. questions whose answer is either true or false). Each question is worth 
// 1
// 1 mark and there is no negative marking in the examination. Alice scored 
// K
// K marks out of 
// N
// N.

// Bob wrote the same exam but he marked each and every question as the opposite of what Alice did, i.e, for whichever questions Alice marked true, Bob marked false and for whichever questions Alice marked false, Bob marked true.

// Determine the score of Bob.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>> x >>y;
	    std::cout << (x-y) << std::endl;
	}

}
