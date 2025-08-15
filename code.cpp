#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int n){
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<=e){
if(arr[mid]==n){
   return mid;
}
if(arr[mid]<n){
    s++;
}
else{
 e--; 
}
}
}
int main(){
int n;
cin>>n;
int a[5]={3,7,4,8,9};

return 0;
}