#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <locale.h>
#include <string>
using namespace std;

int main()
{  
    // Idioma e seeds diferentes
    setlocale(LC_ALL, "Portuguese");
    srand((unsigned) time(NULL));
    
    // randomização do pokémon
    int pkmn;
    pkmn = rand() % 1026 + 1;
    cout << "Pokémon gerado -> " << pkmn << endl;
    
    // randomização da nature
    char *words[25]={"Hardy","Lonely","Adamant","Naughty","Brave","Bold","Docile","Impish","Lax","Relaxed","Modest","Mild","Bashful","Rash","Quiet","Calm","Gentle","Careful","Quirky","Sassy","Timid","Hasty","Jolly","Naive","Serious"};
    srand(time(0));
    const string wordList[25]={"Hardy","Lonely","Adamant","Naughty","Brave","Bold","Docile","Impish","Lax","Relaxed","Modest","Mild","Bashful","Rash","Quiet","Calm","Gentle","Careful","Quirky","Sassy","Timid","Hasty","Jolly","Naive","Serious"};
    string word = wordList[rand() % 25];
    cout << word << " Nature" << endl;
    
    // randomização dos ivs
    int hpiv, atkiv, defiv, spaiv, spdefiv, speediv;
    hpiv = rand() % 32;
    atkiv = rand() % 32;
    defiv = rand() % 32;
    spaiv = rand() % 32;
    spdefiv = rand() % 32;
    speediv = rand() % 32;
    cout << hpiv << " HP IVs, " << atkiv << " Attack IVs, " << defiv << " Defense IVs, " << spaiv << " Special Attack IVs, " << spdefiv << " Special Defense IVs, " << speediv << " Speed IVs. " << endl;


return 0;
   
}
