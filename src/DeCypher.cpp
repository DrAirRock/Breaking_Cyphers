#include <iostream>
#include <fstream>
#include <string>
#include "secret.h"
//#include <conio.h>

//MAIN FUNCTION
int main ()
{

	string file,clean;
	std::cout<<"enter file name you would like to clean\n"
		<<"->: ";
	std::cin>>file;
	clean = read(file);
	std::map<char, int> freq = count_freq(clean);
	write(clean, "clean.txt");
	decrypt(clean, freq, "decrepted.txt");


	return 0;
}
