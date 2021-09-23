#include <bits/stdc++.h>

using namespace std;
void InsertionSort(int arr[],int n)
{
    int cmp=0,swap=0;
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        int s=0;
        while(j>=0&&arr[j]>key)
        {
            s++;
            arr[j+1]=arr[j];
            j--;
        }
        cmp+=s;
        swap+=s+1;
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Comparision :"<<cmp<<"\n";
    cout<<"Swaps :"<<swap<<"\n";

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
        InsertionSort(arr,n);
    }
    return 0;
}