#include<iostream>
using namespace std;
struct sanpham
{
	string tensanpham;
	double gia;
};
int main()
{
	double n, trungbinh,tong;
	sanpham *mathang;
	mathang = new sanpham[10000];
	cout<<"nhap vao so luong san pham: ";
	cin>>n;
	tong=0;
	trungbinh=0;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		cout<<"nhap vao ten san pham thu "<<i+1<<": ";
		getline(cin,mathang[i].tensanpham);
		cout<<"nhap vao gia cua san pham thu "<<i+1<<": ";
		cin>>mathang[i].gia;
		tong+=mathang[i].gia;
		cin.ignore();
	}
	for(int i=0; i<n; i++)
	{
		cout<<"thong tin cua san pham thu:"<<i+1<<"\t"<<"ten:"<<mathang[i].tensanpham<<"\t"<<"gia:"<<mathang[i].gia<<endl;
	}
	trungbinh=tong/n;
	cout<<"gia trung binh cua mat hang la: "<<trungbinh;
	delete []mathang;
	return 0;
}
