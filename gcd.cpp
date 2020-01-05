#include <iostream>
#include<vector>
using namespace std;
#define  ll long long

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
} 
ll work(ll a[],ll b[], ll c,ll n)
{
    ll max=0,i,j,k;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n+1;j++)
        {
            if(gcd(i,j)==c)
            {
                //cout<<a[i]<<" "<<b[j]
                k=abs(a[i-1]-b[j-1]);
                if(k>max)
                max=k;
            }
        }
    }
    return max;
}
int main() {
	ll n,k,i;
	cin>>n;
	ll a[n],b[n],c[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cin>>b[i];
	for(i=1;i<n+1;i++)
	{
	   c[i-1]=work(a,b,i,n);
	}
	for(i=0;i<n;i++)
	cout<<c[i]<<" ";
	return 0;
}
