#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<char> > &table,int a,int b)
{
    int r=table.size();
    int c=table[0].size();
    bool res=true;
    for(int i=0;i<c;i++)
    {
        if(table[a][i]=='q')
        {
            return false;
        }
    }
    for(int i=0;i<r;i++)
    {
        if(table[i][b]=='q')
        {
            return false;
        }
    }
    int ti=a;
    int tj=b;
    while(ti<r&&tj<c)
    {
        if(table[ti][tj]=='q')
        {
            return false;
        }
        ti++;
        tj++;
    }
    ti=a;
    tj=b;
    while(ti<r&&tj>=0)
    {
        if(table[ti][tj]=='q')
        {
            return false;
        }
        ti++;
        tj--;
    }
    ti=a;
    tj=b;
    while(ti>=0&&tj>=0)
    {
        if(table[ti][tj]=='q')
        {
            return false;
        }
        ti--;
        tj--;
    }
    ti=a;
    tj=b;
    while(ti>=0&&tj<c)
    {
        if(table[ti][tj]=='q')
        {
            return false;
        }
        ti--;
        tj++;
    }
    return res;
}

void util(vector<vector<char> > &table,long long &res,int i)
{
    if(i==table.size())
    {
        res++;
        return ;
    }
    for(int j=0;j<table[i].size();j++)
    {
        if(table[i][j]=='.')
        {
            if(isValid(table,i,j))
            {
                table[i][j]='q';
                util(table,res,i+1);
                table[i][j]='.';
            }
        }
    }
}

int main()
{
    vector<vector<char> > table;
    int n=8;
    for(int i=0;i<n;i++)
    {
        vector<char> temp(8);
        for(int j=0;j<n;j++)
        {
            cin>>temp[j];
        }
        table.push_back(temp);
    }
    long long res=0;
    util(table,res,0);
    cout<<res;
    return 0;
}