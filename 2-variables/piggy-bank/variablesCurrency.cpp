#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;

  double dollarsP;
  double dollarsR;
  double dollarsS;
  double dollars;
  
  std::cout<<"Enter number of Colombian Pesos: COL$ ";
  std::cin>>pesos;
  std::cout<<"\n";
  
  std::cout<<"Enter number of Brazilian Reais: R$ ";
  std::cin>>reais;
  std::cout<<"\n";
  
  std::cout<<"Enter number of Peruvian Soles: S/. ";
  std::cin>>soles;
  std::cout<<"\n";

  //1 reais = 0.21 USD
  //1 peso = 0.00024 USD
  // 1 soles = 0.28 USD

  dollarsP = pesos * 0.00024;
  std::cout<<"Your amount from Pesos to USD is: $ "<<dollarsP<<"\n";

  dollarsR = reais * 0.21;
  std::cout<<"Your amount from Reais to USD is: $ "<<dollarsR<<"\n";

  dollarsS = soles * 0.28;
  std::cout<<"Your amount from Soles to USD is:  $ "<<dollarsS<<"\n";

  dollars = dollarsP + dollarsR + dollarsS;
  std::cout<<"\n";
  std::cout<<"Your total amount in USD is: $ "<<dollars<<"\n";

  std::cout<<"\n";

  double usd;
  double usToP;
  double usToR;
  double usToS;

  std::cout<<"Please enter an amount in USD: $ ";
  std::cin>>usd;

  usToP = usd * 4173.02;
  std::cout<<"Your amount from USD to Colombian Pesos is: "<<usToP<<" COL$\n";

  usToR = usd * 4.80;
  std::cout<<"Your amount from USD to Brazilian Reais is: "<<usToR<<" R$\n";

  usToS = usd * 3.63;
  std::cout<<"Your amount from USD to Peruvian Soles is: "<<usToS<<" S/.\n";

  return 0;
}