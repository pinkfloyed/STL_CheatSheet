#include<bits/stdc++.h>
using namespace std;
vector<int>next_greater(vector<int>&v)
{
	stack<int>st;
	vector<int>nge(v.size(),-1);
	for(int i=0;i<v.size();i++)
	{
		while(!st.empty() && v[i]>v[st.top()])
		{
			nge[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty())
	{
		nge[st.top()]=-1;
		st.pop();
	}
	return nge;
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	vector<int>nge=next_greater(v);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" "<<(nge[i]==-1?-1:v[nge[i]])<<endl;
	}
}

/*
6
4 5 25 2 7 8
*/

















/*int main()
{
	stack<int>s;
	s.push(2);
	s.push(5);
	s.push(20);
	s.push(22);
	s.push(10);
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

unordered_map<char,int>mp={{'[',-3},{'{',-2},{'(',-1},{']',3},{'}',2},{')',1}};
string isbalanced(string s)
{
	stack<char>st;
	for(char ch:s)
	{
		if(mp[ch]<0)
		{
			st.push(ch);
		}
		else
		{
			if(st.empty())
			{
				return "NO";
			}
			char t=st.top();
			st.pop();
			if(mp[t]+mp[ch]!=0)
			{
				return "NO";
			}
		}
	}
	if(st.empty())
		return "YES";
	return "NO";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
	cin>>s;
	cout<<isbalanced(s)<<endl;
	}
}
*/
/*
3
{[()]}
{[(])}
{{[[(())]]}}
*/
