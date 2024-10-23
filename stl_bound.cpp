#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool comp(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
	return a.first<b.first;
}
int main()
{
	/// vector

	ll n,l,u,k;
	cin>>n;
	vector<ll>a(n);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	cin>>k;
	if(binary_search(a.begin(),a.end(),k))
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	cin>>l;
	auto it=lower_bound(a.begin(),a.end(),l);
	cin>>u;
	auto it1=upper_bound(a.begin(),a.end(),u);
	if(it==a.end())
	{
		cout<<"not found"<<endl;
	}
	else
	{
		cout<<*it<<endl;
	}
	if(it1==a.end())
	{
		cout<<"not found"<<endl;
	}
	else
	{
		cout<<*it<<endl;
	}
    cout<<lower_bound(a.begin(),a.end(),l)-a.begin()<<endl; /// position find kore
    cout<<upper_bound(a.begin(),a.end(),u)-a.begin()<<endl;

	/// set
	ll n1,l1,u1;
	cin>>n1;
	set<ll>st;
	for(ll i=0;i<n1;i++)
	{
		ll x;
		cin>>x;
		st.insert(x);
	}
	cin>>l1;
	auto it2=st.lower_bound(l1);
	if(it2==st.end())
	{
		cout<<"not found"<<endl;
	}
	else
	{
		cout<<*it2<<endl;
	}
	cin>>u1;
	auto it3=st.upper_bound(u1);
	if(it3==st.end())
	{
		cout<<"not found"<<endl;
	}
	else
	{
		cout<<*it3<<endl;
	}


	/// map
	ll n2,l2,u2;
	cin>>n2;
	map<ll,ll>m;
	for(ll i=0;i<n2;i++)
	{
		ll x,y;
		cin>>x>>y;
		m[x]=y;
	}
	cin>>l2;
	auto it4=m.lower_bound(l2);
	if(it4==m.end())
	{
		cout<<"not found"<<endl;
	}
	else
	{
		cout<<it4->first<<endl;
	}
	cin>>u2;
	auto it5=m.upper_bound(u2);
	if(it5==m.end())
	{
		cout<<"not found"<<endl;
	}
	else
	{
		cout<<it5->first<<endl;
	}


    /// pair
    ll n3,l3,u3;
	cin>>n3;
	vector<pair<ll,ll>>p;
	for(ll i=0;i<n3;i++)
	{
		ll x,y;
		cin>>x>>y;
		p.push_back({x,y});
	}
	sort(p.begin(),p.end());
	cin>>l3;
	auto it6=lower_bound(p.begin(),p.end(),make_pair(l3,0LL),comp);
	if(it6==p.end())
	{
		cout<<"not found"<<endl;
	}
	else
	{
		cout<<it6->first<<" "<<it6->second<<endl;
	}
	cin>>u3;
	auto it7=upper_bound(p.begin(),p.end(),make_pair(u3,0LL),comp);
	if(it7==p.end())
	{
		cout<<"not found"<<endl;
	}
	else
	{
		cout<<it7->first<<" "<<it7->second<<endl;
	}


}
