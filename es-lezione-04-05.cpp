#include <iostream>
using namespace std;
class edificio 
{
	int stanze;
	int piani;
	int superficie;
public:
	void imposta_stanze(int);
	int prendi_stanze();
	void imposta_piani(int);
	int prendi_piani();
	void imposta_superficie(int);
	int prendi_superficie();
};

class casa:public edificio
{
	int stanze_da_letto;
	int bagni;
public:
	void imposta_stanze_da_letto(int);
	int prendi_stanze_da_letto();
	void imposta_bagni(int);
	int prendi_bagni();
};
class scuola:public edificio
{
	int aule;
	int uffici;
public:
	void imposta_aule(int);
	int prendi_aule();
	void imposta_uffici(int);
	int prendi_uffici();
};

void edificio::imposta_stanze(int num)
{
	stanze = num;
}
void edificio::imposta_piani(int num)
{
	piani = num;
}
void edificio::imposta_superficie(int num)
{
	superficie=num;
}
int edificio::prendi_stanze()
{
	return stanze;
}
int edificio::prendi_piani()
{
	return piani;
}
int edificio::prendi_superficie()
{
	return superficie;
}
void casa::imposta_stanze_da_letto(int num)
{
	stanze_da_letto=num;
}
void casa::imposta_bagni(int num)
{
	bagni=num;
}
int casa::prendi_stanze_da_letto()
{
	return stanze_da_letto;
}
int casa::prendi_bagni()
{
	return bagni;
}
void scuola::imposta_aule(int num)
{
	aule=num;
}
void scuola::imposta_uffici(int num)
{
	uffici=num;
}
int scuola::prendi_aule()
{
	return aule;
}
int scuola::prendi_uffici()
{
	return uffici;
}

int main()
{
	casa c;
	scuola s;
	c.imposta_stanze(12);
	c.imposta_piani(3);
	c.imposta_superficie(4500);
	c.imposta_stanze_da_letto(5);
	c.imposta_bagni(3);
	cout<<"La casa ha " <<c.prendi_stanze_da_letto();
	cout<<" camere da letto.\n";
	s.imposta_stanze(200);
	s.imposta_aule(180);
	s.imposta_uffici(5);
	s.imposta_superficie(25000);
	cout<<"La scuola ha "<<s.prendi_aule();
	cout<<" aule.\n";
	cout<<"La sua superficie vale "<<s.prendi_superficie()<<".\n";
	return 0;
}
