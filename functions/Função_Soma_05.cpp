#include<iostream>
using namespace std;

//Protótipo da Função == a declaração da função

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
      cout<<"\n\n A soma dos Números é: "<<result;
      cout<<"\n=======================";
      result = subtrair(num1,num2);
      cout<<"\n\n A subtração dos Números é: "<<result;
      cout<<"\n=======================";
      result = multiplicar(num1,num2);
      cout<<"\n\n A multiplicação dos Números é: "<<result;
      cout<<"\n=====================================";
      cout<<"\n\n\n";
      
}
//===================
//função somar
//===================
      int somar (int num1,int num2)
      {
        return(num1+num2);
      }
      
//função subtrair
//===================
      int subtrair (int num1,int num2)
      {
        return(num1-num2);
      }
      
//função soma
//===================
      int multiplicar (int num1,int num2)
      {
        return(num1*num2);
      }
