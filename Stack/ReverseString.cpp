#include<iostream>
#include<stack>
#include<string>
using namespace std;
void reverse(string &str)
{
    int n=str.length();
    stack<char> S;
    for(int i=0;i<n;i++)
    {
        S.push(str[i]);
    }
    for(int i=0;i<n;i++)
    {
        str[i] = S.top();
        S.pop();
    }
    //cout<<str;
}
int main(){
    string str;
    cout<<"Enter a string";
    cin>>str;
    int n = str.length();
    
    reverse(str);
    cout<<str;
    

}