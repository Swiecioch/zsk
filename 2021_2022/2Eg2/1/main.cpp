#include <iostream>

using namespace std;

class Worker {
	public:
//	deklaracja zmiennych członkowskich (właściwości)
		string name="Janusz";
		string surname;
		
//	definicja funkcji członkowskiej (metoda)
		void showData(){
			cout << "Imię";
		};
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Worker pracownik;
	
	cout << pracownik.name;
	pracownik.showData();
	return 0;
}
