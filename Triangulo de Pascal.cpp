#include<iostream> // including this header may automatically include other headers, such as <ios>, <streambuf>, <istream>, <ostream> and/or <iosfwd>.
#include<math.h> //Provides a set of functions for math operations.


int numeros (int n){ 
    int m = 1;
    int i;
    if(n > 0){
        for(i = n; i > 0; i--){
            m *= i;
        }
    }
    else{
        return 1;
    }
    return m;

}

int triangulo (int linha, int posicao_linha){
    int t;
    // verificar a validade dos numeros digitados
    if(linha == 0 && posicao_linha != 0) return 0;
    else if(linha > 0 && posicao_linha > linha+1) return 0;
    else if(linha < 0) return 0; 
    //calcular o valor da determinada posiçao
    if(linha == 0) return 1;
    t = numeros(linha) / (numeros(posicao_linha) * numeros(linha-posicao_linha));
    return t;
}

int main(){

    int m, l;

    cout << "Calculadora de triangulo de pascal\n\n";
    cout << "*considere a primeira linha como 0 e a primeira posiçao com 0 tambem*\n\n";

    cout << "Insira a linha: ";
    cin >> m;
    cout << "Insira a posiçao do numero: ";
    cin >> l;

    cout << triangulo_de_pascal(m,l) << endl;

    return 0;
}