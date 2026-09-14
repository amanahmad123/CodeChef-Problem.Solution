
// Difficulty:570

// Chef and Candies

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n, x;
	    cin>>n>>x;
	    
	    int candies = n - x;
	    
	    if(n > x){
	        cout<<(candies + 3) / 4<<endl;
	    } else {
	        cout<<0<<endl;
	    }
	}

}
