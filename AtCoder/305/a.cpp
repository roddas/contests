#include<bits/stdc++.h>

using namespace std;

int solve(int n)
{
	if(n < 3)
		return 0;
	if(n%5 == 0)
		return n;
	return n%5 < 3 ? n - n%5 :  n - n%5 + 5;
}

int main()
{
	int n;
	cin >> n;
	cout << solve(n) << endl;
	return 0;
}
