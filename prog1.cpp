#include <iostream>
using namespace std;
	/* declaration de la class */
class MyClass
{
    public:
    int x,y;
    MyClass();
    ~MyClass();
};
	/* definition du constructeur en dehors de la class */
MyClass::MyClass(){
    	cout<<"donner deux nombres: "<<endl;
    	cin >>x;
    	cin >>y;
	};
	/* definition du constructeur en dehors de la class */
MyClass::~MyClass(){
    cout<<"la somme de ces deux nombres est : "<<x+y<<endl;
	};

int main()
{
    MyClass();
    /* création d'un objet d'une classe dans la fonction main */
    MyClass obj;
    obj.x=3;
    obj.y=5;
    return 0;
}
