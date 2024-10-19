#include<bits/stdc++.h>
using namespace std;
int main()
{
	/// iterators (next pointer location e jay)
	/// vector er jnno continuously next address location e jabe  (it+1)
	/// map/set e discontinuously next location e jabe, egulay ektar por ekta element thake na (it++)

	int n;
	cin>>n;
	vector<int>v,v1;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;

	int c;
	cin>>c;
	vector<pair<int,int>>vp;
	for(int i=0;i<c;i++)
	{
		int x,y;
		cin>>x>>y;
		vp.push_back({x,y});
	}
	vector<pair<int,int>>::iterator it1;
	for(it1=vp.begin();it1!=vp.end();it1++)
	{
		cout<<(*it1).first<<" "<<(*it1).second<<endl; /// (*it1).first <=> (it1->first)
		cout<<it1->first<<" "<<it1->second<<endl;
	}
	for(auto &val:vp)
	{
		cout<<val.first<<" "<<val.second<<endl;
	}
	cout<<endl;

}
