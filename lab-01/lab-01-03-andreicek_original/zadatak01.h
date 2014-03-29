#include <string>

using namespace std;

struct Osoba{
	int id;
	string ime_prezime;
	int starost;
	int tezina;
};

int velicinaDatoteke();
void parsing(string file, Osoba *output, int vel);
void upisBinarno(Osoba *output, int vel, string file);
void debug(Osoba *output, int vel);