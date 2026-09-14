
// Difficulty:580

// High Accuracy


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   
   
   int t;
   cin>>t;
   while(t--){  
       int x;
       cin>>x;
       
int input = x%3;

if(input == 0){
    cout<<0<<endl;
} else {
    cout<<3-input<<endl;
}
       
   }


}