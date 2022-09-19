#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    for (int i = 1;i<=N_ELEMENTS;i++)//osszes elemen vegig loopol
    {
        b[i-1] = i * 2;//mivel i 1-tol megy igy i-1 az 0. eleme a tombnek
    }
    for (int i = 0; i<N_ELEMENTS; i++) //b tomb hosszaig loopolunk
    {
        std::cout << "Ertek:" << b[i] << std::endl;//b i. elemet irjuk ki
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;//atlag inicalizalas
    for (int i = 0; i < N_ELEMENTS; i++)// vesszo
    {
        atlag += b[i];//pontosvesszo
    }
    atlag = atlag / N_ELEMENTS;//atlag szamitas
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Please advise!" << std::endl;
     std::cout << "Oliver!" << std::endl;
    return 0;
}
