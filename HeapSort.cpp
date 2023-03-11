#include <bits/stdc++.h>
using namespace std;
const long long B=1e7+5;

int num[B];

void Heapify(int num[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && num[l] > num[largest])
        largest = l;

    if (r < n && num[r] > num[largest])
        largest = r;

    if (largest != i)
    {
        swap(num[i], num[largest]);
        Heapify(num, n, largest);
    }
}

void HeapSort(int num[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        Heapify(num, n, i);

    for (int i = n - 1; i > 0; i--)
    {
        swap(num[0], num[i]);
        Heapify(num, i, 0);
    }
}

int main()
{
    freopen("HeapSort.inp","r",stdin);
    freopen("HeapSort.out","w",stdout);

    int n=1000000;

    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }

    HeapSort(num,n);

    for(int i=0; i<n; i++)
    {
        cout<<num[i]<<' ';
    }

    return 0;
}

