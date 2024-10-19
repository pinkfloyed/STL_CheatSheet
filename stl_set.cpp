#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		multiset<int>m;
		for(int i=0;i<n;i++)
		{
			int p;
			cin>>p;
			m.insert(p);
		}
		int s=0;
		for(int i=0;i<k;i++)
		{
			auto it=(m.end());
			--it;
			int c=*it;
			s+=c;
			m.erase(it);
			m.insert(c/2);
		}
		cout<<s<<endl;
	}
}
*/

int main()
{

	set<string>s; /// sorted + unique
	s.insert("abc"); /// 0(logn)
	s.insert("def");
	s.insert("ghi");
	s.insert("jkl");
	for(auto str:s)
	{
		cout<<str<<endl;
	}
	set<string,greater<string>>::iterator it;
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<(*it)<<endl;
	}


	set<int>si;
	for(int i=0;i<5;i++)
	{
		int x;
		cin>>x;
		si.insert(x);
	}
	auto i1=si.lower_bound(3); /// lower_bound is equal or greater than oi element
	cout<<*i1<<endl;

	auto i2=si.upper_bound(4); /// upper_bound is strictly greater than that element
	cout<<*i2<<endl;

	auto p=si.count(4); /// check if that element is present or not
	cout<<p<<endl;



	for(auto &is:si)
	{
		cout<<is<<" ";
	}
	cout<<endl;
	auto it1=s.find("abc");
	cout<<*it1<<endl;

	string k;
	cin>>k;
	if(s.find(k)!=s.end())  /// 0(logn)
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	if(s.find(k)!=s.end())
	{
		s.erase(k);
	}
	s.erase("def");
	for(auto str:s)
	{
		cout<<str<<endl;
	}

	/// print unique strings in lexicographical order
	set<string>s1;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		s1.insert(a);
	}
	for(auto val:s1)
	{
		cout<<val<<endl;
	}

	/// check if string is present in given strings or not by n queries
	unordered_set<string>s2; /// sorted na + unique
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		string a;
		cin>>a;
		s2.insert(a);
	}
	int q;
	cin>>q;
	while(q--){
		string r;
	    cin>>r;
		if(s2.find(r)==s2.end())
		{
			cout<<"no"<<endl;
		}
		else
		{
			cout<<"yes"<<endl;
		}
	}


	/// Multiset
	multiset<string>mul; /// sorted order e jotober ache print korbe
	mul.insert("abc");
	mul.insert("def");
	mul.insert("ghi");
	mul.insert("jkl");
	mul.insert("abc");
	for(auto str:mul)
	{
		cout<<str<<endl;
	}
	//auto itt=mul.find("abc"); /// iterator oi element point kore. specific oi element erase kore
	//if(mul.find(*itt)!=mul.end())
	//{
	//	mul.erase(itt);
	//}
	//if(mul.find("abc")!=mul.end())  /// oi element jotober ache erase kore
	//{
	//	mul.erase("abc");
	//}
	mul.erase("abc");
	for(auto str:mul)
	{
		cout<<str<<endl;
	}
}


/*8
abc
def
abc
ghj
jkl
ghj
ghj
abc


*/
