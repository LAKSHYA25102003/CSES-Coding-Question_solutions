#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    int count=0;
    char c;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if((it->second)%2==1)
        {
            c=it->first;
            count++;
        }
    }
    if(count>1)
    {
        cout<<"NO SOLUTION"<<"\n";
        return 0;
    }
    string res="";
    if(count==1)
    {
        res.push_back(c);
        mp[c]--;
    }
    string res1="";
    string res2="";
    for(auto m:mp)
    {
        char ch=m.first;
        int f=m.second;
        while(f!=0)
        {
            res1.push_back(ch);
            res2.push_back(ch);
            f=f-2;
        }
    }
    int i=0;
    int j=res2.size()-1;
    while(j>i)
    {
        swap(res2[i],res2[j]);
        i++;
        j--;
    }
    res=res1+res+res2;
    cout<<res;
    return 0;
}