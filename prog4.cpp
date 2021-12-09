#include <iostream>

using namespace std;
//classe mere  avec la methode void display 
class A{
public:
  void display ()
  {
    cout << "La methode display de la classe A est executee\n";
  }
};
// classe fille de la classe A avec la methode void display 
class B : public A{
public:
  void display ()
  {
    cout << "La methode display de la classe B est executee\n";
  }
};

int main ()
{
  B b;
  b.display();
  return 0;
}
