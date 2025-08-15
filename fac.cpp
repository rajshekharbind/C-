/*#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
int n,r,ans;
cin>>n>>r;
 ans= fact(n)/(fact(r)*fact(n-r));
cout<<ans<<endl;
 return 0;
}*/
/*#include<iostream>
using namespace std;
int fact(int n){
int fact=1;
for(int i=2;i<=n;i++){
fact *=i;
}

return fact;
}
int main(){
int n;
cin>>n;
for(int i=0;i<=n;i++){
 for(int j=0;j<=i;j++){
cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
 }
cout<<endl;
}
    return 0;
}*/
/*#include<iostream>
using namespace std;
bool check(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a == b*b + c*c){
return true;
    }
    else{ 
        return false;
    }
}
int main(){
int x,y,z;
cin>>x>>y>>z;
if(check(x,y,z)){
    cout<<"pythagorous triplet"<<endl;
}
else{
    cout<<"not a pythagorous triplete"<<endl;
}
    return 0;
}*/
/*#include<iostream>
using namespace std;
int binarytodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans +=x*y;
        x*=2;
        n=n/10;
    }
    return ans;
}
int main(){
int n;
cin>>n;
cout<<binarytodecimal(n)<<endl;
}*/
/*#include<iostream>
using namespace std;
int octaltodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans +=x*y;
        x *=8;
        n=n/10;
    }
    return ans;
}
int main(){
int n;
cin>>n;
// cout<< octaltodecimal(n)<<endl;

//     return 0;
// }*/
// #include<iostream>
// using namespace std;
// /*int hexatodecimal(int n){
//     int ans=0;
//     int x=1;
//     while(n>0){
//         int y=n%10;
//         ans +=x*y;
//         x *=16;
//         n=n/10;
//     }
//     return ans;
// }*/
// int hexatodecimal(string n){
//     int ans=0;
//     int x=1;
//    int s=n.size();
//    for(int i=s-1;i>=0;i--){
//     if(n[i]>='0'&& n[i]<='9'){
//         ans +=x*(n[i]-'0');
//     }

//     else if(n[i]>='A'&& n[i]<='F'){
//         ans +=x*(n[i]-'A'+ 10);
//     }
//     x *=16;
//    }
//    return ans;
// }
// int main(){
// string n;
// cin>>n;
// cout<< hexatodecimal(n)<<endl;
//  return 0;
// }


//bottom to top

// #include<bits/stdc++.h>
// using namespace std;
// int f(int n){
// if(n==0) return n;
// if(n==1) return n;
// int prev2=0,prev1=1,curi=0;
// for(int i=2;i<=n;i++){
//     curi=prev2+prev1;
//     prev2=prev1;
//     prev1=curi;
// }
// return prev1;
// }
// int main(){
// int n;
// cout<<"enter the number:"<<endl;
// cin>>n;
// cout<<f(n)<<endl;
// return 0;
// }

//top to bottom

//stairs climbing problem..

#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n<=1) return n;
    int prev2=1,prev1=1,curi;
    for(int i=2;i<=n;i++){
        curi=prev2+prev1; 
        prev2=prev1;
        prev1=curi;
    }
    return prev1;
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"way to climb:"<<n<<" "<<"stairs:"<<f(n)<<endl;
    return 0;
}