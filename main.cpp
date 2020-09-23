#include <iostream>
//#include <cmath>
using namespace std;

int main() {
  int latura;
  float volum;

  cout << "Care este latura cubului? ";
  cin >> latura;

  volum = (latura * latura * latura);
  
  cout << "Volumul cubului este: " << volum << endl;

  return 0; 

}//volumul unui cub este V = L³*