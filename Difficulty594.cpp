#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int a , b, c;
	    cin>>a>>b>>c;
	    
	    int easy = b * 1;
	    int hard = c * 2;
	    
	    if(  (easy + hard) >= a){
	        cout<<"qualify"<<endl;
	    } else {
	        cout<<"notqualify"<<endl;
	    }
	}

}
