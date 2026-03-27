
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Flacon
{
private:
  string nom;
  double volume;
  double pH;
  /*****************************************************
    Compléter le code à partir d'ici
  *******************************************************/
public:
    Flacon(string n, double p, double v): nom(n), pH(p), volume(v){}
    ostream& etiquette(ostream&sortie)const
    {
        sortie<<nom<<":"<<volume<<"ml, pH:"<<pH;
        return sortie;
    };
    friend ostream& operator<<(ostream& os, const Flacon&f)
    {
        return f.etiquette(os);
    };
    friend Flacon operator+(Flacon f,const Flacon& p)
    {
        f.nom=f.nom+"+"=p.nom;
        f.volume+=p.volume;
        double n,d;
        n=(f.volume-p.volume)*pow(10.0,-f.pH)+p.volume*pow(10.0,-p.pH);
        d=f.volume;
        f.pH=-log10(n/d);
        return f;
    };
    Flacon& operator=(const Flacon& f)
    {
        nom+=f.nom;
        volume+=f.volume;
        double n,d;
        n=(volume-f.volume)*pow(10.0-pH)+f.volume*pow(10.0-f.pH);
        d=volume;
        return *this;
    };





};

/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

void afficher_melange(Flacon const& f1, Flacon const& f2)
{
  cout << "Si je mélange " << endl;
  cout << "\t\"" << f1 << "\"" << endl;
  cout << "avec" << endl;
  cout << "\t\"" << f2 << "\"" << endl;
  cout << "j'obtiens :" << endl;
  cout << "\t\"" << (f1 + f2) << "\"" << endl;
}

int main()
{
  Flacon flacon1("Eau", 600.0, 7.0);
  Flacon flacon2("Acide chlorhydrique", 500.0, 2.0);
  Flacon flacon3("Acide perchlorique",  800.0, 1.5);

  afficher_melange(flacon1, flacon2);
  afficher_melange(flacon2, flacon3);

  return 0;

}
