#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>s;
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string S;
        cout<<"enter the strings";
        cin>>S;
        s.push_back(S);
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i].size()>10)
        {
            cout<<s[i][0]<<s[i].size()-2<<s[i][s[i].size()-1]<<endl;
        }
        else
        {
            cout<<s[i]<<endl;
        }
    }
    return 0;
}