#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a = 1000;
	int b = 5000;
	int c = 7000;
	
	if (a > b) {
		if (a > c) {
			cout << "A es el mayor";
		} else {
			cout << "C es el mayor";
		}
	} else {
		if (b > c) {
			cout << "B es el mayor";
		} else {
			cout << "C es el mayor";
		}
	}
	
	
	return 0;
}
