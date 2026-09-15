
// Difficulty:584

// Air Conditioner Temperature

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    
	    int x , y ,z;
	    cin>>x>>y>>z;
	    
	    if(max(x , z)<= y ){
	        cout<<"yes"<<endl;
	    } else {
	        cout<<"no"<<endl;
	    }
	}

}
