#include <iostream>
using namespace std;
class Animal{
    public:
    string nom;
    int age;

    void set_value(string n,int a, string l){
        nom = n;
        age = a;
   
    }

};

class Zebra:public Animal{
    public:
    string lieu;

    void set_value(string n,int a, string l){
        lieu = l;
      cout<<"le nom est: "<<n<<",l'age est: "<<a<<",lieu est: "<<l<<endl;
    }
};
class Dolphin:public Animal{
    public:
    string lieu;

    void set_value(string n,int a, string l){
        lieu = l;
      cout<<"le nom est: "<<n<<",l'age est: "<<a<<",lieu est: "<<l<<endl;
    }

};
int main(){
    Zebra z;
    z.set_value("serena",16,"AFRIQUE DU SUD");

    Dolphin d;
    d.set_value("sanka",17,"USA");
};
