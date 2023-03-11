#include <bits/stdc++.h>
using namespace std;
const long long B=1e7+5;

int num[B];

int Partition(int num[], int low, int high)
{
    int pivot = num[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (num[j] < pivot)
        {
            i++;
            swap(num[i], num[j]);
        }
    }
    swap(num[i + 1], num[high]);
    return i + 1;
}

void QuickSort(int num[], int low, int high)
{
    if (low < high)
    {
        int pi = Partition(num, low, high);
        QuickSort(num, low, pi - 1);
        QuickSort(num, pi + 1, high);
    }
}


int main()
{
    freopen("QuickSort.inp","r",stdin);
    freopen("QuickSort.out","w",stdout);

    int n=1000000;

    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }

    QuickSort(num,0,n-1);

    for(int i=0; i<n; i++)
    {
        cout<<num[i]<<' ';
    }

    return 0;
}
