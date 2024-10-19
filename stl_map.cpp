#include<bits/stdc++.h>
using namespace std;
int main()
{
	/// ordered_map, unordered_map, multimap
	/*map<int,string>m; /// insert,access 0(logn)
	m[1]="pinki";  /// 0(logn)
	m[4]="akter";
	m[10]="cs";
	m[10]="CSE"; /// map e unique key print. same key te 2ber value store korleo last time key te j value store oitai print hobe

	m.insert({5,"CUET"});
	cout<<m.size()<<endl;
	for(auto &i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	m.erase(4); /// 0(logn)
	for(auto &i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	auto it=m.find(3);// 0(logn) /// iterator point kore/ iterator return kore
	if(it!=m.end())
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	else
	{
		cout<<"Not found"<<endl;
	}
	///m.clear();
	///cout<<m.size();

	map<string,string>mp; /// 0(n*logn)


	/// unique strings in lexicographical order with frequency
	int n;
	cin>>n;
	map<string,int>ms;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		ms[s]++; /// 0(n*logn)
	}
	for(auto &i:ms)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}


	unordered_map<int,string>m; /// insert,access 0(logn)
	m[1]="pinki";  /// 0(logn)
	m[4]="akter";
	m[10]="cs";
	m[10]="CSE"; /// map e unique key print. same key te 2ber value store korleo last time key te j value store oitai print hobe

	m.insert({5,"CUET"});


	cout<<m.size()<<endl;
	for(auto &i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	m.erase(4); /// 0(logn)
	for(auto &i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	auto it=m.find(3);// 0(logn) /// iterator point kore/ iterator return kore
	if(it!=m.end())
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	else
	{
		cout<<"Not found"<<endl;
	}
	///m.clear();
	///cout<<m.size();

	unordered_map<string,string>mp; /// 0(n*logn)


	/// unique strings in lexicographical order with frequency
	int n;
	cin>>n;
	unordered_map<string,int>ms;  /// best 0(1), worst 0(n)
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		ms[s]++; /// 0(logn)
	}
	for(auto &i:ms)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	int q;
	cin>>q;
	while(q--)
	{
		string st;
		cin>>st;
		cout<<ms[st]<<endl;
	}
*/
	int y;
	cin>>y;
	map<int,int>m,op;
	for(int i=0;i<y;i++){
		int a,b;
		cin>>a>>b;
		m.insert({a,b});
	}
	op=m; /// map m r value gula map op te assign kore...
	for(auto i=m.begin();i!=m.end();i++)
	{
		cout<<i->first<<" "<<i->second<<'\n';
	}
	for(auto i=op.begin();i!=op.end();i++)
	{
		cout<<i->first<<" "<<i->second<<'\n';
	}
	if(m.count(2))
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	int pt;
	cin>>pt;
	cout<<m.lower_bound(pt)->first<<" "<<m.lower_bound(pt)->second<<'\n';
	/// lower_bound oi value or greater than oi value
	cout<<m.upper_bound(pt)->first<<" "<<m.upper_bound(pt)->second<<'\n';
	/// upper_bound greater than oi value



/// pairs in map
    map<int,pair<int,int>>mp;
    mp[1]={3,5};
    mp[2]={4,5};
    mp[5]={5,7};
    mp.insert(make_pair(6,make_pair(7,8)));
    for(auto &i:mp)
	{
		cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
	}

	unordered_map<string,double>d;
    d["PI"] = 3.14;
    d["root2"] = 1.414;
    d["root3"] = 1.732;
    d["log10"] = 2.302;
    d["loge"] = 1.0;

    d.insert(make_pair("e", 2.718));

    cout<<d["PI"]<<endl;
    cout<<d.at("PI")<<endl;

    /// Multimap initialize
    multimap<int,vector<string>>mul;
    multimap<pair<int,int>,int>mul1; /// unique print kore na key jotober ache totober...
}


/*
8
abc
def
abc
ghj
jkl
ghj
ghj
abc

output:
abc 3
def 1
ghj 3
jkl 1
*/
/// 1. inbuilt implementation : map(sorted) - trees used, unordered_map(unordered) - hash table used
/// 2. time complexity : map (0(logn)) , unordered_map 0(1)
/// 3. map e pair use kora jay as comparison based store, unordered_map e pair use kora jay na as hash table e store hoy so pair er inbuilt implementation nei
