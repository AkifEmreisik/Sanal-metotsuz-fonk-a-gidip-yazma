#include<iostream>
class Silah{
	public:
		int mermi;
		int isim;
	virtual void ates()= 0;
};

class Tufek : public Silah{
	public:
		int Dizayn;
		int KagisUzunluk;
	void ates(){
		std::cout<<"bom bom"<<std::endl;
	}
};

class Top : public Silah{
	public:
		bool KurmaKolu;
		
	void ates(){
		std::cout<<"Takir takir";
	}
};


int main(){
class Tufek tufek;
class Top top;

tufek.ates();
top.ates();

	
	
return 0;	
}
