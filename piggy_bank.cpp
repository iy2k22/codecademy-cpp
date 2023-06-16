#include <iostream>

int main(void) {
	double pesos, reais, soles, dollars;
	std::cout << "Enter number of Colombian Pesos: ";
	std::cin >> pesos;
	std::cout << "Enter number of Brazilian Reais: ";
	std::cin >> reais;
	std::cout << "Enter number of Peruvian Soles: ";
	std::cin >> soles;
	/* Exchange rates
	 * 1 Colombian Peso: 0.00024 Dollars
	 * 1 Reai: 0.20766 Dollars
	 * 1 Sol: 0.27104 Dollars
	 */
	dollars = (0.20766 * reais) + (0.00024 * pesos) + (0.27104 * soles);
	std::cout << "US Dollars = $" << dollars << '\n';
	return 0;
}
