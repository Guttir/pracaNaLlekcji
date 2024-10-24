#include <iostream>
#include <string>
using namespace std;

class Figura {
	private:
		//zmienne 
		string nazwa;
		float obwod;
		float pole;
	public:	
		//konstruktor
		Figura(string _nazwa = "", float _obwod = 0, float _pole = 0){
			nazwa = _nazwa;
			obwod = _obwod;
			pole = _pole;
		}
		//setter and getter 'nazwa'
		string getNazwa(){
			return nazwa;
		}
		void setNazwa(string _nazwa){
			nazwa = _nazwa;
		}
		//setter and getter 'obwod'
		float getObwod(){
			return obwod;
		}
		void setObwod(float _obwod){
			obwod = _obwod;
		}
		//setter and getter 'pole'
		float getPole(){
			return pole;
		}
		void setPole(float _pole){
			pole = _pole;
		}
		//wyswietlic informacje 
		void showInf (){
			cout<<nazwa<<": "<<obwod<<" | "<<pole<<endl;
		}
};
class Bank{
	private:
		string konto;		
		string id;
		int balance;
	public:
		//konstruktor
		Bank(string _konto = "",string _id = "" ,int _balance = 0){
			konto = _konto;
			id = _id;
			balance = _balance;
		}
		//gettery
		string getKonto (){ return konto; }
		string getId () { return id; }
		int getBalance () { return balance; }
		
		//settery
		void setKonto ( string _konto ) { konto = _konto; }
		void setId ( string _id ) { id = _id; }
		void setBalance ( int _balance ) { balance = _balance; }
		//wyswietlic konta
		void showInf () {
			cout<<"Konto: "<<konto<<" id: "<<id<<" balance: "<<balance<<endl;
		}
		
};
class kalkulator {
	private:
		double liczba1;
		double liczba2;
		string znak;
	public:
		kalkulator(double _liczba1)
		
		void setLiczba1(double _liczba1){ liczba1 = _liczba1;		}
		void setLiczba2(double _liczba2){ liczba2 = _liczba2;		}
		void setZnak(string _znak){ znak = _znak		}
		
};
int main(){
	Figura newFigura("Kolo",25.5,10);
	Figura _newFigura("Kwadrat",9,12);
	_newFigura.showInf();
	newFigura.setNazwa("Prostokat");
	newFigura.showInf();
	
	Bank newkonta[10];
	//Bank konto_0("Mykyta Korkishko",1234567890,1000000000);
	newkonta[0] = Bank("Mykyta Korkishko","1234567890",1000000000);//konto_0.showInf();
	newkonta[0].showInf();
	newkonta[1] = Bank("Don Kornison","1234");
	newkonta[1].showInf();
	
	
}
