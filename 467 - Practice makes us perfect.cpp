// Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems.

// Our Chef took the above advice very seriously and decided to set a target for himself.

// Chef decides to solve at least 
// 10
// 10 problems every week for 
// 4
// 4 weeks.
// Given the number of problems he actually solved in each week over 
// 4
// 4 weeks as 
// P
// 1
// ,
// P
// 2
// ,
// P
// 3
// ,
// P 
// 1
// ​
//  ,P 
// 2
// ​
//  ,P 
// 3
// ​
//  , and 
// P
// 4
// P 
// 4
// ​
//  , output the number of weeks in which Chef met his target.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int p1,p2,p3,p4;
	cin>> p1 >> p2 >> p3 >> p4;
	int count = 0;
	if(p1>=10){
	    count+=1;
	    }
	if(p2>=10){
    count+=1;
	}
	if(p3>=10){
	    count+=1;
	}
	if(p4>=10){
	    count+=1;
	}
	std::cout << count << std::endl;
	

}
