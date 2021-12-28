/*Faça um programa que calcule a área do círculo. Construa uma função area_circulo() 
que receba o raio e um ponteiro *AREA. Imprima a área na função principal.*/

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
