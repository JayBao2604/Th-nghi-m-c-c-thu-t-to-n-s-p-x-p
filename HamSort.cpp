#include <bits/stdc++.h>
using namespace std;
const long long B=1e7+5;

int num[B];

int main()
{
    freopen("HamSort.inp","r",stdin);
    freopen("HamSort.out","w",stdout);

    int n=1000000;

    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }

    sort(num,num+n);
    for(int i=0; i<n; i++)
    {
        cout<<num[i]<<' ';
    }

    return 0;
}
