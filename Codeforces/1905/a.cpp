#include<bits/stdc++.h>

using namespace std;

int solve(int a,int b, int c){
	if(a == b)
		return c;
	else if(a == c)
		return b;
	return a;
}

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b,c;
		cin >> a >> b >> c;
		cout << solve(a,b,c) << endl;
	}
	return 0;
}
