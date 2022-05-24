#ifndef HANAFUDA_CARD
#define HANAFUDA_CARD

#include <string>

enum class eType {HIKARI, TANE, TANZAKU, KASU};
enum class eSuit {
	January,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December,
};

struct s_card {
	eType Type;
	eSuit Suit;
	int rng;
}

enum class eBaseCard {};

enum class eClassesCard : public eCard {
	CRANE_AND_SUN = {HIKARI, January, 1},
	POETRY_TANZAKU = {TANZAKU, January, 1},
	PINE1 = {KASU, January, 1},
	PINE2 = {KASU, January, 2},
};

#endif

