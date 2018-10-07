 #include <cstdlib>
 #include <iostream>
 #include <cmath>
 #include <clocale>
 #define pi 3.14159265359
 using namespace std;
 class formas{
       protected:
              float dim1, dim2;
              float area;			//area total
       public:
			virtual ~formas();
			virtual void calc_area() = 0;
			virtual void calc_volume()=0;
			virtual void ler_dados() = 0;
			virtual float get_volume()=0;
			float get_area (){return area;};
//			virtual float get_area() {return area;};
//			virtual float get_volume(){return vol;};       
};

formas::~formas(){
	cout<<"Destrutor de formas executado"<<endl;
}

class prisma:public formas{
	protected:
		char nome = 'Prisma';
		float Afl, Ab, vol; 	//arestas da base / area face lateral / area da base / volume
		int apot,peri,n,h;			//apotema /perimetro /numero de lados /altura
	public:
		~prisma();
		void calc_area();
		void calc_volume();
        void ler_dados();
		float get_volume(){return vol;};
	//	void dim_aloc();
};
prisma::~prisma(){
	cout<<"Destrutor de prisma executado"<<endl;
}
void prisma::ler_dados(){
	cout<<"Número de lados: ";
	cin>>n;
	cin.ignore(10,'\n');
	cout<<endl<<"Altura do prisma: ";
	cin>>h;
	cin.ignore(10,'\n');
	cout<<endl<<"A base do prisma deve ser um polígono regular"<<endl;
	cout<<"Perímetro do polígono: ";
	cin>>peri;
	cin.ignore(10,'\n');
	cout<<endl<<"Apótema do polígono: ";
	cin>>apot;
	cin.ignore(10,'\n');
	cout<<endl;
}
void prisma::calc_area(){
	float Afl,Ab;	      		//Area face lateral; Area da base		
	Ab = (peri/2)*apot;	  		//area de um poligono regular é metade do perimetro vzs o apótema
	Afl = (peri/n)*h;	 		//area face lateral
	area = (Afl*n)+(2*Ab);		//area total = 2 vzs area da base + n vzs a area de uma face lateral
}
void prisma::calc_volume(){
	vol = (peri/2)*apot*h;	
}

class esfera:public formas{
	protected:
		char nome = 'Esfera';
		float raio;
		float vol;
	public:
		~esfera();
		void calc_volume();
		float get_volume(){return vol;};
	  	void ler_dados();
		void calc_area(void);
};
esfera::~esfera(){
	cout<<"Destrutor de esfera executado"<<endl;
}
void esfera::ler_dados(){
	cout<<"Raio da esfera: ";
	cin>>raio;
	cin.ignore(10,'\n');
	cout<<endl;	
}
void esfera::calc_area(){
	area = 4*pi*pow(raio,2);
}
void esfera::calc_volume(){
	vol = (4*pi*pow(raio,3))/3;	
}
formas* ler_codigo(int &i){
	int ind;
	formas* pnt=NULL;
	cout<<"Índice da figura "<<i+1<<":"<<endl;
	cin>>ind;
	switch (ind){
		case 1:
			pnt = new prisma;	
			i++;
			break;
		case 2:
			pnt = new esfera;
			i++;
			break;
		default:
			cout<<"Digite índice válido"<<endl;
			break;	
		}
	return pnt;
}

//impressao(formas *pnt,int j){
//		cout<<"Figura "<<j+1<<":"<<endl;
//		cout<<"Area: "<<pnt->get_area<<endl;
//		cout<<"Volume: "<<pnt->get_volume<<endl;
//}
int main(){
	int i(0),q,ind;
	formas *pnt=NULL;
	setlocale(LC_ALL,"Portuguese");
	cout<<"Quantidade de figuras geométricas: ";
	cin>>q;
	cin.ignore(10,'\n'); 
	cout<<endl<<"Digite o índice correspondente:"<<endl;
	cout<<"Prisma.......................(1)"<<endl;
	cout<<"Esfera.......................(2)"<<endl;
	while(i!=q){
		pnt = ler_codigo(i);
		if(pnt!=NULL){
			pnt->ler_dados();
			pnt->calc_area();
			pnt->calc_volume();
		//	impressao(pnt,i-1);
			cout<<"Figura "<<i<<":"<<endl;
			cout<<"Area: "<<pnt->get_area()<<endl;
			cout<<"Volume: "<<pnt->get_volume()<<endl;
			delete pnt;
		}
	}	
	return 0;
}


