// Six friends go on a trip and are looking for accommodation. After looking for hours, they find a hotel which offers two types of rooms — double rooms and triple rooms. A double room costs Rs. 
// X
// X, while a triple room costs Rs. 
// Y
// Y.

// The friends can either get three double rooms or get two triple rooms. Find the minimum amount they will have to pay to accommodate all six of them.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y;
	    if((3*x)<=(2*y)){
	        std::cout << (3*x) << std::endl;
	    }else{
	        std::cout << (2*y) << std::endl;
	    }
	}

}
