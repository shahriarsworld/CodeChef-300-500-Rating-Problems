// On the occasion of World Blood Donor Day, Chef has organized an event to reward regular blood donars in Chefland.

// If the donor has made less than or equal to 
// 3
// 3 donations, they receive a BRONZE donor badge.
// If the donor has made more than 
// 3
// 3 but less than equal to 
// 6
// 6 donations, they receive a SILVER donor badge.
// If the donor has made more than 
// 6
// 6 donations, they receive a GOLD donor badge.
// Given that a person has made 
// X
// X donations, find the badge they receive.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x;
	    if(x<=3){
	        std::cout << "BRONZE" << std::endl;
	    }else if(x>3 && x<=6){
	        std::cout << "SILVER" << std::endl;
	    }else{
	        std::cout << "GOLD" << std::endl;
	    }
	}

}
