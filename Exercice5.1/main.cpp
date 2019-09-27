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
	int mystery;

	while (gameState != GameState::EXIT);
	{
		switch (gameState) {
		case GameState::INIT: {
			/*
				Cette partie doit donner une valeur à mysterNumber comprise entre 0 et 100
			*/

			GenerateMysteryNumber(mysteryNumber);

			/*gameState = GameState::PLAY;*/
			gameState = GameState::EXIT;
		}
		case GameState::PLAY: {
			/*
				Cette partie doit:
				- essayer de deviner le nombre mystère à l'aide d'un function
				- Si le nombre mystre est trouvé il faut passer à l'état END
			*/


			break;
		}
		case GameState::END: {
			/*
				Cette partie doit afficher le nombre de coups qui ont été nécessaire pour trouver le nombre mystère et indiquer quel est ce nombre mystère
			*/



			break;
		}
		case GameState::EXIT: {
			break;
		}
		}
	}
	
	std::cout << mysteryNumber;
	
	system("pause");
	return EXIT_SUCCESS;
}