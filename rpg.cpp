#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <locale.h>
#include <string>
using namespace std;

int main()
{  
    // língua e seeds diferentes
    setlocale(LC_ALL, "Portuguese");
    srand((unsigned) time(NULL));
    
    // randomização do pokémon
    int pkmn;
    pkmn = rand() % 1025;
    cout << "Pokémon gerado -> " << pkmn << endl;
    
    // randomização da nature
    char *words[25]={"Hardy","Lonely","Adamant","Naughty","Brave","Bold","Docile","Impish","Lax","Relaxed","Modest","Mild","Bashful","Rash","Quiet","Calm","Gentle","Careful","Quirky","Sassy","Timid","Hasty","Jolly","Naive","Serious"};
    srand(time(0));
    const string wordList[25]={"Hardy","Lonely","Adamant","Naughty","Brave","Bold","Docile","Impish","Lax","Relaxed","Modest","Mild","Bashful","Rash","Quiet","Calm","Gentle","Careful","Quirky","Sassy","Timid","Hasty","Jolly","Naive","Serious"};
    string word = wordList[rand() % 25];
    cout << word << " Nature" << endl;
    
    // randomização dos ivs
    int hpiv, atkiv, defiv, spaiv, spdefiv, speediv;
    hpiv = rand() % 31;
    atkiv = rand() % 31;
    defiv = rand() % 31;
    spaiv = rand() % 31;
    spdefiv = rand() % 31;
    speediv = rand() % 31;
    cout << hpiv << " HP IVs, " << atkiv << " atk IVs, " << defiv << " def IVs, " << spaiv << " spatk IVs, " << spdefiv << " spdef IVs, " << speediv << " speed IVs. " << endl;

    

return 0;
   
}