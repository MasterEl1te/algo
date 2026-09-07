#include <iostream>
#include <string>
using namespace std;

string encryptCaesar(string text, int shift) {

	string result = "";

	for (int i = 0; i < text.length(); i++) {
		char c = text[i];

		if (c >= 'A' && c <= 'Z') {
			result += char((c - 'A' + shift) % 26 + 'A');
		}
		else if (c >= 'a' && c <= 'z') {
			result += char((c - 'a' + shift) % 26 + 'a');

		}
		else {
			result += c;

		}
	}
	return result;
}
string decryptCaesar(string text, int shift) {

	return encryptCaesar(text, 26 - shift);
}
int main() {
	setlocale(LC_ALL, "Ru");

	string word;
	int shift;
	int choise;

	cout << " цезарь " << endl;
	cout << "1. зашифровать" << endl;
	cout << "2. Расшифровать" << endl;
	cout << "Выбор";
	cin >> choise;
	cin.ignore();

	cout << "Введите текст: ";
	getline(cin, word);

	cout << "Введите сдвиг (1-25): ";
	cin >> shift;

	if (choise == 1) {
		cout << "Зашифрованный текст: " << encryptCaesar(word, shift) << endl;
	}
	else if (choise == 2) {
		cout << "Расшифрованный текст: " << decryptCaesar(word, shift) << endl;
	}
	else {
		cout << "неверный выбор" << endl;
	}
		return 0;
	
}