#include <iostream>
using namespace std;

class PersegiPanjang{
    private:
    	int panjang;
    	int lebar;
    	
    public:
		void setPanjang(int panjang){
			this->panjang=panjang;
		}
		
		void setLebar(int lebar){
			this->lebar=lebar;
		}
		
		int getPanjang(){
			return panjang;
		}
		
		int getLebar(){
			return lebar;
		}
		
		int Luas(){
			return panjang * lebar;
		}
};

int main()
{
    PersegiPanjang psg;
    
    psg.setLebar(10);
    psg.setPanjang(10);
    cout << "Panjang: " << psg.getPanjang() << endl;
    cout << "Lebar: " << psg.getLebar() << endl;
    cout << "Luas: " << psg.Luas() << endl;
}

