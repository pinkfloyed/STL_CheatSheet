#include<bits/stdc++.h>
using namespace std;
//bool compare(int a,int b)
//{
//	if(a<b)
//		return true;
//	return false;
//}
bool compare_pair(pair<int,int>a,pair<int,int>b)
{
	if(a.first!=b.first)
	{
		if(a.first>b.first)
		{
			return true;
		}
	    return false;
	}
	else
	{
		if(a.second<b.second)
		{
			return true;
		}
	    return false;
	}
}
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>>p(n);
	for(int i=0;i<n;i++)
	{
		cin>>p[i].first>>p[i].second;
	}
	///for(int i=0;i<n;i++)
	///{
	///	for(int j=i+1;j<n;j++)
	///	{
	///		if(compare(p[i],p[j]))
	///		{
	///			swap(p[i],p[j]);
	///		}
	/// }
	///}
	sort(p.begin(),p.end(),compare_pair);
	for(int i=0;i<n;i++)
	{
		cout<<p[i].first<<" "<<p[i].second<<endl;
	}


	///normally pair declaration
	
	pair<int,string>p;
	p=make_pair(1,"pinki");
	cout<<p.first<<" "<<p.second<<endl;

	pair<int,int>pa={2,3};
	cout<<pa.first<<" "<<pa.second<<endl;

    /// pair of pairs
    pair<int,pair<int,string>>pp={1,{2,"Pinki"}};
    cout<<pp.first<<" "<<pp.second.first<<" "<<pp.second.second<<endl;


	pair<int,string>&p1=p; /// & reference p pair er elements p1 e push kore/copy kore na
	p1.first=4;
	cout<<p.first<<" "<<p.second<<endl;


	/// pair in array
	pair<int,int>pr[3];
	pr[0]={1,2};
	pr[1]={3,4};
	pr[2]={1,7};
	for(int i=0;i<3;i++)
	{
		cout<<pr[i].first<<" "<<pr[i].second<<endl;
	}
	swap(pr[1],pr[2]);
	for(int i=0;i<3;i++)
	{
		cout<<pr[i].first<<" "<<pr[i].second<<endl; /// after swapping 2 pair index in array
	}


	/// pair of array
	pair<int,int>ar[]={{2,3},{5,6}};
	cout<<"pair of array"<<" "<<ar[0].first<<" "<<ar[0].second<<" "<<ar[1].first<<" "<<ar[1].second<<endl;



	/// swap 2 pairs
	pair<int,int>x1,x2;
	int a,b,c,d;
	cin>>a>>b;
	x1=make_pair(a,b);
	cin>>c>>d;
	x2=make_pair(c,d);
	swap(x1,x2);
	cout<<x1.first<<" "<<x1.second<<endl;
	cout<<x2.first<<" "<<x2.second<<endl;

	/// vector of pairs
	vector<pair<int,int>>v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	for(auto i:v)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;

	/// set in pairs
	set<pair<int,int>>s;
	pair<int,int>pi;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		pi=make_pair(x,y);
		s.insert(pi);
	}
	for(auto j:s)
	{
		cout<<j.first<<" "<<j.second<<endl;
	}
	cout<<endl;
	int k;
	cin>>k;
	auto it=s.upper_bound({k,INT_MAX});
	if(it==s.begin())
	{
		cout<<"out of range"<<endl;
	}
	it--;
	/// check if i,first=k pair exists or not
	pair<int,int>cur=*it;
	if(cur.first<=k && cur.second>=k)
	{
		cout<<"yes"<<" "<<cur.first<<" "<<cur.second<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}

	/// map in pairs
	int m;
	cin>>m;
	map<int,pair<int,int>>mp;
	for(int i=0;i<m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		mp[x]=make_pair(y,z);
	}
	for(auto i:mp)
	{
		cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
	}

}


/*
6
4 3
5 5
5 3
25 6
7 9
8 5
*/
