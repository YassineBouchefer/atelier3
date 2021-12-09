#include <iostream>
using namespace std;
class shape
{
    public:
    float hauteur;
    float largeur;
    float surface;
    shape(float x, float y)
    {
        hauteur = x;
        largeur = y;
    };
};

class triangle
{
    public:
    float hauteur;
    float largeur;
    float surface;
    void shape(float x, float y)
    {
        surface = (x*y)/2;
        cout<<"la surface du triangle est: "<<surface<<endl;
    };
};

class rectangle
{
    public:
    float hauteur;
    float largeur;
    float surface;
    void shape(float x, float y)
    {
        surface = x*y;
        cout<<"la surface du rectangle est: "<<surface<<endl;
    };
};

int main()
{
    rectangle rect;
    cout<<"entrer la hauteur du rectangle: "<<endl;
    cin>>rect.hauteur;
    cout<<"entrer la largeur du rectangle: "<<endl;
    cin>>rect.largeur;
    rect.shape(rect.hauteur, rect.largeur);
	
    triangle trg;
    cout<<"entrer la hauteur du triangle: "<<endl;
    cin>>trg.hauteur;
    cout<<"entrer la largeur du triangle: "<<endl;
    cin>>trg.largeur;
    trg.shape(trg.hauteur, trg.largeur);
    
    return 0;
}
