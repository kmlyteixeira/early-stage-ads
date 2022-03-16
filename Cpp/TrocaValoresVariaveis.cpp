/* Leia dois valores A e B, faça um programa que efetue a troca
   dos valores de forma que a variável A passe a possuir o 
   valor da variável B e a variável B passe a possuir o valor
   da variável A. 
   Apresentar os valores trocados*/
  
    #include <iostream>
    using namespace std; 
    main()
{ 
    float valorA, valorB, novoA, novoB;
    
    setlocale(LC_ALL, "Portuguese"); 	
  
    cout<<"\n\n\t\t  ***EXERCICIO Nº 07***";           		
    cout<<"\n\n\t\t  Insira o valor de A: ";           
    cin>> valorA;
    cout<<"\n\n\t\t  Insira o valor de B: ";           
    cin>> valorB;
    
    novoA = valorB;
    novoB = valorA;
    valorA = novoA;
    valorB = novoB;
    
    cout<<"\n\n\t\t  Com a troca dos valores, as variáveis passam a ser: ";
    cout<<"\n\n\t\t  VALOR A :" <<valorA;
    cout<<"\n\n\t\t  VALOR A :" <<valorB;
 
    cout<<"\n\n\n\n\n"; 
}
