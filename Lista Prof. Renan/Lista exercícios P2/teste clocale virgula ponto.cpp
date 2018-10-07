//teste entrada clocale
#include <iostream>
#include <clocale>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
	float cinv,cinp,scanv,scanp;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Digite um numero float com separador decimal ','"<<endl;
	cin>>cinv;
	cin.ignore(10,'\n');
	cout<<"Digite um numero float com separador decimal '.'"<<endl;
	cin>>cinp;
	cin.ignore(10,'\n');
	cout<<"Digite novamente o número float com separador decimal ','"<<endl;
	scanf("%f",&scanv);
	cin.ignore(10,'\n');
	cout<<"Digite novamente o número float com separador decimal '.'"<<endl;
	scanf("%f",&scanp);
	cin.ignore(10,'\n');
	cout<<"cinv: "<<cinv<<"\ncinp: "<<cinp<<endl;
	printf("scanv %f, scanp %f",scanv,scanp);
	return 0;
}
