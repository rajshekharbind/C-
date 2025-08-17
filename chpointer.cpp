#include<bits/stdc++.h>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
     cout<<p<<endl;

}
void update(int *p){
   *p=*p+1; 
   cout<<p<<endl;
}
int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    /*int arr[5]={1,2,3,4,5};
    char ch[6]="abcde"; 
    cout<<arr<<endl;
    cout<<ch<<endl;
    char *c=&ch[0];
    cout<< c<<endl;*/
    /*int value=5;
    int *p=&value;
    print(p);
    cout<<before<<*p<<endl;
    update(p);
    cout<< after << *p <<endl;*/

    int arr[6]={1,2,3,4,5,7};
    cout<<"the sum of the array "<<getsum(arr+3,3);
    return 0;
}