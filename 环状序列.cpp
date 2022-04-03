#include<iostream>
#include<cstring>
using namespace std;
int less1(const char* s,int p,int q)
{
	int n=strlen(s);
	for(int i=0;i<n;i++)
	if(s[(p+i)%n]!=s[(q+i)%n])
	return s[(p+i)%n]<s[(q+i)%n];
	return 0;
}
main()
{
	char s[105];
	int t;
	cin>>t;
	cin.get(); 
while(t--)
{cin.getline(s,105);
int ans=0;
int n=strlen(s);
for(int i=1;i<n;i++)
if(less1(s,i,ans))ans=i;
for(int i=0;i<n;i++)
cout<<s[(i+ans)%n];
cout<<endl;
}
	return 0;
 } 
