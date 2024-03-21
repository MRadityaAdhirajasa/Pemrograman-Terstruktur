#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream outfile("example.txt");
	
	outfile << "Nama saya Bejo";
	
	outfile.close();
	
}
