#include <iostream>
using namespace std;
class Media{
    public:
    string titre;
    void inprimer();
    char *id();
   
};
// Media sons
class Livre:public Media{
    public:
    string livre_titre;
    void lire();

};
class Audio:public Media{
    public:
    string audio_titre;
    void play();

};
class Press:public Media{
    public:
    string press_titre;
    void presenter(){}
};
// Press sons
class Magazine:public Press{
    public:
    string magazine_titre;
    void ecrire(){}
};
class Journal:public Press{
    public:
    string journal_titre;
    void publier(){}
};
class Revue:public Press{
    public:
    string Revue_titre;
    void resultat(){}
};
// Audio sons
class CD:public Audio{
    public:
    string cd_titre;
    void enter(){}
};
class Cassette:public Audio{
    public:
    string cassette_titre;
    void fix(){}
};
class Disque:public Audio{
    public:
    string disque_titre;
    void tourner();
};


