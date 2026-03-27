#include <iostream>

using namespace std;

int main()
{
  class Compte
  private:
      double compte;
  public:
 void init(double montant)
  {
    if(montant<0)
        compte=0;
    if(montant>0)
        compte=montant;
  }
 void deposer(double montant)
  {
      if(montant>0)
        compte+=montant
  }
 void retirer(double montant)
  {
  if(montant>=compte)
        compte=0;
  if(montant<comte)
    comte-=montant;
  }
  double getcompte()const
  {
      return compte;
  }
  void afficher()
  {
      cout<<"compte bancaire:"<<compte<<"fifa"<<endl;
  }
};
int main()
{
    compte c;
    c.init(10000);
    c.afficher();
    cout<<C.getcompte()<<endl;
    c.deposer(20000);
    c.retirer(5000);
    compte d
    d.init(c.getcompte);
    d.afficher();
    return 0;
}
