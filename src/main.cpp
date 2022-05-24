#include <iostream>
#include <string>

typedef int Card;

namespace hanafuda {
	void getCards(Card cards[]) {
		for(int i=0; i<48; i++)
			cards[i] = i;
	}
};

namespace koikoi {
	class Player {
		Card handcard[8];
		Card gotcard[48];
	};
	class Game {
		Card cards[48];
	  public:
		Player player1;
		Player player2;
		Game() {
			hanafuda::getCards(cards);
		}
		void newGame() {
		}
	};
};

int main() {
	koikoi::Game game;
	game.newGame();
	printf("===GAME START===========================");
	int counter = 0;
	while(true) {
		printf("===GAME START===========================");

	}
}
