#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

class Number{

    private:

    int n;

    void BinToDec(){

        int dec_value = 0;

        std::cout << "Insert a number in binary: "; std::cin >> n;

        int num = n;
        int base = 1;
        int temp = num;

        while (temp) {

            int last_digit = temp % 10;
            temp = temp / 10;
 
            dec_value += last_digit * base;
 
            base = base * 2;
        }
        std::cout << "Decimal: " << dec_value << std::endl;
        getchar();
      
        DecToHex(dec_value);
    }

    void DecToBin(){

        std::cout << "Insert a number in decimal: "; std::cin >> n;

        int binNum = n;
        int array[100];
        int i = 0;

        while(n > 0){

            array[i] = n % 2;
            n /= 2;
            ++i;
        }

        for(int j = i -1; j >= 0; --j){
            std::cout << array[j];
        }
        getchar();
        getchar();
    }

    void DecToHex(int dec_value){

    //std::cout << "The number in decimal is: " << dec_value << std::endl;

    int digito[20];
    int /*decimal,*/ residuo, resultado, n = 0;

    //std::cout << "Inserte un numero: "; std::cin >> decimal;

    do{

        residuo = dec_value % 16;
        resultado = dec_value /16;
        digito[n] = residuo;
        dec_value = resultado;
        n++;
        
    }while(resultado > 15);

    digito[n] = resultado;

    std::cout << "Hexadecimal: ";

    for(int m = n; m >= 0; m--){

        if(digito[m] == 10){
            std::cout << "A";
        }
        else if (digito[m] == 11){
            std::cout << "B";
        }
        else if (digito[m] == 12){
            std::cout << "C";
        }
        else if (digito[m] == 13){
            std::cout << "D";
        }
        else if (digito[m] == 14){
            std::cout << "E";
        }
        else if (digito[m] == 15){
            std::cout << "F";
        }
        else{
            std::cout << digito[m];
        }
    }

    std::cout << std::endl;

    getchar();

    }

    public:

    void Menu(){

        std::string opc;
        int option;

        do{

            system("clear");
            std::cout << "Inserte una opcion" << std::endl;
            std::cout << "[1] Numeros binarios a decimales" << std::endl;
            std::cout << "[2] Numeros decimales a binarios" << std::endl;
            std::cout << "\n: ";
            std::cin >> option;

            system("clear");

            switch(option){
                case 1: BinToDec(); break;
                case 2: DecToBin(); break;

                default: break;
            }
            
        }while(option != 0);
    }
};
