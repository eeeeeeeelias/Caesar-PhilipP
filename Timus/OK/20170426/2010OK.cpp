//2010. Юный гроссмейстер Саша
#include <iostream>
#include <string>
std::string names[5] = { "King: ", "Knight: ", "Bishop: ", "Rook: ", "Queen: " };

long long King(long long N, long long X, long long Y) {
	if (N == 2 || X + Y == 2) { return 3; }
	else {
		return ((X == 1) ? 5 : 8);
	}
}

long long Knight(long long N, long long X, long long Y) {
	switch (N) {
	case 2: return 0; break;
	case 3: return ((X == 1) ? 2 : 0);
	case 4: return (X + Y);
	default:
		if (X + Y <= 4) { return (X + Y); }
		else {
			switch (X) {
			case 1: return 4; break;
			case 2: return 6; break;
			default: return 8; break;
			}
		}
	}
	/*switch (N) {
	case 2: 
		return 0;
		break;
	case 3:
		if (X == 2 && Y == 2) { return 0; }
		else { return 2; }
		break;
	case 4:
		return (X + Y);
		break;
	default:
		if (X == 1 && Y == 1) { return 2; }
		else {
			if (X + Y == 3) { return 3; }
			else {
				if (X == 1 || Y == 1 || X + Y == 4) { return 4; }
				else {
					if (X == 2 || Y == 2) { return 6; }
					else { return 8; }
				}
			}
		}
	}*/
}

long long Bishop(long long N, long long X, long long Y) {
	if (N == 2) { return 1; }
	else { return (N - 3 + 2 * X); }
}

long long Rook(long long N, long long X, long long Y) {
	return (2 * (N - 1));
}

long long Queen(long long N, long long X, long long Y) {
	return (3 * (N - 1) + 2 * (X - 1));
}

int main()
{	
	long long answers[5];
	long long N = 0, X = 0, Y = 0;
	std::cin >> N >> X >> Y;
	X = std::fmin(X, N - X + 1);
	Y = std::fmin(Y, N - Y + 1);
	if (X > Y) { std::swap(X, Y); }
	if (N == 1) {
		for (long long i = 0; i < 5; i++) { 
			std::cout << names[i] << 0 << "\n";
		}
	}
	else { //доска больше 1х1
		std::cout << names[0] << King(N, X, Y) << "\n";
		std::cout << names[1] << Knight(N, X, Y) << "\n";
		std::cout << names[2] << Bishop(N, X, Y) << "\n";
		std::cout << names[3] << Rook(N, X, Y) << "\n";
		std::cout << names[4] << Queen(N, X, Y) << "\n";
	}
	return 0;
}