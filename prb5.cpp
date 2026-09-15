// Difficulty:570

// Nearest Square

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       
       int answer = 1;
       for(int i = 1; i* i <=n; i++){
           answer = i * i;
       }
       
       cout<<answer<<endl;
       
   }


}
