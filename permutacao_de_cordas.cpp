#include <iostream> 
#include <string>
using namespace std;
 
 // Função para obter permutações da string escrita
void permute(string s , string a)  //recursividade
{
    if(s.length() == 0) //length vê o comprimento da string
    {
        cout<<a<<"  "<<endl;  //se for =0 nao tem permutação
        return;
    }
    for(int i=0 ; i<s.length() ; i++) //pecorre as letras
    {
        char ch = s[i];
        string l = s.substr(0,i); //Posição do primeiro caractere a ser copiado
        string r = s.substr(i+1); //proximos caracteres
        string m = l + r; 
        permute(m , a+ch);
    }
 
}
 
int main()
{
    string s;
    string a="";
 
    cout<<"Escreva a string: ";
    cin>>s;
 
    cout<<"\nPossibilidades string: ";
    permute(s , a);
    return 0;
}