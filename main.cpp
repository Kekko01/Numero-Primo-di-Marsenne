#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double potenza(int x, int y){
	int i;
	double num=1;
	for(i=1; i<=y; i++){
		num=num*x;
	}	
	return num;
}

int main(int argc, char** argv) {
	
	ofstream output("numero.txt", ios::app);
	output<<potenza(2,74207281)-1<<endl;
	output.close();
	return 0;
}
