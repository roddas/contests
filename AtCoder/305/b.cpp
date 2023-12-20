#include<bits/stdc++.h>

using namespace std;

int solve(char p, char q)
{
	if(p > q)
		swap(p,q);
	
	if(p == 'A'){
		if(q == 'B')
			return 3;
		else if(q == 'C')
			return 4;
		else if(q == 'D')
			return 3+1+4;
		else if(q == 'E')
			return 3+1+4+1;
		else if(q == 'F')
			return 3+1+4+1+5;
		else
			return 3+1+4+1+5+9;
	}else if(p == 'B'){
		if(q == 'C')
			return 1;
		else if(q == 'D')
			return 1+4;
		else if(q == 'E')
			return 1+4+1;
		else if(q == 'F')
			return 1+4+1+5;
		else
			return 1+4+1+5+9;
	}else if(p == 'C'){
		if(q == 'D')
			return 4;
		else if(q == 'E')
			return 4+1;
		else if(q == 'F')
			return 4+1+5;
		else
			return 4+1+5+9;
	}else if(p == 'D'){
		if(q == 'E')
			return 1;
		else if(q == 'F')
			return 1+5;
		else 
			return 1+5+9;
	}else if(p == 'E'){
		if(q == 'F')
			return 5;
		else
			return 5+9;
	}
	return 9;
}

int main()
{
	char p,q;
	cin >> p >> q;
	cout << solve(p,q) << endl;
	return 0;
}
