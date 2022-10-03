#include<bits/stdc++.h>
using namespace std; 
 
int main(){ 
     int n;cin>>n;
     int a[n];
     int cs=0;
     int ms=0;
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     // Kaden's Algorithm to find the maximum sum of subarray
     for(int i=0;i<n;i++){
         cs=cs+a[i];
         if(cs<0){
             cs=0;
         }
         ms=max(ms,cs);
     }
     cout<<"Maximum sum is: "<<ms<<endl;
return 0;
}