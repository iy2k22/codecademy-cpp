#include <stdlib.h>

#include <iostream>

#define WIN 1

char weaknessCheck(int, int);

int main(void) {
	srand(time(NULL));
	int computer = rand() % 5 + 1;
	int user;

	std::cout << "rock paper scissors!\n";
	std::cout << "1) rock\n";
	std::cout << "2) paper\n";
	std::cout << "3) scissors\n";
	std::cout << "4) lizard\n";
	std::cout << "5) spock\n";
	std::cout << "shoot! ";
	std::cin >> user;
	if (user < 1 || user > 5) {
		std::cout << "error: invalid number\n";
		return 1;
	}
	if (weaknessCheck(computer, user))
		std::cout << "Computer wins!\n";
	else if (weaknessCheck(user, computer))
		std::cout << "User wins!\n";
	else
		std::cout << "Tie!\n";
	return 0;
}

char weaknessCheck(int p1, int p2) {
	static int weaknesses[5][2] = {
		{ 3, 4 },
		{ 1, 5 },
		{ 2, 4 },
		{ 2, 5 },
		{ 1, 3 }
	};
	for (int id : weaknesses[p1 - 1])
		if (p2 == id)
			return WIN;
	return 0;
}
