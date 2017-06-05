/*Test if string is toggled.*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string S;
	string ans;
	int a;
	cin>>S;
	for(int i = 0; i<S.length(); i++)
	{
		//printf("%d\n", (int)S.at(i));	
		if(((int)S.at(i)) >= 97 && ((int)S.at(i)) <= 122)
		{
			//printf("%d\n", ((int)(S.at(i))-32));
			ans += (char)((int)(S.at(i))-32);
		}
		else if(((int)S.at(i)) >= 65 && ((int)S.at(i)) <= 90)
		{
			ans += (char)((int)(S.at(i))+32);
		}
	}
	cout<<ans<<endl;
	return 0;
}
