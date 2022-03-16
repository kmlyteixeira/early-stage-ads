/* Ler uma temperatura em graus Celsius e apresentá-la convertida
  em graus Fahrenheit. A fórmula de conversão é :
  F = (9*C+160)/5
  Sendo F a temperatura em Fahrenheit e 
  C a temperatura em Celsius */
  
    #include <iostream>
    using namespace std; 
    main()
{ 
  float valorCelsius, valorFahrenheit;
  int form1, form2, form3;
  
  form1 = 9;
  form2 = 160;
  form3 = 5;
  
  setlocale(LC_ALL, "Portuguese"); 	
  
  cout<<"\n\n\t\t  ***CONVERSÃO DE Celsius PARA Fahrenheit***";           		
  cout<<"\n\n\t\t  Insira o valor em graus Celsius: ";           
  cin>> valorCelsius;
  
  valorFahrenheit = (form1* valorCelsius + form2)/form3;
  cout<<"\n\n\t\t  Valor convertido para Fahrenheit: "<< valorFahrenheit;
 
  cout<<"\n\n\n\n\n"; 
}