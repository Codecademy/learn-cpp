#include <iostream>
#include <cmath>

// exchange rates sourced from https://www.fiscal.treasury.gov/reports-statements/treasury-reporting-rates-exchange/current.html
int main() {
  double p;
  // peso rate = 19.6540
  double ep = 19.6540;
  
  double q;
  // quetzal rate = 7.7150
  double eq = 7.7150;
  
  double c;
  // colóns rate = 603.5000
  double ec = 603.5000;
  
  double dollars;
  std::cout << "Enter number of Mexican Pesos:";
  std::cin >> p;
  std::cout << "Enter number of quetzals:";
  std::cin >> q;
  std::cout << "Enter number of colóns:";
  std::cin >> c;
  
  
  // foriegn ammount / rate = usd
  
  dollars = (p/ep)+(q/eq)+(c/ec);
  
  std::cout << "US Dollars = $" << dollars << "\n";
    
}
