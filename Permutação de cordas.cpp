#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void permute(string s , string a)
{
    if(s.length() == 0)
    {
        cout<<a<<"  "<<endl;
        return;
    }
    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        string l = s.substr(0,i);
        string r = s.substr(i+1);
        string m = l + r;
        permute(m , a+ch);
    }
 
}
 
int main()
{
    string s;
    string a="";
 
    cout<<"Escreva a string: ";
    cin>>s;
 
    cout<<"\nPossibilidades string: ";
    permute(s , a);
    return 0;
}