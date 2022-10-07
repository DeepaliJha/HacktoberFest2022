#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n, sum=0, a;
    cin>>n;
    a=n;

while(n>0){
int lastdigit=n%10;
cout<<n<<endl;
sum+=pow(lastdigit,3);
cout<<sum<<endl;
n=n/10;

}
cout<<sum<<endl;
cout<<a<<endl;
if (sum==a){
    cout<<"armstrong number"<<endl;
    cout<<sum;
}
else{
    cout<<"not armstrong number"<<endl;
}
return 0;
}
