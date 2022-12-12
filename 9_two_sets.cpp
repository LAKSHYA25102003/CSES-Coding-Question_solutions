#include <bits/stdc++.h>
using namespace std;

void four(int n)
{
    int sum1=1;
    int sum2=0;
    vector<int> table1;
    table1.push_back(1);
    vector<int> table2;
    bool temp=false;
    for(int i=2;i<=n;)
    {
        if(temp)
        {
            sum1+=i;
            table1.push_back(i);
            if(i+1<=n)
            {
                sum1+=i+1;
                table1.push_back(i+1);
            }
        }
        else
        {
            sum2+=i;
            table2.push_back(i);
            if(i+1<=n)
            {
                sum2+=i+1;
                table2.push_back(i+1);
            }
        }
        i=i+2;
        temp=!temp;
    }
    cout<<"YES"<<"\n";
    cout<<table1.size()<<"\n";
    for(auto x:table1)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    cout<<table2.size()<<"\n";
    for(auto x:table2)
    {
        cout<<x<<" ";
    }
    return ;
}

void odd(int n)
{
    vector<int> table1;
    vector<int> table2;
    int sum1 = 0;
    int sum2 = 0;
    bool temp = true;
    for (int i = 1; i <= n;)
    {
        if (temp)
        {
            table1.push_back(i);
            sum1 += i;
            if (i + 1 <= n)
            {
                table1.push_back(i + 1);
                sum1 += i + 1;
            }
        }
        else
        {
            table2.push_back(i);
            sum2 += i;
            if (i + 1 <= n)
            {
                table2.push_back(i + 1);
                sum2 += i + 1;
            }
        }
        temp=!temp;
        i=i+2;
    }
    if(sum1!=sum2)
    {
        cout<<"NO";
        return ;
    }
    cout<<"YES"<<"\n";
    cout<<table1.size()<<"\n";
    for(int i=0;i<table1.size();i++)
    {
        cout<<table1[i]<<" ";
    }
    cout<<"\n";
    cout<<table2.size()<<"\n";
    for(int i=0;i<table2.size();i++)
    {
        cout<<table2[i]<<" ";
    }
}

int main()
{
    int n;
    cin >> n;
    if(n%4==0)
    {
        four(n);
    }
    else
    {
        odd(n);
    }
    return 0;
}