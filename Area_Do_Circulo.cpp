/*Fa�a um programa que calcule a �rea do c�rculo. Construa uma fun��o area_circulo() 
que receba o raio e um ponteiro *AREA. Imprima a �rea na fun��o principal.*/

#include <iostream>

int Area_circulo(int *Area, int raio);

int main(){
	int area = 0, raio = 0;
	
	std::cout<<"DIGITE A AREA:";
	std::cin >> area;
	std::cout<<"DIGITE O RAIO:";
	std::cin >> raio;
	
	int* Areapt = &area;
	
	std::cout<<"\nVARIAVEL AREA:" << area;
	std::cout<<"\nPONTEIRO DA VARIAVEL AREA:"<< *Areapt;	
	std::cout<<"\nAREA DO CICRULO:" << Area_circulo(Areapt,raio);
}
int Area_circulo(int *Area, int raio){	
	int area = *Area *raio*raio;
	return area;
	//return *Area * raio*raio;
	
}
