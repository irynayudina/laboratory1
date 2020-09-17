#include <iostream>
int Addition(int x, int y) {
	return x + y;
}
int Multiplication(int x, int y) {
	return x * y;
}
bool check_number(std::string str) {
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return false;
    return true;
}