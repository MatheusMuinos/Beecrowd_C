#include <iostream>

using namespace std;

int main() {
	
	int x, y, par = 0, impar = 0, positivo = 0, negativo = 0;
	
	for(y = 0; y < 5; y++){
		cin >> x;
		if(x%2 == 0) {
			par += 1;
		} else {
			impar += 1;
		}
		if(x < 0) {
			negativo += 1;
		}else if(x > 0) {
			positivo += 1;
		}
	}
	
	
	cout << par << " valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << positivo << " valor(es) positivo(s)" << endl;
	cout << negativo << " valor(es) negativo(s)" << endl;
	
	return 0;
}