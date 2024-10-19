#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<string>q;
	q.push("abc");
	q.push("hef");
	q.push("ted");
	q.push("zed");
	q.push("pio");
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

