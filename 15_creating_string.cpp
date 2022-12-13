#include<bits/stdc++.h>
using namespace std;

void util(string &s,string &curr,vector<bool> &table,vector<string> &res)
{
    if(curr.size()==s.size())
    {
        res.push_back(curr);
        return ;
    }
    for(int i=0;i<s.size();i++)
    {
        if(table[i]==false)
        {
            if(i&&s[i]==s[i-1]&&table[i-1]==false)
            {
                continue;
            }
            table[i]=true;
            curr.push_back(s[i]);
            util(s,curr,table,res);
            table[i]=false;
            curr.pop_back();
        }
    }
}

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n=s.size();
    string curr="";
    vector<bool> table(n,false);
    vector<string> res;
    util(s,curr,table,res);
    cout<<res.size()<<"\n";
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<"\n";
    }
    return 0;
}