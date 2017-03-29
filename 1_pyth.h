#pragma once

bool isPythagoreanTriple(int x, int y, int z) //returns 1 if set of ints is Pythagorean triple
{
	if ((x * x + y * y == z * z) || (x * x + z * z == y * y) || (y * y + z * z == x * x)) {
		return true;
	}
	else {
		return false;
	}
}