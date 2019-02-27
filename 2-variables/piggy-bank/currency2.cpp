#include <cmath>
#include <iostream>

// exchange rates sourced from
// https://www.fiscal.treasury.gov/reports-statements/treasury-reporting-rates-exchange/current.html
int main() {
  double p = 0.0;
  // peso rate = 19.6540
  const double ep = 19.6540;

  double q = 0.0;
  // quetzal rate = 7.7150
  const double eq = 7.7150;

  double c = 0.0;
  // colóns rate = 603.5000
  const double ec = 603.5000;

  std::cout << "Enter number of Mexican Pesos:";
  std::cin >> p;
  std::cout << "Enter number of quetzals:";
  std::cin >> q;
  std::cout << "Enter number of colóns:";
  std::cin >> c;

  // foriegn ammount / rate = usd

  const double dollars = (p / ep) + (q / eq) + (c / ec);

  std::cout << "US Dollars = $" << dollars << "\n";

  return 0;
}
