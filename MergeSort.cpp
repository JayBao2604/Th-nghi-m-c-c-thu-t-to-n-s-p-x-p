#include <bits/stdc++.h>
using namespace std;
const long long B=1e7+5;

void mergeSort(vector<int>&num)
{
    int n = num.size();
    if (n < 2) return;

    int mid = n / 2;
    vector<int> left(mid);
    vector<int> right(n - mid);

    for (int i = 0; i < mid; i++)
        left[i] = num[i];

    for (int i = mid; i < n; i++)
        right[i - mid] = num[i];

    mergeSort(left);
    mergeSort(right);

    int i = 0, j = 0, k = 0;

    while (i < mid && j < n - mid)
    {
        if (left[i] <= right[j])
        {
            num[k] = left[i];
            i++;
        }
        else
        {
            num[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < mid)
    {
        num[k] = left[i];
        i++;
        k++;
    }

    while (j < n - mid)
    {
        num[k] = right[j];
        j++;
        k++;
    }
}

int main()
{
    freopen("MergeSort.inp","r",stdin);
    freopen("MergeSort.out","w",stdout);

    int n=1000000;
    vector<int>num(n);

    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }

    mergeSort(num);

    for(int i=0; i<n; i++)
    {
        cout<<num[i]<<' ';
    }

    return 0;
}
