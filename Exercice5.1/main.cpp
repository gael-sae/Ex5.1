#include <iostream>
#include <time.h>

#define MAX_NUMBER 100;

enum class GameState {
	INIT,
	PLAY,
	END,
	EXIT
};

 void GenerateMysteryNumber(int& mysteryNumber) {
	
	srand(time(NULL));
	mysteryNumber = rand() % 101;
	
}

int main() {
	GameState gameState = GameState::INIT;

	int mysteryNumber;
	int nbInput = 0;


	do { {
		switch (gameState) {
		case GameState::INIT: {

			GenerateMysteryNumber(mysteryNumber);

			gameState = GameState::PLAY;
		}
		case GameState::PLAY: {
			
			int number;
			std::cout << "Found the mystery number.\n";

			bool founded = false;

			while (!founded) {

			std::cin >> number;
			
			if (number == mysteryNumber) {
					
					founded = true;
					gameState = GameState::END;
				}

				else if (number < mysteryNumber) {
					std::cout << "plus grand\n";
				}
				else {
					std::cout << "plus petit\n";
				}

				nbInput++;
			}

		}
		case GameState::END: {
			
			std::cout << "\n";
			std::cout << "You found the mystery number " << mysteryNumber << ".\n";
			std::cout << "The player as use " << nbInput << " hits.\n";
			
			gameState = GameState::EXIT;
			break;
		}
		case GameState::EXIT: {
			break;
		}
		}
	}
	} while (gameState != GameState::EXIT);

	
	
	system("pause");
	return EXIT_SUCCESS;
}