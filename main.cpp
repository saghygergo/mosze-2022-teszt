#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{ 
  // Hiányzik az alulvonás
    int *b = new int[NELEMENTS];
  // Nincs pontosvessző a sor végén, rossz aposztróf használat
    std::cout << '1-100 ertekek duplazasa'
  // Hiányzik a léptetés
    for (int i = 0;)
    {
  // 0-99 helyett 1-100ig kellene dupláznia
        b[i] = i * 2;
    }
  // Hibás a ciklusvezérlő, mindig hamisba fut így nem lép be a ciklusba
    for (int i = 0; i; i++)
    {
  // Az értéket nem írja ki, és hiányzik a pontosvessző a sor végéről
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
  // A változónak nincs kezdőértéke
    int atlag;
  // Hiányzik a pontosvessző
    for (int i = 0; i < N_ELEMENTS, i++)
    {
  // Hiányzik a pontosvessző
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}