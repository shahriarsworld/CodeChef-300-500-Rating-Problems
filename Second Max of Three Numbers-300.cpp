#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,w,x,y;
	cin>>t;
	for(int i=1;i<=t;i++){
	    cin>>w >>x >>y;
	    if(w>x && w>y){
	        cout<<max(x,y)<<endl;
	    }else if(x>w && x>y){
	        cout<<max(w,y)<<endl;
	    }else{
	        cout<<max(x,w)<<endl;
	    }
	}

}
