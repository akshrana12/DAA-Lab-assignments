#include <bits/stdc++.h>

using namespace std;
void SelectionSort(int arr[],int n)
{
    int cmp=0,swaps=0;
    for(int i=0;i<n-1;i++)
    {
        int min1=i;
        for(int j=i+1;j<n;j++)
        {
            cmp++;
            if(arr[min1]>arr[j])
            {
                min1=j;
            }
        }
        swaps++;
        swap(arr[min1],arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Comparision :"<<cmp<<"\n";
    cout<<"Swaps :"<<swaps<<"\n";

}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int cmp=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        SelectionSort(arr,n);
    }
    return 0;
}