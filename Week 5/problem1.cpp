#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int freq[26];
        memset(freq,0,sizeof freq);
        for(int i=0;i<n;i++)
        {
            freq[str[i]-'a']++;
        }
        int ind=0,max1=0;
        for(int i=0;i<26;i++)
        {
            if(freq[i]>max1)
            {
                max1=freq[i];
                ind=i;
            }
        }
        if(max1>1)
        {
            char ch=ind+'a';
            cout<<ch<<" "<<max1<<"\n";
        }
        else
        {
            cout<<"No Duplicates found\n";
        }
    }
    return 0;
}