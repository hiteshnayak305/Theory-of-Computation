/**************************************************************************************************************
*   @author = 'www.github.com/hiteshnayak305/Theory-of-Computation'                                 18/01/2017*
*   basic programming for Theory of computation                                                               *
***************************************************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<"-------------prefix--------------"<<endl;
    cout<<"phi"<<endl;
    for(int i=0;i<str.length();i++)       //i from 0 to length-1
    {
        for(int j=0;j<=i;j++)             //printing sub-string index 0 to i
        {
            cout<<str[j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"-------------suffix--------------"<<endl;
    cout<<"phi"<<endl;
    for(int i=str.length()-1;i>=0;i--)       //i from length-1 to 0
    {
        for(int j=i;j<str.length();j++)      //printing sub-string index i to length-1
        {
            cout<<str[j];
        }
        cout<<endl;
    }
    return 0;
}
