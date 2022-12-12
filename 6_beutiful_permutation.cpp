#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> res;
    if(n==3||n==2)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    int temp=2;
    while(temp<=n)
    {
        cout<<temp<<" ";
        temp=temp+2;
    }
    temp=1;
    while(temp<=n)
    {
        cout<<temp<<" ";
        temp=temp+2;
    }
    return 0;
}