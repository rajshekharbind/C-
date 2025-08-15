/*#include<bits/stdc++.h>
using namespace std;
inline int getMax(int& a,int& b){
    return (a>b)?a:b;
}
int main(){
    int a=1;
    int b=3;
    int ans=0;
ans= getMax(a,b);
cout<<ans<<endl;
a=a+2;
b=b+4;
ans=getMax(a,b);
cout<<ans<<endl;
return 0;
}*/
//default argument
/*#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n,int start=0){
    for(int i= start;i<n;i++){
    cout<<arr[i]<<endl;
    }
}
int main(){
int arr[5]={1,4,7,8,9};
int size=5;
print(arr,size);
cout<<endl;
print(arr,size,2);

return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0)
    return 1;
    int fact=factorial(n-1);
    int factorial=n*fact;
    return factorial;
}
int main(){
int n;
cin>>n;
int result=factorial(n);
cout<<result<<endl;
return 0;
}*/
//power
/*#include<bits/stdc++.h>
using namespace std;
int power(int n){
    if(n==0)
    return 1;
    return 3*power(n-1);
}
int main(){
int n;
cin>>n;
int result=power(n);
cout<<result<<endl;
return 0;
}*/
//counting

/*#include<bits/stdc++.h>
using namespace std;
int print(int n){
    if(n==0)
    return 0;
   // cout<<n<<endl;
    //recursive relatin
    print(n-1);
    cout<<n<<endl;
}
int main(){
int n;
cin>>n;
cout<<endl;
print(n);
//int result=print(n);
//cout<<result<<endl;
return 0;
}*/
//fibnocci series
/*#include<bits/stdc++.h>
using namespace std;
int fib(int n){
if(n==0)
return 0;
else if(n==1)
return 1;
else return fib(n-1)+fib(n-2);
//return ans;
}
int main(){
int n;
cin>>n;
int result=fib(n);
cout<<result<<endl;
return 0;
}*/
//stair problem
#include<bits/stdc++.h>
using namespace std;
int stair(int n){
    if(n<0)
    return 0;
    else if(n==0)
    return 1;
    else return stair(n-1)+stair(n-2);
}
int main(){
int n;
cin>>n;
int result=stair(n);
cout<<result<<endl;

return 0;
}
