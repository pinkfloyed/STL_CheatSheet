#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/// all_of, none_of(),any_of (true/false return kore)
int main()
{
	cout<<[](int x,int y){return x+y;}(4,3)<<endl;
	auto s=[](int x,int y){return x+y;};
	cout<<s(10000,1234)<<endl;
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<all_of(a.begin(),a.end(),[](int x){return x>0;})<<endl;
	cout<<any_of(a.begin(),a.end(),[](int x){return x>0;})<<endl;
	cout<<none_of(a.begin(),a.end(),[](int x){return x>0;})<<endl;
}
