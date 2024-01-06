#include<bits/stdc++.h>

using namespace std;
using ii = int;
using li = long long int;
using vi = vector<ii>;
using vii = vector<li>;

void solve()
{
	ii n;
	cin >> n;
	for(int x = 0; x <= n; x++){
		for(int y = 0; y <=n; y++){
			for(int z = 0; z <=n; z++){
				if((x+y+z) <= n){
					cout << x << ' ' << y << ' '<< z << endl;
				}
			}
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
	return 0;
}
