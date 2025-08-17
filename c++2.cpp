#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ans=0;
int i=0;
//decimal to binary
while(n!=0){
int bit=n & 1;
ans=(bit*pow(10,i)) +ans;
n=n>>1;
i++;
}
cout<<"answer"<<ans<<endl;
}
while(n!=0){
int digit=n%10;
if(digit==1){
ans=ans+pow(2,i);
}
n=n/10;
i++;
}
cout<<"answer"<<ans<<endl;

//perform calculater
int a,b;
cout<<"enter the number of a"<<endl;
cin>>a;
cout<<"enter the number of b"<<endl;
cin>>b;
char op;
cout<<"enter the charecter perform the calculater"<<endl;
cin>>op;
switch(op)
 case'+' :cout<<(a+b)<<endl; 
 break;
 case'-':cout<<(a-b) <<endl;
 break;
 case'*':cout<<(a*b)<<endl;
break;
case'/':cout<<(a/b)<<endl;

default:cout<<"not perform any other case";
}

return 0;
}

