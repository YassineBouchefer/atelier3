#include <iostream>
using namespace std;
class Complexe {
	public:
	double r; 
	double i; 
	void multip(Complexe, Complexe);
	void add(Complexe, Complexe);
	void subtract(Complexe, Complexe);
	void print();
};

//la multiplication

void Complexe::multip(Complexe val1,Complexe val2){
	r=val1.r*val2.r - val1.i*val2.i;
	i=val1.r*val2.i +val1.i*val2.r;
}
//l'addition
void Complexe::add (Complexe val1, Complexe val2) {
r = val1.r + val2.r;
i = val1.i + val2.i;
}
//la soustraction
void Complexe::subtract (Complexe val1, Complexe val2) {
r = val1.r - val2.r;
i = val1.i - val2.i;
}
//l'affichag
void Complexe::print () {
	if(i>=0){
	
cout<< ""<<r<<" + "<<i<<"i"<<endl;}
else
cout<< " "<<r<<" - "<<-i<<"i"<<endl;
}


int main () {
int k;
Complexe comp1, comp2, result;
cout << "entrez la partie reelle  du premier nombre complexe: " << endl;
cin >> comp1.r;
cout << "entrez la partie imaginaire du premier nombre complexe  : " << endl;
cin >> comp1.i;
cout << "entrez la partie reelle  du deuxieme nombre complexe:  " << endl;
cin >> comp2.r;
cout << "entrez la partie imaginaire   du deuxieme nombre complexe: " << endl;
cin >> comp2.i;
//pour choisir une des 3 operations
cout<<"choisir l'operation: \n 1 : pour l'addition\n 2 : pour la soustraction\n 3 : pour multiplication\n";
cin>>k;
// pour ne pas choisir un nombre different de 1,2 ou 3
while(k>3||k<1){
	cout<<"choisir un nombre entre 1 et 3 correspandant a l'operation que vous voulez: \n";
	cin>>k;
}
if(k==1){
	cout << "la somme est : ";
result.add(comp1, comp2);
result.print();
}
else
if(k==2){
	cout << "la difference est : ";
result.subtract(comp1, comp2);
result.print();
}
else
{
cout<<"le produit est :";
result.multip(comp1,comp2);
result.print();
}
}
