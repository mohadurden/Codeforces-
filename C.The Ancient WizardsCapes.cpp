//Codeforces Round 1056 (Div. 2)C. The Ancient Wizards' Capes
#include<bits/stdc++.h>
using namespace std;
int a[100000],b[100000];
bool check(int n){
	int i,d=0;
	for(i=0;i<n;i++)b[i]=a[i];
	for(i=1;i<n;i++)
	{
		b[i]-=d;
		if(b[i-1]==b[i])d++;
		else if(b[i-1]!=b[i]+1)return 0;
	}
	return b[0]==n-d-1;
}
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	int T,n,i,ans;
	for(cin>>T;T>0;T--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			a[i]--;
		}
		ans=0;
		if(check(n))ans++;
		for(i=1;i<n;i++)a[i]--;
		if(check(n))ans++;
		cout<<ans<<'\n';
	}
	return 0;
}
