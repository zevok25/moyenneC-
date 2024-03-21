#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>


void calculMoyenne(std::vector<int> &td) {
    int somme = 0;
    std::cout << "La taille du tableau : " << td.size() << std::endl;
// empty vérifie si le tableau est vide
// ! = si le tableau n'est pas vide
    if (!(std::empty(td))) {
        for (int i: td) {
            somme += i;
        }
        int result = somme / td.size();
        std::cout << "Moyenne : " << result << std::endl;
        if (result <= 20) {
            std::cout << "Mauvais" << std::endl;
        } else if (result <= 30) {
            std::cout << "Bon" << std::endl;
        }
    }else
    {
        std::cout<< "Tu as aucune note " << std::endl;
    }

}

void enterNumber(std::vector<int> &user)
{
        while(true)
        {
            std::cout<<"Entrez le nombre de note que vous souhaitez (pour annuler entrer une valeur négative) : " << std::endl;
            int number = 0;
            while (!(std::cin >> number))
            {
                std::cout << "Erreur ! Recommence" << std::endl;
                std::cin.clear();
                std::cin.ignore(255, '\n');
            }
            if(number < 0)
            {
                break;
            }
            user.push_back(number);
        }
    std::cin.clear(); // Efface les éventuelles erreurs de saisie
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Efface le reste de la ligne après la saisie des nombres
    std::cout<< "------------------" << std::endl;
        int index = 0;
        for(int i : user )
        {
            std::cout<< "index " << index << " : " << i << std::endl;
            index++;
        }
    std::cout<< "------------------" << std::endl;

}

int main() {
    std::vector<int> td{};
    enterNumber(td);
    calculMoyenne(td);
    return 0;
}
