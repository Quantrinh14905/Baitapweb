#include<iostream>
using namespace std;
int main()
{
	int a, b, c, min;
	cout<<"moi ban nhap vao 3 so nguyen: "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	min=0;
	if(a<b&&a<c)
	{
		min=a;
	} 
	if(b<a&&b<c)
	min=b;
	if(c<a&&c<b)
	{
		min=c;
	}
	cout<<"so be nhat trong 3 so la: "<<min;
	return 0; 
} 
