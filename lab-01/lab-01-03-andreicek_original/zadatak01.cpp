#include <iostream>
#include <string>
#include <fstream>

#include "zadatak01.h"

using namespace std;


int velicinaDatoteke(){
	ifstream dat("osobe.txt");
	string temp;
	int vel=0;
	while(getline(dat, temp)){
		vel++;
	}
	dat.close();
	return vel;
}

void parsing(string file, Osoba *output, int vel){
	ifstream dat(file);
	string temp;
	for(int i=0; i<vel; i++){
		getline(dat, temp, '\t');
		output[i].id = atoi(temp.c_str());

		getline(dat, output[i].ime_prezime, '\t');

		getline(dat, temp, '\t');
		output[i].starost = atoi(temp.c_str());

		getline(dat, temp);
		output[i].tezina = atoi(temp.c_str());
	}
	dat.close();
}

void upisBinarno(Osoba *output, int vel, string file){
	ofstream out(file, ios::binary);
	int velicinaImena;
	for(int i=0; i<vel; i++){
		 out.write((char*)&(output[i].id), sizeof(int));
		 velicinaImena=(output[i].ime_prezime).size();
		 out.write((char*)&(velicinaImena), sizeof(int));
		 out.write((char*)&(output[i].ime_prezime), velicinaImena);
		 out.write((char*)&(output[i].starost), sizeof(int));
		 out.write((char*)&(output[i].tezina), sizeof(int));
	}
	out.close();
}

void debug(Osoba *output, int vel){
	for(int i=0; i<vel; i++)
		cout << output[i].id << " " << output[i].ime_prezime << " " << output[i].starost << " " << output[i].tezina << endl;
}