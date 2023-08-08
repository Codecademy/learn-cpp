#include <iostream>


using namespace std;

int main()
{

  double p;
  double q;
  double c;

  double dollars;

  cout << "🇲🇽 Enter number of Pesos: ";
  cin >> p;

  cout << "🇬🇹 Enter number of Guatemalan Quetzals: ";
  cin >> q;

  cout << "🇸🇻 Enter number of Salvadoran Colons: ";
  cin >> c;

  dollars = 0.049 * p + 0.1305 * q + 0.1144 * c;

  cout << "Total USD = $" << dollars << "\n";

}
