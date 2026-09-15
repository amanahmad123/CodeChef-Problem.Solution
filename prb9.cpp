// Difficulty:584

// Coloured Balloons


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

   
        int t;
        cin>>t;
        while(t--){
            
            int x;
            cin>>x;
            int arr[x];
            
            int sum = 0;
            
            for(int i = 0; i<x; i++){
                cin>>arr[i];
              
              sum = sum + (i + 1) * arr[i];
            }
            
            cout<<sum <<endl;
        }

}
