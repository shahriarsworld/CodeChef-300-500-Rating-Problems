// Uttu broke his phone. He can get it repaired by spending 
// X
// X rupees or he can buy a new phone by spending 
// Y
// Y rupees. Uttu wants to spend as little money as possible. Find out if it is better to get the phone repaired or to buy a new phone.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>> x >> y;
	    if(x<y){
	        std::cout << "REPAIR" << std::endl;
	    }else if(x==y){
	        std::cout << "ANY" << std::endl;
	    }else{
	        std::cout << "NEW PHONE" << std::endl;
	    }
	}

}
