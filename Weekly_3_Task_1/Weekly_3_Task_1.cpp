#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
	int max = 1000;
	int rng;
	int guess;
	std::cout << "Enter a number:" << std::endl;
	std::cin >> guess;
	std::srand(time(0));
	rng = (std::rand() % max) + 1;
	do {
		if (guess > rng) {
			std::cout << "Your number is too high" << std::endl;
			std::cout << "Enter another number:" << std::endl;
			std::cin >> guess;
		}
		else if (guess < rng) {
			std::cout << "Your number is too low" << std::endl;
			std::cout << "Enter another number" << std::endl;
			std::cin >> guess;
		}
	} while (rng != guess);
	std::cout << "Congratulation you guessed the right number!" << std::endl;
	return 0;
}