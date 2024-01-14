#include<bits/stdc++.h>

using namespace std;
using ii = int;
using li = long long int;
using vi = vector<ii>;
using vii = vector<li>;

void solve()
{
	int n;
	cin >> n;
	string s = "L";
	
	while(n--)
		s += "o";
		
	s+="ng\n";
	cout << s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
	return 0;
}
