#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string m;
    cin>>t;
    cin>>m;
    map<char,char> Map;
    for(char c='a';c<='z';c++)
    {
        Map[c]=m[c-'a'];
    }
    while(t--)
    {
        string ans="";
        string word;
        cin>>word;
        for(int i=0;i<word.length();i++)
        {
            if(islower(word[i]))
            ans+=((char)Map[word[i]]);
            else
            if(isupper(word[i]))
            {
                char c=tolower(word[i]);
                c=Map[c];
                c=toupper(c);
                ans+=c;

            }
            else
             if(word[i]=='_')
            {
                ans+=' ';
            }
           else
            ans+=word[i];

        }
        cout<<ans<<endl;
    }

    return 0;
}