#include <iostream>

int multiplication(int fac1,int fac2) {
    return fac1 * fac2;
}

double addition(double add1 , double add2)  {
    return add1 + add2;
}
    

int main()  {
    int num1;
    int num2;

    std::cout << "Gebe zwei Zahlen an die du Multiplizieren und Addieren moechtest: " << std::endl;
    std::cin >> num1 >> num2;
    
    int resultMulti = multiplication(num1, num2);
    std::cout << "Ergebnis der Multiplikation: " << resultMulti << std::endl;

    double resultAdd = addition(num1, num2);
    std::cout << "Ergibnis der Addition: " << resultAdd << std::endl;
    return 0;
}
