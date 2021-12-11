#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif
	string s1, s2, s3;
	getline(cin, s1);
	// cin.ignore();
	getline(cin, s2);
	// cin.ignore();
	getline(cin, s3);

	//	for(int i=0;i<s1.length();i++)
	//	cout<<s1[i]<<" ";
	int count1 = 0, count2 = 0, count3 = 0;
	for (int i = 0;i< s1.length(); i++)
		if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
			count1++;
// cout<<"yes"<<endl;

	for (int i = 0; i<s2.length(); i++)
		if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')
			count2++;

	for (int i = 0;i< s3.length(); i++)
		if (s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u')
			count3++;

// cout<<count1<<" "<< count2<<" "<< count3<<endl;
	if (count1 == 5 || count2 == 7 || count3 == 5)
		cout << "YES";
	else
		cout << "NO";
	// for(char x: s1)
	// if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	// count1++;
	// for(char x: s3)
	// if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	// count3++;
	// for(char x: s2)
	// if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	// count2++;

	// if(count1==5 && count2==7 && count3==5)
	// cout<<"YES";
	// else
	// cout<<"NO";

	return 0;
}