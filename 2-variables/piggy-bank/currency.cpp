#include <iostream>

int main()
{

  double pesos, reais, soles, dollars;

  std::cout << "🇲🇽 Enter number of Pesos: ";
  std::cin >> pesos;

  std::cout << "🇬🇹 Enter number of Guatemalan Quetzals: ";
  std::cin >> reais;

  std::cout << "🇸🇻 Enter number of Salvadoran Colons: ";
  std::cin >> soles;

  /*
  1 Pesos = 0.050 usd
  1 Reais = 0.16 usd 
  1 Soles = 0.27 usd
  */

  double pesos_to_dollar = 0.050;
  double reais_to_dollar = 0.16;
  double soles_to_dollar = 0.27;

  dollars = (pesos_to_dollar * pesos) + (reais_to_dollar * reais) + (soles_to_dollar * soles);

  std::cout << "Total USD = $" << dollars << "\n";

}
