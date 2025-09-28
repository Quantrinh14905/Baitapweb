#include<iostream>
using namespace std;
int main()
{
	double calo1phut,calo;
	calo1phut=180/60;
	for(int i=2; i<=14;i+=2)
	{
		calo=calo1phut*i;
		cout<<"so calo trong vong "<<i<<"phut la: "<<calo<<endl;
	}
	
}
