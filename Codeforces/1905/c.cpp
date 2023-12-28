#include<bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using vii = vector<long long int>;
#define MAX 3

string solve(vii bars)
{
	long long int count = 0;
	for(auto a : bars)
		count += a;
		
	long long int s = sqrt(count);
	return count == s*s ? "YES" : "NO";
}

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		int s;
		cin >> s;
		vii bars(s);
		for(auto &x : bars)
			cin >> x;
		cout << solve(bars) << endl;
	}
	return 0;
}
