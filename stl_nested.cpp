#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	/*map<pair<int,int>,int>m;
	pair<int,int>p1={1,2};
	pair<int,int>p2={6,7};
	cout<<(p1>p2)<<endl;

	map<set<int>,int>m1;
	set<int>s1={20,3,4};
	set<int>s2={6,10,3};
	cout<<(s1<s2)<<endl;


	map<pair<string,string>,vector<int>>m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string a,b;
		int c;
		cin>>a>>b>>c;
		for(int j=0;j<c;j++)
		{
			int x;
			cin>>x;
			m[{a,b}].push_back(x);
		}
	}
	for(auto &pr:m)
	{
		cout<<pr.first.first<<" "<<pr.first.second<<endl;
		cout<<pr.second.size()<<endl;
		for(auto &k:pr.second)
		{
			cout<<k<<" ";
		}
		cout<<endl;
	}

	map<int,multiset<string>>mp;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		int x;
		cin>>s>>x;
		mp[x].insert(s);
	}
	auto it=(--mp.end());
	while(true)
	{
		auto &st=(*it).second;
		int x=(*it).first;
		for(auto stu:st)
		{
			cout<<stu<<" "<<x<<endl;
		}
		if(it==mp.begin())
			break;
		it--;
	}
	*/

	map<int,multiset<string>>mp;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		int x;
		cin>>s>>x;
		mp[(-1)*x].insert(s);
	}
	for(auto &st:mp)
	{
		auto &name=st.second;
		int marks=st.first;
		for(auto &stu:name)
		{
			cout<<stu<<" "<<(-1)*marks<<endl;
		}
	}

}

/*
3
a b 4
1 2 3 4
c d 2
1 2
d f 3
2 3 4
*/

/*
3
Eve 78
Bob 99
Alice 78
*/
