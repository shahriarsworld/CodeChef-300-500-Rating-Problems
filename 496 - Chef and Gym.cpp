// Chef has decided to join a Gym in ChefLand and if possible, also hire a personal trainer at the gym. The monthly cost of the gym is 
// X
// X and personal training will cost him an additional 
// Y
// Y per month. Chef's total budget per month is only 
// Z
// Z. Print 1 if Chef can only join the gym, 2 if he can also have a personal trainer, and 0 if he can't even join the gym.

// Note that if Chef wants to hire a personal trainer, he must join the gym — he cannot hire the trainer without joining the gym.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y,z;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>> x >> y >> z;
	    if(z>=(x+y)){
	        std::cout << 2 << std::endl;
	    }else if(z>=x){
	        std::cout << 1 << std::endl;
	    }else{
	        std::cout << 0 << std::endl;
	    }
	}

}
