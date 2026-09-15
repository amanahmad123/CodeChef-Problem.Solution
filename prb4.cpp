// Difficulty:574

// Christmas Gifts

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int h , l, w;
	    cin>>h>>l>>w;
	    
	   int  area = 2*(h*l + l*w+ w*h);
	    
	    int result = 1000 / area;
	    
	    cout<<result<<endl;
	}

}
