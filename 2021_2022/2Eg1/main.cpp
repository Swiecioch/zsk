#include <iostream>

using namespace std;

class Worker{
	public:
		//	deklaracja zmiennych członkowskich
		string name="Janusz";
		string surname;
		unsigned short int age;
	
		//	definicja funkcji członkowskiej
			void showName(){
				cout << "Twoje imię: ";
			}
};


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Worker pracownik;	
	pracownik.surname = "Nowak";
	pracownik.showName();
	pracownik.age = 16;
	cout << "\nWiek: " << pracownik.age << "\n\n";

	return 0;
}
