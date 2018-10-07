	class CComplex {				
		private:
		float real,img,modulo,ang,ang_rad;
		public:
		CComplex();
		CComplex(float,float);
		float get_real(){return real;};
		float get_img(){return img;};
		float get_modulo(){return modulo;};
		float get_ang(){return ang;};
		void set_ret(float,float);
		void calc_polar();
		void calc_ret();
		void operator=(CComplex);
		CComplex operator+(CComplex);
		CComplex operator-(CComplex);
		CComplex operator*(CComplex);
		CComplex operator/(CComplex);
		CComplex operator+(float);
		CComplex operator-(float);
		CComplex operator*(float);
		CComplex operator/(float);
		friend CComplex operator+(float,CComplex);	
		friend CComplex operator-(float,CComplex);
		friend CComplex operator/(float,CComplex);
		friend CComplex operator*(float,CComplex);	
	};
