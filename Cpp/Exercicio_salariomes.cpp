/* 4.FUP que pergunte quanto você ganha por hora e o número de 
  horas trabalhadas no mês. Calcule e mostre o total do seu 
  salário no referido mês */
  
  #include <iostream> 								//incluir biblioteca
using namespace std; 
main()
{ 
  float salHora, horasMes, salario; 
  
  setlocale(LC_ALL, "Portuguese"); 	
  
  cout<<"\n\n\t\t  ***VALOR SALÁRIO MÊS 02/2022***";           		
  cout<<"\n\n\t\t  Qual o valor do seu salário p/hora? ";           
  cin>> salHora;
  cout<<"\n\n\t\t  Qual a sua quantidade de horas trabalhadas na competência vigente? ";
  cin>> horasMes;
  
  salario = salHora*horasMes;
  cout<<"\n\n\t\t  O VALOR BRUTO DO SEU SALÁRIO NESTE MÊS SERÁ: R$" << salario;
 
  cout<<"\n\n\n\n\n"; 
}