// Chef is the financial incharge of Chefland and one of his duties is identifying if any company has gained a monopolistic advantage in the market.

// There are exactly 
// 3
// 3 companies in the market each of whose revenues are denoted by 
// R
// 1
// R 
// 1
// ​
//  , 
// R
// 2
// R 
// 2
// ​
//   and 
// R
// 3
// R 
// 3
// ​
//   respectively. A company is said to have a monopolistic advantage if its revenue is strictly greater than the sum of the revenues of its competitors.

// Given the revenue of the 
// 3
// 3 companies, help Chef determine if any of them has a monopolistic advantage.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,r1,r2,r3;
    std::cin >> count;
    for (int i = 0; i < count; i++) {
        std::cin >> r1 >> r2 >> r3;
        if((r1>r2+r3) || (r2>r1+r3) || (r3>r1+r2)){
            std::cout << "YES" << std::endl;
        }else{
            std::cout << "NO" << std::endl;
        }
    }
}
