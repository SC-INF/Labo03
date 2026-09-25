#include <iostream>
#include <string>
using namespace std;

int main()
{
    string noCompte{};
    string nomDeFamille{};
    double soldeCompte = {1000.0};
    double retraitEuro{0.0};
    double retraitChf{0.0};
    const double taux_de_change = 1.024;
    const double fraisOperation = 5.0;

    cout << "Bienvenu ? la banque HEIG-VD" << '\n';
    cout << "Quel est votre num?ro de compte ?" << '\n';
    cin >> noCompte;

    cout << "Quel est votre nom d'utilisateur ?" << '\n';
    cin >> nomDeFamille;

    cout << "Solde de votre compte CHF : " << soldeCompte << '\n';
    cout << "Taux de change : 1 CHF = " << taux_de_change << " Euro" << '\n';
    cout << "Frais d?op?ration : " << fraisOperation << " CHF" << '\n';

    cout << "Entrez le montant du retrait en Euro : ";
    cin >> retraitEuro;

    retraitChf = retraitEuro / taux_de_change;

    

    return 0;
}
