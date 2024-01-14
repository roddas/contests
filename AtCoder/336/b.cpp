#include<bits/stdc++.h>

using namespace std;
using ii = int;
using li = long long int;
using vi = vector<ii>;
using vii = vector<li>;

void solve()
{
	int n,count = 0;
	cin >> n;
	string binary = bitset<32>(n).to_string();
	
	for(auto i = binary.rbegin(); i != binary.rend();i++){
		if(*i == '1')
		{
			cout << count << endl;
			return;
		}
		++count;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
	return 0;
}
