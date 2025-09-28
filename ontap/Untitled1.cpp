#include<iostream>
using namespace std;
int main()
{
	double gio, phut, giay;
	cout<<"nhap vao gio: ";
	cin>>gio;
	if(gio<0||gio>24)
	{
		cout<<"gio khong hop le! ";
	}
	cout<<"nhap vao phut: ";
	cin>>phut;
	if(phut<0||phut>60)
	{
		cout<<"phut khong hop le! ";
	}
	cout<<"nhap vao giay: ";
	cin>>giay;
	if(giay<0||giay>60)
	{
		cout<<"giay khong hop le! ";
	}
	cout<<gio<<":"<<phut<<":"<<giay;
	return 0;
}
