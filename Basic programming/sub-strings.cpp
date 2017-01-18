/**************************************************************************************************************
*   @author = 'www.github.com/hiteshnayak305/Theory-of-Computation'                                 18/01/2017*
*   basic programming for Theory of computation                                                               *
***************************************************************************************************************/
#include<bits/stdc++.h>
using namespace std;

bool compare(const string & str1, const string & str2)        //compare according to length
{
    const int strl1 = str1.length() ;
    const int strl2 = str2.length() ;

    if(strl1 == strl2)
    {
        return (str1 < str2) ; //sorting alphabetic when equal length()
    }

    return (strl1 < strl2) ; // compares with the length
}

int main()
{
    string str;
    set< string > s;         //using set to remove duplicate sub-strings
    cin>>str;
    cout<<"------------substrings-------------"<<endl;
    cout<<"phi"<<endl;
    for(int j=1;j<=str.length();j++)
    {
        for(int i=0;i<str.length();i++)
        {
            if(j+i<=str.length())
            {
                string temp = str.substr(i,j);

                /*copy substring of j length from str starts at i
                for(int k=i;k<j+i;k++)
                    cout<<str[k];
                cout<<endl;                        */

                s.insert(temp);
                temp.clear();
            }
        }
    }
    //copying from set to vector to be able to sort according to length()
    vector<string> v;
    set<string>::iterator is;
    for(is = s.begin();is != s.end();is++)
    {
        v.push_back(*is);
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}
