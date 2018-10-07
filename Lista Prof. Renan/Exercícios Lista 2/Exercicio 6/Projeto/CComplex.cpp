	#include "CComplex.h"
	using namespace std;
	#include <cmath> 			// por padrao usa o radiano
	#define pi 3.14159265359 
	CComplex::CComplex(){			//construtor
		real=0;
		img=0;
		modulo=0;
		ang=0;
		ang_rad=0;
	}
	CComplex::CComplex(float a,float b){		//construtor entrada
		real=a;
		img=b;
		modulo=0;
		calc_polar();
	}
	void CComplex::calc_ret(){				//Caso a entrada seja dada em coordenadas polares
		real = modulo*cos(ang*pi/180);		//necessário angulo em radiano
		img = modulo*sin(ang*pi/180);
		return;
	}
	void CComplex::calc_polar(){			// Cálculo das coordenadas polares
			ang_rad = atan2(img,real);				
			ang = (ang_rad*180)/pi;			
			modulo = sqrt(pow(real,2)+pow(img,2));
			return;
	}
	void CComplex::set_ret(float a, float b){			// passagem de argumentos para os atributos do objeto
		real=a;
		img=b;
		calc_polar();									// posso fazer isso? é considerado fora do padrão?															
		return;
	}
	void CComplex::operator=(CComplex C1){			//operador atribuição complexos
		real= C1.real;
		img = C1.img;
		calc_polar();
		return;
	}
	CComplex CComplex::operator+(CComplex C1){		//operador soma complexos
		CComplex soma;
		soma.real = real + C1.real;
		soma.img = img + C1.img;
		return soma;
	}
	CComplex CComplex::operator-(CComplex C1){		//operador subtração complexos
		CComplex subt;
		subt.real = real - C1.real;
		subt.img = img - C1.img;
		return subt;
	}
	CComplex CComplex::operator*(CComplex C1){		//operador produto complexos
		CComplex prod;
		prod.real=(real*C1.real - img*C1.img);
		prod.img=(real*C1.img + img*C1.real);
		return prod;
	}
	CComplex CComplex::operator/(CComplex C1){		//	operador divião complexos
		CComplex div;																//cuidado: numero complexo divisor não pode ser nulo
		div.real = (real*C1.real + img*C1.img)/(pow(C1.real,2)+pow(C1.img,2));
		div.img =(img*C1.real - real*C1.img)/(pow(C1.real,2)+pow(C1.img,2)); 
		return div;
	}
	CComplex CComplex::operator+(float f1){			//operador soma complexo real (messao ordem)
		CComplex soma;
		soma.real = real + f1;
		soma.img = img;
		return soma;
	}
	CComplex CComplex::operator-(float f1){			//operador subtração complexo real (messao ordem)
		CComplex subt;
		subt.real = real - f1;
		subt.img = img;
		return subt;
	}
	CComplex CComplex::operator*(float f1){			//operador produto complexo real (messao ordem)
		CComplex prod;
		prod.real=real*f1;
		prod.img=img*f1;
		return prod;
	}
	CComplex CComplex::operator/(float f1){			//operador divisão complexo real (messao ordem)	
		CComplex div;								//cuidado: numero real divisor não pode ser nulo
		div.real = real/f1;
		div.img =img/f1; 
		return div;
	}
