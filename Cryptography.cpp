#include <iostream>
#include <string>

void crypt_decrypt(std::string& text)
{
	const int KeyXOR = 100; //Mude a tecla || Change the key
	int StrLen = (text.length());
	char* charString = (char*)(text.c_str());

	for (int i = 0; i < StrLen; i++)
	{
		*(charString + i) = (*(charString + i) ^ KeyXOR);
	}
}
int main()
{
	while (1) {
		std::string msg;
		std::cout << "Your String:" << std::endl;
		std::cin >> msg;
		crypt_decrypt(msg);
		std::cout << "Encrypted / Decrypted: " << msg << std::endl;
	}
	return 0;
}
