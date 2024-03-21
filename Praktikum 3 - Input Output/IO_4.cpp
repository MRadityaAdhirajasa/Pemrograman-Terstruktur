#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string teks;
	
	ifstream readFile("barang.txt");
	
	while(getline(readFile, teks)){
		cout << teks << "\n";
	}
	
	readFile.close();
	
}
