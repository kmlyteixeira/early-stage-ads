#include<iostream>
using namespace std;

//Prot�tipo da Fun��o == a declara��o da fun��o

int somar(int num1,int num2);

int subtrair(int num1,int num2);
int multiplicar(int num1,int num2);

main()
{
      int num1,num2,result;
      setlocale(LC_ALL, "Portuguese");
      cout<<"\nDigite um valor: ";
      cin>>num1;
      cout<<"\nDigite outro valor: ";
      cin>>num2;
      result = somar(num1,num2);
      cout<<"\n\n A soma dos N�meros �: "<<result;
      cout<<"\n=======================";
      result = subtrair(num1,num2);
      cout<<"\n\n A subtra��o dos N�meros �: "<<result;
      cout<<"\n=======================";
      result = multiplicar(num1,num2);
      cout<<"\n\n A multiplica��o dos N�meros �: "<<result;
      cout<<"\n=====================================";
      cout<<"\n\n\n";
      
}
//===================
//fun��o somar
//===================
      int somar (int num1,int num2)
      {
        return(num1+num2);
      }
      
//fun��o subtrair
//===================
      int subtrair (int num1,int num2)
      {
        return(num1-num2);
      }
      
//fun��o soma
//===================
      int multiplicar (int num1,int num2)
      {
        return(num1*num2);
      }
