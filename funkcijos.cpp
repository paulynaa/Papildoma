#include "funkcijos.h"

int zodziuskaick(string eilut){
    stringstream s(eilut);
    string zod;
    int y = 0;
    while (s >> zod)
        y++;
    return y;
}

bool arltsimbolis(char simbolis) {
    string liet = "אטזכבנרû‏";
    return liet.find(simbolis) != string::npos; //grazina true jeigu surado lietuviska simboli nedaejus iki galo
}

bool arjunginys(string zodis){
    return zodis.find("am") != string::npos;
}
string simboliunaikinimas(string ivestis) {
    string rezultatas;
    for (char simbolis : ivestis) { //praeinam pro visas zodzio raides
        if ((isalnum(simbolis) && !isdigit(simbolis)) || arltsimbolis(simbolis)) { // ar zodis sudetas is raidziu
            rezultatas += simbolis; // jeigu zodzio kazkurios eiles elementas yra ne raide, jo nepridedam prie rez
        }
    }
    return rezultatas; //grazinam zodi be raidziu
}

bool yrafailas(string zodis) {
    set<string> galunes = {".txt", ".pdf", ".doc", ".docx", ".xls", ".xlsx", ".png", ".jpg", ".jpeg", ".gif", ".zip", ".webp"};
    for (const string& pletinys : galunes)
    {
        if (zodis.size() >= pletinys.size() && zodis.compare(zodis.size() - pletinys.size(), pletinys.size(), pletinys) == 0)
        {
            return true;
        }
    }
    return false;
}

bool ieskourl(string zodis) {
    if(yrafailas(zodis)) {
        return false;
    }
    if (zodis.front() == '.' ||zodis.back()=='.'||zodis.find('.') == string::npos || zodis.back()==',') {
        return false;
    }
    set<string> galunes = {".com", ".org", ".net", ".int", ".edu", ".lt", ".ai", ".io", ".co", ".us"};

    for (const string& pletinys : galunes) {
        if (zodis.size() >= pletinys.size() && zodis.compare(zodis.size() - pletinys.size(), pletinys.size(), pletinys) == 0) {
            return true;
        }
    }
   if(zodis.find("https://") != string::npos || zodis.find("www.") != string::npos || zodis.find("http://")) {
       return true;
   }
    return false;
}

void konteineris(string& zodis, int& eilnr, map<string, vector<int>>& sarasas) {
    if(zodis.empty()) return;
    auto it = sarasas.find(zodis);
    if(it==sarasas.end()) {
        vector<int> eil;
        eil.push_back(eilnr);
        sarasas.insert(pair<string, vector<int>>(zodis,eil));
        sarasas[zodis]=eil;
    }
    else it->second.push_back(eilnr);
}
int zodziukiekis=0;

void skaitom(string pav, map<string, vector<int>>& sarasas, vector<string>& URL)
{
    ifstream failiukas(pav);
    if (!failiukas.is_open()) {
        cout<<"Nepavyko atidaryti failo " <<endl;
    }
    string eilute;
    int kelinta = 0; // kelinta eilute
    vector<string> zodziai; // saugom
    while(failiukas){
        if(!failiukas.eof()){ // eof iki failo galo
            getline(failiukas,eilute);
            kelinta++; // kiek eiluciu
            zodziukiekis+=zodziuskaick(eilute);
            if(!eilute.empty()){
                istringstream laikinas(eilute); // sukuriam laikina objekta
                string zodis;
                while (laikinas>>zodis) { // kol zodis gali but irasomas i laikina
                    if (ieskourl(zodis)){
                        URL.push_back(zodis); // irasom url
                    }

                    else {
                        transform(zodis.begin(), zodis.end(), zodis.begin(), tolower); // keiciam i mazasias raides
                        string rezultatas;
                        rezultatas = simboliunaikinimas(zodis); // rezultatas= zodziai su mazosiomis ir be jokiu simboliu (,.() ir tt)
                        konteineris(rezultatas, kelinta, sarasas);
                        string rezultatas2;
                        rezultatas2 =
                    }
                }
            }
        }
        else break;
    }
    spausdinam(sarasas, URL);
    failiukas.close();

}

void spausdinam(map<string, vector<int>> &sarasas, vector<string> &URL) {
    ofstream iras("isvestis.txt");
    iras << left << setw(18) << "Zodis" << setw(12) << "Pasikartojimai" << "Eilutes" << endl;
    iras << string(100, '-') << endl;

    for(const auto& pair: sarasas) {
        if(pair.second.size() > 1) {
            iras << left << setw(18) << pair.first << setw(12) << pair.second.size();
            for (const auto& eil : pair.second) {
                iras  << eil << " ";
            }
            iras << endl;
        }
    }


    iras << left << setw(18) << "Zodis su am" << setw(12) << "Pasikartojimai" << "Eilutes" << endl;
    iras << string(100, '-') << endl;


    iras << "URL: " << endl;
    for(auto u: URL) {
        iras << u << endl;
    }
    iras<<"Zodziu skaicius tekste: "<<endl;
    iras<<zodziukiekis<<endl;
    iras.close();
}

