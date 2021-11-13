#include<iostream>
using namespace std;

int fatorial(int x){
    if(x > 0){
        for(int i = x-1; i > 0; i--){
            x = x * i; 
        }
    }
    else{
        x = 1;
    }
    return x;
}

void permute_rec(int n ,string txt){
    int i, a;
    char aux;


    if(n <= 1){
        cout << txt << endl;
    }
    else if(n == 2){
        cout << txt << e
    }
    else{
        
        permute_rec(n-1, txt);
        for(i = 0; i < n; i++){
            if(n % 2 == 0){
                cout << txt << endl;
                aux = txt[i];
                txt[i] = txt[n-1];
                txt[n-1] = aux;
            }
            else{
                cout << txt << endl;
                aux = txt[0];
                txt[0] = txt[n-1];
                txt[n-1] = aux;
            }
            permute_rec(n-1, txt);
            
        }
        
    }
}

void permute(string txt){
    int n;
    n = txt.length();
}

int main(){
    
    string txt;
    getline(cin, txt);
    permute_rec(txt.length(), txt);
    return 0;
}