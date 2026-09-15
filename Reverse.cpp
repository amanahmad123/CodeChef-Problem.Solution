


// Difficulty:588

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    
	    int rev = 0;
	  
	    int x;
	    cin>>x;
	    while(x>0){
	        int digit = x % 10;
	        rev = rev * 10 + digit;
	    x = x / 10;
	    }
	    
	    cout<<rev<<endl;
	    
	}

}

