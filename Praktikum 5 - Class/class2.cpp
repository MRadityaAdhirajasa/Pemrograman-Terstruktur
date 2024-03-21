#include <iostream>
using namespace std;

class Mahasiswa{
    public:
		string nama, npm;
		
		void perkenalan(){
			cout << "Nama: " << nama << endl;
			cout << "NPM: " << npm;
		}
};

int main()
{
    Mahasiswa Mhs;
    
    cin >> Mhs.nama >> Mhs.npm; 
    
	Mhs.perkenalan();
}

