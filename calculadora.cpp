// CALCULADORA EM C++, QUE EXECUTA OPERAÇÕES CIENTÍFICAS BÁSICAS
// OPERAÇÕES SUPORTADAS:
// ADIÇÃO, SUBTRAÇÃO,MULTIPLICAÇÃO,DIVISÃO
// ELEVAR AO QUADRADO,ELEVAR AO CUBO,RAIZ QUADRADA
// SENO, COSSENO E TANGENTE 

#include <iostream>
#include <stdlib.h>
#include <cmath>

void red () {
  printf("\033[1;31m");
}

void yellow () {
  printf("\033[1;33m");
}

      void reset () {
  printf("\033[0m");
}


using namespace std;

int main()
{
   float numero1=0, numero2=0, resultado=0;
   char operacao;
   yellow();
   cout <<"CALCULADORA CIENTÍFICA BÁSICA" << endl<<endl;
   cout <<"OPERAÇÕES SUPORTADAS" << endl;
   cout <<"Simbolo     Operação" << endl;
   cout <<"   +        Adição  " << endl;
   cout <<"   -        Subtração" << endl;
   cout <<"   *        Multiplicação" << endl;
   cout <<"   /        Divisão      " << endl;
   cout <<"   2        Elevar ao Quadrado" << endl;
   cout <<"   3        Elevar ao Cubo" << endl;
   cout <<"   r        Raiz Quadrada " << endl;
   cout <<"   s        Seno" << endl <<endl;
   cout <<"   c        Cosseno" << endl;
   cout <<"   t        Tangente" << endl;
   reset();

   cout << endl <<">> Digite o símbolo da operação que deseja, conforme a tabela a cima:";
   cin >> operacao;
   cout << endl;

   switch (operacao)
   {
       case '+':
       cout <<"Foi selecionado adição" << endl;
       cout <<"Digite o primeiro número:";
       cin >> numero1;
       cout <<"Digite o segundo número:";
       cin >> numero2;
       resultado = numero1 + numero2;
       cout << numero1 << "+" << numero2 <<"="<<resultado <<endl <<endl;
    break;                                     

       case '-':
       cout <<"Foi selecionado subtração" << endl;
       cout <<"Digite o primeiro número:";
       cin >> numero1;
       cout <<"Digite o segundo número:";
       cin >> numero2;
       resultado = numero1 - numero2;
       cout << numero1 << "-" << numero2 <<"="<<resultado <<endl <<endl;
    break;

       case '*':
       cout <<"Foi selecionado multiplicação" << endl;
       cout <<"Digite o primeiro número:";
       cin >> numero1;
       cout <<"Digite o segundo número:";
       cin >> numero2;
       resultado = numero1 * numero2;
       cout << numero1 << "*" << numero2 <<"="<<resultado <<endl <<endl;
    break;

       case '/':
       cout <<"Foi selecionado divisão" << endl;
       cout <<"Digite o primeiro número:";
       cin >> numero1;
       cout <<"Digite o segundo número:";
       cin >> numero2;
       resultado = numero1 / numero2;
       cout << numero1 << "/" << numero2 <<"="<<resultado <<endl <<endl;
    break;

      case '2':
       cout <<"Foi selecionado elevação ao quadrado" << endl;
       cout <<"Digite o número:";
       cin >> numero1;
       resultado = pow(numero1,2);
       cout << numero1 << "elevado ao quadrado" <<"="<<resultado <<endl <<endl;
    break;

      case '3':
       cout <<"Foi selecionado elevação ao cubo" << endl;
       cout <<"Digite o número:";
       cin >> numero1;
       resultado = pow(numero1,3);
       cout << numero1 << "elevado ao cubo" <<"="<<resultado <<endl <<endl;
    break;

      case 'r':
       cout <<"Foi selecionado raiz quadrada" << endl;
       cout <<"Digite o número:";
       cin >> numero1;
       resultado = sqrt(numero1);
       cout << "Raiz quadrada de:" << numero1 <<"="<<resultado <<endl <<endl;
    break;

     case 's':
       cout <<"Foi selecionado seno" << endl;
       cout <<"Digite o número:";
       cin >> numero1;
       resultado = sin(numero1);
       cout << "Raiz quadrada de:" << numero1 <<"="<<resultado <<endl <<endl;
    break;

     case 'c':
       cout <<"Foi selecionado cosseno" << endl;
       cout <<"Digite o número:";
       cin >> numero1;
       resultado = cos(numero1);
       cout << "Cosseno de:" << numero1 <<"="<<resultado <<endl <<endl;
    break;

    case 't':
       cout <<"Foi selecionado tangente" << endl;
       cout <<"Digite o número:";
       cin >> numero1;
       resultado = tan(numero1);
       cout << "Tangente de:" << numero1 <<"="<<resultado <<endl <<endl;
    break;


   default: 
cout <<"operação invalida..." <<endl;
}


    system("PAUSE");

    return 0;

    }