#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#include "zadatak01.h"


int main(){
	int vel = velicinaDatoteke();
	Osoba *razred = new Osoba[vel];

	string input = "osobe.txt";
	string output = "out.bin";
	
	parsing(input, razred, vel);
	debug(razred, vel);
	upisBinarno(razred, vel, output);
}