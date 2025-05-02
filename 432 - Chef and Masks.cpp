// Chef is shopping for masks. In the shop, he encounters 
// 2
// 2 types of masks:

// Disposable Masks — cost 
// X
// X but last only 
// 1
// 1 day.
// Cloth Masks — cost 
// Y
// Y but last 
// 10
// 10 days.
// Chef wants to buy masks to last him 
// 100
// 100 days. He will buy the masks which cost him the least. In case there is a tie in terms of cost, Chef will be eco-friendly and choose the cloth masks. Which type of mask will Chef choose?

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y;
	    if(y*10<=x*100){
	        std::cout << "Cloth" << std::endl;
	    }else{
	        std::cout << "Disposable" << std::endl;
	    }
	}

}
