
// Difficulty:580

// Bowling Balls

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int x , y , z;
	    cin>>x>>y>>z;
	    
	    int arr[x];
	    
	    int number = 0;
	    
	    for(int i = 0; i<x; i++){
	        cin>>arr[i];
	        
	        if(arr[i] >= y && arr[i] <= z)
	        number++;
	    }
	    
	    cout<<number<<endl;
	}

}
