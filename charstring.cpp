//all concept of charecter
#include<bits/stdc++.h>
using namespace std;
char tolowerCase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;

    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkpalindrome(char a[],int n){
    int s=0;int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
             e--;
        }
    }
    return 1;
}
//reverse the code of  charecter
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
//
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
char getMaxOccCharecter(string s){
    int arr[26]={0};

    for(int i=0;i<=s.length();i++){
        char ch=s[i];
        //lower case
        int number=0;
        if(ch>='a'&& ch<='z'){
number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
    //  maximum occurence
    int maxi=-1; int ans=0;
    for(int i=0;i<=26;i++){
if(maxi<arr[i]){
    ans=i;
    maxi=arr[i];
}
    }
    char ch ='a'+ans;
   
}
//string replace
string replase(string & str){
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
             temp.push_back('4');
              temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}
string RemoveOccurrence(string s,string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());

    }
    return s;
}
//string compressive
int Compress(vector<char>& chars){
    int i=0;int ansIndex=0;
    int n=chars.size();
    while(i<n){
        int j=i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }
        chars[ansIndex++]=chars[i];
        int count =j-i;
        if(count> 1){
            string cnt=to_string(count);
            for(char ch:cnt){
                chars[ansIndex++]=ch;

            }
        }
        i=j;

    }
    return ansIndex;
}
int main(){
/*char name[20];
cin>>name;
//name[2]='\0';
cout<<"your name is:"<<endl;
cout<<name<<endl;
int len=getlength(name);
cout<<"length:"<< len <<endl;
reverse(name,len);
cout<<"your name is"<<endl;
cout<<name<<endl;
cout<<"palindrome or not: "<<checkpalindrome(name,len)<<endl;

cout<<"CHARECTER IS :"<<tolowerCase('b')<<endl;
cout<<"CHARECTER IS :"<<tolowerCase('B')<<endl;*/
/*string s;
cin>>s;
cout<<getMaxOccCharecter(s)<<endl;*/
/*string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string replaced = replase(input);
    cout << "Replaced string: " << replaced << endl;*/
  /*string input, part;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Enter the part you want to remove: ";
    getline(cin, part);
    string result = RemoveOccurrence(input, part);
    cout << "String after removing occurrences: " << result << endl;*/
    vector<char> chars {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength = Compress(chars);
    cout << "Compressed array: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;
return 0;
}
