/*
============= Build Time Elapsed	: 00:00:00.78
============= Link					: 278 ms
============= ClCompile				: 485 ms
WTF Why is this faster?
*/
#include "one.h"
#include "two.h"
#include "three.h"

int main() {
	One one;
	one.printOne();


	Two two;
	two.printTwo();

	Three three;
	three.printThree();

	return 0;
}

/*
============= Build Time Elapsed	: 00:00:00.95
============= Link					: 289 ms
============= ClCompile				: 650 ms

#include "one.h"
#include "two.h"
#include "three.h"
#include "one.cpp"
#include "two.cpp"
#include "three.cpp"

int main() {
	Three three;
	three.printThree();

	return 0;
}
*/

/*
============= Build Time Elapsed	: 00:00:00.69
============= Link					: 300 ms
============= ClCompile				: 375 ms
#include "three.h"
#include "one.cpp"
#include "two.cpp"
#include "three.cpp"

int main() {

	Three three;
	three.printThree();

	return 0;
}
*/