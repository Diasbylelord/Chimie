#include <iostream>

using namespace std;

int main()
{
    class Comptes
    {
    private:
        string nom;
        vector <compte>C;
    public:
        string getnom()const
        {
            return nom;
        }
        double  Somme()const
        {
            double S=0;
            for(int i=0; i<C.size();i++)
            {
                S=S=C[i].getcomte();
            }
            return S;
        }
