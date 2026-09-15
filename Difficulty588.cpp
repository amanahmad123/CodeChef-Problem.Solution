#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    

	    set<int>colors;
	    
	    for(int i = 0; i<n; i++){
	        
	       int x;
	       cin>>x;
	       
	       colors.insert(x);
	    }
	    
	    cout<<colors.size()<<endl;
	}

}
