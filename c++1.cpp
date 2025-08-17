#include<bits/stdc++.h>
using namespace std;
int main(){
/*int a=4;
int b=6;
cout<<"a&b="<<(a&b)<<endl;
cout<<"a||b="<<(a||b)<<endl;
cout<<"a^b="<<(a^b)<<endl;
cout<<"~b="<<(~b)<<endl;
//right and left shift
cout<<(17>>1)<<endl;
cout<<(17>>2)<<endl;
cout<<(17>>3)<<endl;
//left shift
cout<<(17<<1)<<endl;
cout<<(17<<2)<<endl;
cout<<(17<<3)<<endl;*/

/*int i=7;
cout<<(++i)<<endl;
cout<<(i++)<<endl;
cout<<(--i)<<endl;
cout<<(i--)<<endl;

for(int a=0,b=1,c=3;a>=0&& b>=1 && c>=2;a--,b--,c--){
cout<<a<<" "<<b<<" "<<c;
}
return 0;
}*/
//fibnocci series
/*int n=10;
int a=0;
int b=1;
cout<<a<<" "<<b;
for(int i=1;i<n;i++){
 int next=a+b;
 cout<<a+b<<endl;
 a=b;
 b=next;   
}*/
//prime number
/*int n;
cout<<"enter the number";
cin>>n;
for(int i=2;i<n-1;i++){
 if(n%i==0){
cout<<"number is not prime"<<endl;
break;
 } 
else {
cout<<"number is  a prime";
break;
} 
}*/
//concept of continue

/*for(int i=0;i<5;i++){
cout<<"hi"<<endl;
cout<<"hey"<<endl;
cout<<"raj"<<endl;
continue;
cout<<"ram is a good boy";
}*/
//digit problem
int n;
cout<<"enter the number";
cin>>n;
int sum=0;
int prod=1;
while(n!=0){
 int digit=n%10;
 prod=prod*digit;
 sum=sum+digit;
n=n/10;
}
int diffirence=prod-sum;
cout<<diffirence<<endl;

return 0;
}


 