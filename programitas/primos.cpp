#include<iostream>
#include<ctime>
/*
Programa que imprime los numeros primos hasta el intervalo que se le indique
ademas encuentra el tiempo de ejecucion.
*/
using namespace std;

int main (){
	time_t ini = clock();
	int primo = 2;
	while (primo <= 5000){
		int i = 1;
		int dividen = 0;
		while(i <= primo){
			if(primo % i == 0){
				dividen++;
			}
			i++;
		}
		if(dividen == 2){
			cout << "Primo encontrado: " << primo << endl;
		}
		primo++;
	}
	ini = clock() - ini;
	cout << "El tiempo total de ejecucion fue " << (float)ini/100000 << " segundos" << endl; 
	return 0;
}