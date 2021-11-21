#include<bits/stdc++.h>
#include<limits>
using namespace std;
int dp[101][101];
int MatrixChainOrder(int p[],int i,int n){
    if(i==n)
        return 0;
    int max1=INT_MAX;
    if(dp[i][n]!=-1)
        return dp[i][n];
    for(int i1=i;i1<n;i1++)
    {
        max1=min(max1,MatrixChainOrder(p,i,i1)+MatrixChainOrder(p,i1+1,n)+p[i-1]*p[i1]*p[n]);
    }
    return dp[i][n]=max1;

}
int main(){
    int n,r,c;
    cin>>n;
    int p[n+1];
    memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++){
        cin>>r>>c;
        if(i==0)
            p[0]=r;
        p[i+1]=c;
    }
    n++;
    cout<<"Minimum number of operation: "<<MatrixChainOrder(p,1,n-1);
    return 0;
}