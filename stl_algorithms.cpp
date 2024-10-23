#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,l,u;
	cin>>n;
	vector<ll>a(n);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x=*min_element(a.begin(),a.end());
	int y=*max_element(a.begin(),a.end());
	int sum=accumulate(a.begin(),a.end(),0LL);
	cout<<x<<endl<<y<<endl<<sum<<endl;
	cin>>l;
	int c=count(a.begin(),a.end(),l);
	cout<<c<<endl;
	cin>>u;
	auto f=find(a.begin(),a.end(),u);
	if(f!=a.end())
	{
		cout<<*f<<endl;
	}
	else
	{
		cout<<"Not found"<<endl;
	}
	reverse(a.begin(),a.end());
	for(auto i:a)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	string s;
	cin>>s;
	reverse(s.begin(),s.end());
	cout<<s<<endl;
}
