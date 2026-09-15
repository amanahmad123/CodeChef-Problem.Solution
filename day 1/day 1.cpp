// Difficulty:564

// Buying Chairs

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n , x, k;
	    cin>>n>>x>>k;
	    
	    int def = n * 2;
	    int all = (k - n);
	    
	    
	    if(n < k){
	        cout<<def + all<<endl;
	    } else {
	        cout<<k * 2<<endl;
	    }
	}

}