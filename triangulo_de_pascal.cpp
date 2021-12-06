#include <iostream>

using namespace std;
//calcula o valor de uma determinada posição no Triângulo de Pascal.
void printPascal(int n)
{

	for (int line = 1; line <= n; line++)
	{
		int C = 1; 

		for (int i = 1; i < (n - line + 1); i++){
			cout << " ";
		}
		// O primeiro valor em uma linha é sempre 1
		for (int i = 1; i <= line; i++)
		{
			cout << C << " ";
			C = C * (line - i) / i;
		}

		cout << "\n";
	}
}
//O programa solicita que o usuário insira uma linha e assim é dado o valor correspondente.
int main()
{
	int n;

	cout << "número de linhas no triângulo:";
	
	cin >> n;
	
	printPascal(n);

	return 0;
}