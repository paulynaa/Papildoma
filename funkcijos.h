#ifndef funkcijos_h
#define funkcijos_h
#include "bibliotekos.h"
int zodziuskaick(string eilut);
void skaitom(string pav, map<string, vector<int>>& sarasas, vector<string>& URL);
string simboliunaikinimas(std::string ivestis);
bool yraltsimbolis(char simbolis);
void konteineris(string& zodis, int& eilnr, map<string, vector<int>>& sarasas);
void spausdinam(map<string, vector<int>> &sarasas, vector<string> &URL);
bool argerassimbolis(char simbolis);
bool yrafailas(string zodis);
bool ieskourl(string zodis);
#endif /* funkcijos_h */
