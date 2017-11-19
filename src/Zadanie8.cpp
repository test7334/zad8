//============================================================================
// Name        : Zadanie8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main()
{

	char *napis1= "Programowanie 2",	// lub: const char *napis1 = "Programowanie2"; bo jest niemodyfikowalne
		 napis2[] = {'C', 'p', 'p', '\0'},
		 *napis3 = napis2;



	cout << "napis2[0] = " << napis2[0] << endl;
	cout << "*napis2 = " << *napis2 << endl;

	cout << "*napis3 = " << *napis3 << endl;
	cout << "napis3 = " << napis3 << endl;

	cout << "napis1 = " << napis1 << endl;
	cout << "*napis1 = " << *napis1 << endl;
	cout << "*(napis1+2) = " << *(napis1+2) << endl;

	napis1 = napis2;
	cout << "napis1 = " << napis1 << endl;
	//komentarz

	int c = 0;
	while (*napis1 != '\0') {
		if (*napis1 == 'p')
			c++;
		napis1++;
	}
	cout << "c = " << c << endl;


	return 0;

}
