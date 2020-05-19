#include <iostream>

//currency converter practice from codecademy lesson

int main() {

  double pesos;
  double reais;
  double soles;
  double dollars;
//ask user number of pesos
  std::cout << "Enter number of Colombian Pesos: ";
  //user inputs pesos
  std::cin >> pesos;
//ask user number of reais
  std::cout << "Enter number of Brazilian Reais: ";
//user inputs reais
  std::cin >> reais;
//ask user number of soles
std::cout << "Enter number of Peruvian Soles: ";
//user inputs soles
std::cin >> soles;
  
  /* conversion rates:
  pesos to usd: 1 peso = 0.042 usd
  reais to usd: 1 real = 0.17 usd
  soles to usd: 1 sole = 0.29 usd
  */

//calculating the conversions of the three currencies.
  dollars = 0.042 * pesos + 0.17 * reais + 0.29 * soles;

//the out put after compiled. "Total USD = $ (amount)"
  std::cout << "Total USD = $" << dollars << "\n";
  

  
}