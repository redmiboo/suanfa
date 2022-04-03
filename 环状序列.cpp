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
//ans为最小表示的第一个元素位置，22行不断更换要比较的字符串，即i为更换比较字符串的第一个元素下标。
//函数是当前最小表示的元素和新字符串元素的逐一比较。元素不同时默认比较的元素比原来的小，23行判断是否为真，为真比较的字符串则为最小表示
