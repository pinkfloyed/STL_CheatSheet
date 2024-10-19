#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*array<int,5>a;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	*/
	array<int,5>a={2,5,4,3,7};
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	sort(a.begin(),a.end()); /// InBuilt Sort (3 sorting algorithms used : quick sort, merge sort, heap sort)
	array<int,5>b;
	b.fill(1);
	for(auto i:b)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	a.swap(b);
	for(auto i:a)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:b)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto it=a.begin();it!=a.end();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;
	for(auto it=b.rbegin();it!=b.rend();it++)
	{
		cout<<(*it)<<" ";
	}
	cout<<endl;
	cout<<b.size()<<endl<<b.max_size()<<endl<<b.at(3)<<endl<<b.front()<<endl<<b.back()<<endl<<b.empty()<<endl;
    cout<<get<4>(b)<<endl; /// Accesses the 5th element (index 4)
    int *p=a.data();
    cout<<*p<<" "<<p<<endl;


}

