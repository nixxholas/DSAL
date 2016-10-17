#include "clockType.h"
#include <iostream> // System libraries, use < >

using namespace std;

void main() {
	clockType myClock;
	clockType* ourClock;
	clockType hisClock(0);
	clockType herClock(5, 0);
	clockType yourClock(0, 20, 30);	

	cout << "Hello World!" << endl;
}