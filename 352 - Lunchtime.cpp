// Chef has his lunch only between 
// 1
// 1 pm and 
// 4
// 4 pm (both inclusive).

// Given that the current time is 
// X
// X pm, find out whether it is lunchtime for Chef.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x;
    cin>>count;
    for (int i = 0; i < count; i++) {
        cin>>x;
        if(x>=1 && x<=4){
            std::cout << "YES" << std::endl;
        }else{
            std::cout << "NO" << std::endl;
        }
    }

}
