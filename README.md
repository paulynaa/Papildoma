# Užduotis
1. Suskaičiuokite, kiek kartų kiekvienas skirtingas žodis pasikartoja Jūsų tekste. Tekstą galite paimti iš bet kur, bet turi būti ne mažiau 1000 žodžių, nereikia traukti straipsnio programiškai, užtenka nukopijuoti ir įkelti į apdorojamą failą. Tuomet realizacijos output'e (išoriniame faile) išveskite skirtingus žodžius (kableliai, taškai ir kiti skyrybos ženklai nėra žodžiu dalis!), kurie pasikartojo dažniau negu 1 kartą, o taip pat ir count'erį, nurodantį kiek kartų konkretus žodis pasikartojo.
2. Sukurkite failą su cross-reference tipo lentelę kurioje būtų nurodyta, kurioje teksto vietoje (kurioje(-iose) teksto eilutėse) kiekvienas iš daugiau negu vieną kartą pasikartojantis žodis buvo paminėtas.
3. URL adresų suradimas Jūsų tekste. Kaip ir pirmos užduoties atveju, tekstą galite paimti iš bet kur, tačiau būtina, kad tame tekste būtų bent keli URL'ai, pateikti "pilnu" https://www.vu.lt/, https://vu.lt/ ar "sutrumpintu" pavidalu: www.vu.lt, vu.lt. Jūsų tikslas, iš to teksto išrinkti visus šiuos URL'us ir gražiai išvesti į failą!
4. Repozitorija turi būti parengta pagal visus ankstesnių darbų galutinėms versijoms galiojančius reikalavimus.

# Programos veikimas 
Programa išrenka zodžius, kurie tekste kartojasi daugiau nei vieną kartą ir į išvesties failą "isvestis.txt" išspausdina žodį, kiek kartu jis pasikartojo tekste ir eilutes, kuriose tas žodis yra. Naudojamas asociatyvusis konteineris map<string, vector<int>> zodsaras, kuris saugo zodžius bei eilutes, kuriose tas žodis kartojasi. Taip pat programa atpažįsta ir išveda į failą URL adresus, be to, paskaičiuoja ir išveda, kiek tekste yra žodžių.

__Pavyzdžiui:__

Turime testinį failą, kurį sudaro 11 žodžių, iš kurių žodis "vienas" parašytas vieną kartą, todėl rezultatuose jo būti neturėtų, žodis "aš" pasikartoja 3 kartus ir yra 1 ir 2 eilėj, žodis "esu" pasikartoja 4 kartus yra 1 ir 2 eilėj, žodis "tu" pasikartoja 3 kartus ir yra 1 ir 2 eilėj.

![image](https://github.com/paulynaa/Papildoma/assets/147087833/b7d48823-c9da-4e46-a140-4848cdf7b7cd)

Patikrinam išvesties failą:

![image](https://github.com/paulynaa/Papildoma/assets/147087833/538021f5-e679-45dc-ad43-5c492be49219)

Matome, kad atsakymai sutampa.

# Failai

**main.cpp** - pagrindinis failas.

**funkcijos.cpp** – funkcijų aprašymai.

**funkcijos.h** – antraštinis failas, kuriame yra funkcijų deklaracijos.

**biblioteka.h** – antraštinis failas, kuriame yra naudojamų bibliotekų antraštės.

**makefile** - kompiliavimo taisyklės.

**Passiflora-edulis.txt** - tekstinis failas. 
# Naudojimosi instrukcija
1. Pirma, turite susikurti savo GitHub paskyrą. Galite pasinaudoti instrukcijomis: https://docs.github.com/en/get-started/onboarding/getting-started-with-your-github-account
2. Norėdami rasti kodą, įveskite nuorodą į paieškos eilę. Pavyzdžiui: https://github.com/paulynaa/Papildoma/tree/main
3. Atidarykite "Command Prompt" (komandinę eilutę) savo kompiuteryje.
4. Į terminalą įveskite šią komandą: git clone https://github.com/paulynaa/Papildoma.git
5. Atidarykite programą, kurioje norite paleisti kodą. Pvz. Paleiskite CodeBlocks IDE. Jei dar neparsisiuntėte jos, galite tai padaryti iš oficialios svetainės: https://www.codeblocks.org/downloads/
6. Kai CodeBlocks įdiegtas, atidarykite jį iš jūsų programų sąrašo arba darbalaukio shortcut'o.
7. Sukurkite naują projektą, pasirinkdami "File" > "New" > "Project..." iš meniu.
8. Pasirinkite "Console Application" ir spustelėkite "Go."
9. Pasirinkite "C++" kaip kalbą ir spustelėkite "Next."
10. Įveskite projekto pavadinimą ir pasirinkite direktoriją, kur norite išsaugoti savo projekto failus. Tada spustelėkite "Next."
11. Pasirinkite "GNU GCC Compiler" ir spustelėkite "Finish."
12. Projekto darbalaukyje raskite vietą, kurioje klonavote GitHub saugyklą, naudodami "File" > "Open" meniu parinktį.
13. Pasirinkite aplanką "Darbas1" ir spustelėkite "Open", kad įkeltumėte projekto failus į CodeBlocks.
14. CodeBlocks darbalaukyje turėtumėte pamatyti failus iš klonuotos saugyklos. Dukart spustelėkite pagrindinį šaltinio failą (main***.cpp), kad jį atidarytumėte.
15. Peržiūrėkite kodą ir atlikite bet kokius būtinus pakeitimus ar pridėjimus.
16. Kai esate pasiruošę sukompiliuoti ir paleisti kodą, spustelėkite "Build and run" mygtuką įrankių juostoje arba pasirinkite "Build" > "Build and run" iš meniu.
17. CodeBlocks sukompiliuos kodą ir paleis programą. Jei nėra klaidų, turėtumėte pamatyti rezultatą CodeBlocks konsolės lange.
18. Dirbant su terminalu galite paleisti programą naudojant makefile failus, prikabintus repozitorijoje, priklausomai nuo norimos programos įrašykite :
    * make visi
    * make programa
19. Kokiu principu veikia programa galite matyti pačioj pradžioj README failo.
     
