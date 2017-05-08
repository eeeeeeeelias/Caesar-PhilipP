//1563. Баяны
#include <iostream>
#include <string>

const long long hashLength1 = 426389, hashLength2 = 524287, prime1 = 31, prime2 = 37;

long long getHash(std::string s, long long hashLength, long long prime)
{
	long long sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum *= prime;
		if (s[i] == ' ') { sum += 27; }
		else {
			if (s[i] >= 'a' && s[i] <= 'z') { sum += s[i] - 'a' + 1; }
			else { sum += s[i] - 'A' + 1; }
		}
		sum %= hashLength;
	}
	return sum;
}

int main() 
{
	#ifndef ONLINE_JUDGE
		freopen("1563.in", "rt", stdin);
	#endif
	long long N = 0, notVisited = 0;
	bool hash1[hashLength1], hash2[hashLength2];
	for (long long i = 0; i < hashLength1; i++) { 
		hash1[i] = false; 
	}
	for (long long i = 0; i < hashLength2; i++) {
		hash2[i] = false;
	}
	std::string shopName = "";
	std::cin >> N;
	std::getline(std::cin, shopName);
	for (long long i = 0, nowHash1 = 0, nowHash2 = 0; i < N; i++) {
		std::getline(std::cin, shopName);
		nowHash1 = getHash(shopName, hashLength1, prime1);
		nowHash2 = getHash(shopName, hashLength2, prime2);
		if (hash1[nowHash1] && hash2[nowHash2]) { 
			notVisited++; 
		}
		else { 
			hash1[nowHash1] = true; 
			hash2[nowHash2] = true;
		}
	}
	std::cout << notVisited << "\n";
	return 0;
}