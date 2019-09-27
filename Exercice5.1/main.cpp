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

	do { {
		switch (gameState) {
		case GameState::INIT: {
			/*
				Cette partie doit donner une valeur à mysterNumber comprise entre 0 et 100
			*/

			GenerateMysteryNumber(mysteryNumber);

			gameState = GameState::PLAY;
		}
		case GameState::PLAY: {
			/*
				Cette partie doit:
				- essayer de deviner le nombre mystère à l'aide d'un function
				- Si le nombre mystre est trouvé il faut passer à l'état END
			*/

			int number;
			std::cout << "Found the mystery number.";

			bool founded = false;
			int nbInput = 0;

			while (!founded) {

			std::cin >> number;
			
			if (number == mysteryNumber) {
					std::cout << "You found the mystery number !";
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
			/*
				Cette partie doit afficher le nombre de coups qui ont été nécessaire pour trouver le nombre mystère et indiquer quel est ce nombre mystère
			*/

			/*std::cout << "The player as use " << nbInput << "input";*/

			/*gameState = GameState::EXIT;*/
			break;
		}
		case GameState::EXIT: {
			break;
		}
		}
	}
	} while (gameState != GameState::EXIT);

	std::cout << mysteryNumber;
	
	system("pause");
	return EXIT_SUCCESS;
}