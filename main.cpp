/*Reciba una cadena de caracteres y separe los números del resto de caracteres, generando
una cadena con solo caracteres y otra con los números que había en la cadena original. A
partir de la cadena de números obtenida, el programa separa en números de 2 cifras, los
suma e imprime el resultado. En caso de no poderse dividir exactamente en números de n
cifras se colocan ceros a la izquierda del primer número.*/

#include <iostream>

// variables globales y macros
#define TAM (int)50

using namespace std;

int main()
{
    char a[TAM]="AB11CD44EF5X5";
    char numeros[50]={0};
    int contDig=0;

    cout<<"imprimir solo los numeros de la cadena original"<<endl;
//    int numero=0;
//    int contadorDigitos=0;

    for(int var=0;var<TAM;++var){
        if(a[var]>'0' && a[var]<='9'){
            numeros[contDig++]=a[var];
        }
    }
    for(int var=contDig-1;var>=0;--var){
        cout<<numeros[var]<<endl;

    }
    return 0;
}
