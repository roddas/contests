#include<bits/stdc++.h>

using namespace std;
#define MAX 3

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		char ch = '0';
		for(int i = 0; i < MAX;i++)
		{
			set<char>chars;
			string s;
			cin >> s;
			
			for(auto a : s)
				chars.insert(a);
				
			if(s.find('?') != string::npos)
			{
				if(!chars.count('A'))
					ch = 'A';
				else if(!chars.count('B'))
					ch = 'B';
				else
					ch = 'C';
			}
		}
		cout << ch << endl;
	}
	return 0;
}
