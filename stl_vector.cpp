#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector<int>v,v1;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);   /// O(1)
	}
	int s=0;
	s=accumulate(v.begin(),v.end(),0);
	cout<<s<<endl;
	for(auto it:v)
	{
		cout<<it<<" ";
	}
	cout<<endl;
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	cout<<v.max_size()<<endl;
	cout<<v.front()<<endl;
	cout<<v.back()<<endl;
	cout<<v.at(3)<<endl;
	cout<<v[3]<<endl;
	v.resize(14,5);
	for(auto it:v)
	{
		cout<<it<<" ";
	}
	cout<<endl;
    if(v.empty())
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	v.shrink_to_fit();
	cout<<v.size()<<endl;
	for(auto it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<'\n';
	int *p=v.data(); /// first element tar address hold  kore
	cout<<*p<<endl;

	int c=0;
	while(!v.empty())
	{
		c++;
		v.pop_back();
	}
	cout<<c<<endl;

	for(int i=0;i<n;i++)
	{
		v1.emplace_back(i);
	}
	v1.erase(v1.begin()+2);
	cout<<v1.size()<<endl;
	for(auto it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<'\n';

	/// Iterators
	for(auto i=v.begin();i!=v.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<'\n';
	for(auto i=v.rbegin();i!=v.rend();i++)
	{
		cout<<*i<<" ";
	}
	cout<<'\n';
	for(auto i=v.cbegin();i!=v.cend();i++)
	{
		cout<<*i<<" ";
	}
	cout<<'\n';
	for(auto i=v.crbegin();i!=v.crend();i++)
	{
		cout<<*i<<" ";
	}
	cout<<'\n';
	/// lower bound
	int k;
	cin>>k;
	auto x=lower_bound(v.begin(),v.end(),k)-v.begin();
	cout<<x<<endl;

	/// upper bound

	cin>>k;
	auto y=upper_bound(v.begin(),v.end(),k)-v.begin();
	cout<<y<<endl;

	/// fill(), fill_n()
	fill(v.begin()+2,v.end(),8);
	fill_n(v.begin()+1,5,9);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";  /// 0(1)
	}
	cout<<'\n';

	int n1;
	cin>>n1;
	vector<int>v2;
	int a[100];
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}

	v2.assign(a,a+n1);
	v2.assign(4,10); /// 4 bar 10 print krbe
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<'\n';
	v2.push_back(45); /// last e 45 insert krbe
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<'\n';
	v2.pop_back(); /// last element pop or remove krbe
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<'\n';
	v2.insert(v2.begin()+3,70); /// 1st thk 4 no position e 70 insert krbe
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<'\n';
	v2.erase(v2.begin()); /// 1st element erase krbe
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<'\n';
	v2.emplace(v2.begin(),9); /// inserts at the begining
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<'\n';
	v2.emplace_back(20); /// inserts at end
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}
	cout<<'\n';
	cout<<v2.back()<<endl;
	v2.clear(); /// vector r shb element delete kore dibe
	cout<<v2.size()<<'\n';


	///print vowel consonant
	string st;
	cin>>st;
	vector<set<char>>vt(3);
	for(int i=0;i<st.length();i++)
	{
		if(st[i]>='a' && st[i]<='z')
		{
			if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u')
			{
				vt[0].insert(st[i]);
			}
			else
				vt[1].insert(st[i]);
		}
		else
			vt[2].insert(st[i]);
	}
	for (int i=0;i<vt.size();i++)
	{
		for(auto x:vt[i])
		{
			cout<<x<< " ";
		}
	}
	cout<<endl;

	int r,c,x;
	cin>>r;
	vector<vector<int>>v2d;  /// vector of vectors(no. of rows and no. of columns fixed na)
	vector<int>b;
	for(int i=0;i<r;i++)
	{
		cin>>c;
		for(int j=0;j<c;j++)
		{
			cin>>x;
			b.push_back(x);
		}
		v2d.push_back(b);
	}
	v2d[1].push_back(10);
	///sort(v2d.begin(),v2d.end(),greater<int>());
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<v2d[i].size();j++)
		{
			cout<<v2d[i][j]<<" ";
		}
		cout<<endl;
	}
	
	/// vector of set
	int p;
	cin>>p;
	vector<set<int>>vs;
	set<int>s;
	for(int i=0;i<p;i++)
	{
		int x;
		cin>>x;
		s.insert(x);
		vs.push_back(s);
	}
	for(int i=0;i<vs.size();i++)
	{
		for(auto j=vs[i].begin();j!=vs[i].end();j++){
		   cout<<*j<<" ";
	    }
	    cout<<endl;
	}


	/// 2d vector and 3d vector
	/// define 10 x 20 vector
	/// vector of arrays or vector of vectors
	vector<vector<int>>vect(10,vector<int>(20,0));
	for(auto it:vect)
	{
		for(auto it1:it)
		{
			cout<<it1<<" ";
		}
		cout<<endl;
	}

	/// vector of vectors (5ta vector declare)
	vector<int>a[5];
	a[0].push_back(4); /// dynamic in case of rows
	a[1].push_back(40);
	a[3].push_back(44);

	for(auto it:a)
	{
		for(auto it1:it)
		{
			cout<<it1<<" ";
		}
		cout<<endl;
	}


	/// 3d arrays 10x20x30

	vector<vector<vector<int>>>v4(10,vector<vector<int>>(20,vector<int>(30,0)));
	/// dynamic in case of both rows and columns
	for(auto it:v4)
	{
		for(auto it1:it)
		{
			for(auto it2:it1)
		    {
			    cout<<it2<<" ";
		    }
		}
		cout<<endl;
	}

	vector<int>v1={1,2,3};
	vector<int>v2={4,5};
	vector<int>v3={6,7,8};
	vector<vector<int>>v;
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	for(auto it:v)
	{
		for(auto it1:it)
		{
			cout<<it1<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}


	int n;
	cin>>n;

	vector<int>k1,k2;
	for(int i=0;i<n;i++)
	{
		int h;
		cin>>h;
		k1.emplace_back(h);
	}
	for(int i=0;i<n;i++)
	{
		int h;
		cin>>h;
		k2.emplace_back(h);
	}
	vector<int>g(k1.size()+k2.size());
	sort(k1.begin(),k1.end());
	sort(k2.begin(),k2.end());
	auto i1=set_intersection(k1.begin(),k1.end(),k2.begin(),k2.end(),g.begin());
	auto i2=set_union(k1.begin(),k1.end(),k2.begin(),k2.end(),g.begin());
	for(auto i:g)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	/// vector pair
	vector<pair<string,string>>vp;
	for(int i=0;i<n;i++)
	{
		string a,b;
		cin>>a>>b;
		vp.push_back(make_pair(a,b));
	}
	sort(vp.begin(),vp.end()); /// O(nlogn)
	for(auto i:vp)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;

	/// vector map
	vector<int>v,v1;
	map<vector<int>,int>m;
	for(int i=0;i<n;i++)
	{
		    int x;
			cin>>x;
			v.push_back(x);

	}
    for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		v1.push_back(p);

	}
    m[v1]=1; /// visited
		if(m.find(v)!=m.end())
		{
			cout<<"yes";
		}
		else
			cout<<"no";


	vector<int>ar={1,2,3,4,5,6};
	auto it1=next(ar.begin(),3);
	auto it2=prev(ar.end(),3);
	cout<<*it1<<endl<<*it2<<endl;


	//vector<int>v2=ar;  /// ar vector er values v2 te copy holo but v2 te change korle ar e change hobe na...
	vector<int>&v2=ar; /// reference pointer so copy na actual vector pass hoy. copy kora expensive operation
	v2.emplace_back(7);
	for(auto i:ar)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:v2)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	/// vector of arrays  (no. of rows fixed,but no. of columns fixed na)
	const int N=3;
    int n;

	vector<int>v[N];
	for(int i=0;i<N;i++)
	{
		cin>>n;
		for(int j=0;j<n;j++)
		{
			int x;
			cin>>x;
			v[i].push_back(x);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}
/*
3
1 2 3
2
5 6
4
9 8 7 6
*/

/// vector of vectors, vector of arrays, vector map, vector pair, vector set, 2d vector, 3d vector
