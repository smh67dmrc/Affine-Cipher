#include <iostream>

using namespace std;

char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
char input[1000];
char encrypted_result[1000];
char decrypted_result[1000];

int main() {

	int i = 0;
	int j = 0;
	int value_x = 0;
	int value_a = 0;
	int value_b = 0;
	int inverse_a = 0;
	
	cout << R"(    _     __  __ _              _____                             _              ____                             _            )" << endl;
	cout << R"(   / \   / _|/ _(_)_ __   ___  | ____|_ __   ___ _ __ _   _ _ __ | |_ ___ _ __  |  _ \  ___  ___ _ __ _   _ _ __ | |_ ___ _ __ )" << endl;
	cout << R"(  / _ \ | |_| |_| | '_ \ / _ \ |  _| | '_ \ / __| '__| | | | '_ \| __/ _ \ '__| | | | |/ _ \/ __| '__| | | | '_ \| __/ _ \ '__|)" << endl;
	cout << R"( / ___ \|  _|  _| | | | |  __/ | |___| | | | (__| |  | |_| | |_) | ||  __/ |    | |_| |  __/ (__| |  | |_| | |_) | ||  __/ |   )" << endl;
	cout << R"(/_/   \_\_| |_| |_|_| |_|\___| |_____|_| |_|\___|_|   \__, | .__/ \__\___|_|    |____/ \___|\___|_|   \__, | .__/ \__\___|_|   )" << endl;
	cout << R"(                                                      |___/|_|                                        |___/|_|                 )" << endl;
	
	cout << endl << endl << R"(Author : smh67dmrc | https://smh67dmrc.github.io/)" << endl << endl;
	cout << "---------------------------------------------------------------------------------------" << endl << endl;

	cout << "\nPlaintext(JUST LOWERCASE and MAX=1000 Character) : ";

	gets(input);

	cout << "\nValue of A : ";
	
	cin >> value_a;
	
	if(value_a%2 == 0 || value_a%13 == 0 || value_a%26 == 0)
	{
		cout << "\nValue of A must co-prime with 26!\n";
		return 0;
	}
	
	cout << "Value of B : ";
	cin >> value_b;

	while (true)
	{
		if ((inverse_a*value_a) % 26 == 1)
		{
			break;
		}
		inverse_a++;
	}
	
	while (input[i] != '\0')
	{
		while (true)
		{
			if (input[i] == alphabet[j])
			{
				value_x = j;
				j = 0;
				break;
			}
			j++;
		}
		
		int encrypted_index = ((value_a*value_x + value_b) % 26);
		int decrypted_index = ((inverse_a*(value_x - value_b)) % 26);

		if (decrypted_index < 0) 
		{
			decrypted_index += 26;
		}

		decrypted_result[i] = alphabet[decrypted_index];
		encrypted_result[i] = alphabet[encrypted_index];
		i++;
	}
	
	cout << "\nEncrypted : ";
	cout << encrypted_result;
	cout << "\n\nDecrypted : ";
	cout << decrypted_result;
	cout << "\n";
	
	return 0;
}