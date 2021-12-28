// Divisor de tensão em C++
#include <iostream>


int main(){
	
	float Vout = 0, R1, R2, Vin;
	int decisao = 0;
	std::cout<<"-------EM QUE RESISTOR DESEJA CALCULAR A TENSAO?---------\n";
	std::cout<<"1- NO PRIMEIRO RESISTOR (R1)\n";
	std::cout<<"2- NO PRIMEIRO RESISTOR (R2)\n\n";
	std::cout<<"Decisao: ";
	std::cin>>decisao;
	
	std::cout<<"------------------------PARAMETROS------------------------\n";
		std::cout<<"R1 (Ohm) = ";
	std::cin>>R1; 
		std::cout<<"R2 (Ohm) = ";
	std::cin>>R2; 
		std::cout<<"Vin (Volts) = ";
	std::cin>>Vin;
	
	if (decisao == 1){
		std::cout<<"\n------RESULTADO DO DIVISOR DE TENSAO NO RESISTOR (R1)------\n";
		Vout = (R1/(R1+R2))*Vin;
		std::cout<<"\nVout (Volts)= "<< Vout <<"\n";
		std::cout<<"\n-----------------------------------------------------------\n";
	}
	
	else if(decisao == 2){
		std::cout<<"\n------RESULTADO DO DIVISOR DE TENSAO NO RESISTOR (R2)------\n";
		Vout = (R2/(R1+R2))*Vin;
		Vout = (R2/(R1+R2))*Vin;
		std::cout<<"\nVout (Volts)= "<< Vout << "\n";
		std::cout<<"\n-----------------------------------------------------------\n";
	}
}
