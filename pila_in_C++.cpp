// pila con inizializzazione dinamica della dimensione scritta in C++ e puntatore che punta al primo vuoto 

#include <iostream> 
using namespace std; 

class pila 
{

private: 
	int dim; 
	int *V; 
	int punt_t;

public:
	pila (int A) // costruttore 
	{
		dim = A; 
		punt_t=0; 
		cout<<"\n\n costruttore \n\n"; 
		V = new int[dim]; // new e' un costrutto del C++ che svolge lo stesso ruolo visto gia con mallor in C
		// quando chiamo questa funzione do quindi un valore a dim inizializzo un puntatore al primo vuoto della pila 
		// ed inizializzo dinamicamente la dimensione del vettore che ora avra' dimensione dim ilquale a sua volta avra' valore A
		// E' IMPORTANTE capire che posso generare dei costruttori anche in programmi non dinamici 
		// quando genero dei costruttori conviene generare anche dei distruttori
	}
	void push(); 
	void pop(); 
	void punt(){cout<<"\n\t Il puntatore e' in posizione: "<<punt_t;}; //inline automatico. Questa funzione quando chiamata mi restituisce la posizione del puntatore
	void visualizza(); 
	~pila() // questo e' il distruttore esso viene indicato con lo stesso nome della classe di appartenenza ma preceduto da ~
	{
		cout << "\n distruttore chiamato \n\n";
		delete[]V; // svolge la stessa funzione di "free" in C
		// il distruttore serve poiche avendo usato una allocazione dinamica alla fine del programma dobbiamo liberare la memoria
	}
};

void pila::visualizza() // questa funzione permette di leggere gli elementi nella pila 
{
	int i; 
	cout<<"\n"; 
	if(punt_t == 0)
		cout<< "\n\n Pila vuota \n\n";
	else 
	{
		for (i = 0; i <punt_t; i++)
			cout << V[i]<<"\t";
	}
};

void pila::push()
{
	if (punt_t<dim) // controllo che la pila non sia piena ovvero il primo vuoto si deve trovare in una posizione minore di dim altrimenti 
		// risulterebbe che il primo vuoto si trova fuori dalla pila e questo vuol dire che la stessa e' vuota 
	{
		cout << "\n inserire un valore nella pila:"; 
		cin >> V[punt_t]; // cin svolge lo scanf e quindi riceve un dato in input e lo va a mettere nel vettore V in posizione V[punt_t]
		// che per come abbiamo costruito il programma e' l'ultimo vuoto 
		punt_t++; // incremento il puntatore per puntare sempa al primo vuoto 
	}
	else 
		cout<< "\n\n\t La pila e' piena \n\n";
};

void pila::pop()
{
	if (punt_t > 0)
	{
		punt_t--; 
		cout << "Estrazione dell' elemento:  " << V[punt_t]; 
	}
	else 
		cout << "\n\n\t La pila e' vuota \n\n";
}; 

int main()
{ 
	int n; 
	cout << "\n inserire la grandezza della pila \n"; 
	cin >> n; 
	pila p(n); //chiamo il costruttore e genero un oggetto 
	int scelta = -1; 
	while (scelta!= 0 ) // genero un menu' che mi permette di fare cose diverse a seconda del dato che inserisco 
		{ 
			cout <<"\n 1 push \n 2 pop \n 3 visualizza \n 0 esci \n"; 
			cin >> scelta; 
			if (scelta == 1) 
				{ 
					p.push(); // inserisco il valore 
					p.punt(); // visualizza l'indice del vettore
				}
			else
				if(scelta == 2)
				{ 
					p.pop(); // estraggo
					p.punt(); // come sopra
				} 
			}
			system("PAUSE");
			return 0;	
		}











