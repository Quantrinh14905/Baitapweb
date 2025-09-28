#include<iostream>
using namespace std;
struct sinhvien
{
	string ten;
	double diemtb;
};
int main()
{
	int soluong,n;
	sinhvien *slsinhvien;
	slsinhvien= new sinhvien[10000];
	cout<<"nhap vao so luong sv: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"nhap vao ten sinh vien: ";
		cin>>slsinhvien[i].ten;
		cout<<"nhap vao diem trung binh cua sinh vien: ";
		cin>>slsinhvien[i].diemtb;
		if(slsinhvien[i].diemtb>5)
		{
			soluong++;
		}
	}
	for(int i=0; i<n;i++)
	{
		cout<<slsinhvien[i].ten<<"\t"<<slsinhvien[i].diemtb<<endl;
	}
	cout<<"so luong sv diem tren 5 la: "<<soluong;
	return 0;
}
