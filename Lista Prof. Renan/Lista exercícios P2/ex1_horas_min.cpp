#include <clocale>		//setlocale
#include<iostream>
#include<cstdlib>		//system
using namespace std;

void HM(int mnts, int *h, int *m){
	*h=mnts/60;						//caso 60 n�o seja divisor do n�mero de horas, o resultado � truncado para int
	*m = mnts - (*h)*(60);
	//outra maneira de fazer o c�lculo � pelo resto da divisao => operador %
	return;
}

int main(){
	int m(0),h(0),mnts;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Digite o n�mero total de minutos:"<<endl;
	cin>>mnts;
	HM(mnts,&h,&m);
	cout<<"O n�mero total de minutos: "<<mnts<<endl;
	cout<<"Em horas e minutos: "<<h<<" horas e "<<m<<" minutos"<<endl;	
	system("PAUSE");
	return 0;
}


