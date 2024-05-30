#include "funkcijos.h"
using namespace  std;

int main()
{
    //string pavadinimas = "pr.txt";
    string pavadinimas = "Passiflora-edulis.txt";
    map<string, vector<int>> zodsarasas;
    vector<string> URL;
    skaitom(pavadinimas, zodsarasas, URL);
}
