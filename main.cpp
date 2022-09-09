#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa";
    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        std::cout << '\n' << i << " duplazva: ";
        b[i] = i * 2;
        std::cout << b[i];
    }
    std::cout << '\n';
    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        std::cout << "\nErtek: " << i;
    }
    
    std::cout << "\n\nAtlag szamitasa a dupla ertekekbol: " << std::endl;
    int atlag = 0;
    
    for (int i = 1; i <= N_ELEMENTS; i++){
        atlag += b[i];
    }
    
    atlag /= N_ELEMENTS;
    std::cout << "Atlag a dupla ertekekbol: " << atlag << std::endl;
    std::cout<<"Meg fordult erre felé CLQQ5R...";
    return 0;
}
