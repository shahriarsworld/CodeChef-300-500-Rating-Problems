// There is a group of 
// N
// N friends who wish to enroll in a course together. The course has a maximum capacity of 
// M
// M students that can register for it. If there are 
// K
// K other students who have already enrolled in the course, determine if it will still be possible for all the 
// N
// N friends to do so or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,n,m,k;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    std::cin >> n >> m >> k;
	    if((m-k)>=n){
	        std::cout << "Yes" << std::endl;
	    }else{
	        std::cout << "No" << std::endl;
	    }
	}

}
