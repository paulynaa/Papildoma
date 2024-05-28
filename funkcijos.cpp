
void skaitom(string pavadinimas) {
    vector<string> lines;
    ifstream failiukas(pavadinimas);

    if (!failiukas.is_open()) {
        cout<<"Nepavyko atidaryti failo " <<endl;
    }

    std::string line;
    while (std::getline(failiukas, line)) {
        lines.push_back(line);
    }
    failiukas.close();
    return lines;
}

