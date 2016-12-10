#include <iostream>
#include <string>

using namespace std;

void triangulo(int);
void paralelogramo(int, int);
void rectangulo(int, int);

int main(){
	int c;
	while(cin >> c){
		if(c == -1) break;
	
		if(c == 1){
			int h;cin >> h;
			triangulo(h);
		}
		else if(c == 2){
			int w, h;cin >> w >> h;
			paralelogramo(w, h);
		}
		else if(c == 3){
			int w, h; cin >> w >> h;
			rectangulo(w, h);
		}
		cout << endl;
	}
	return 0;	
}


void triangulo(int x){
	int y = 1;
	for (int i = 0; i < x; i++){
		for (int j = 0; j < (x-i)-1; j++)
			cout << " ";
		for (int j = 0; j < y; j++)
			cout << "*";
		y += 2;
		cout << endl;
	}
}

void paralelogramo(int w, int h){
	for (int i = 0; i < h; i++)
	{
		for (int k = 0; k < (h-i)-1; k++)
			cout << " ";
		for (int j = 0; j < w; j++)
			cout << "*";
		cout << endl;
	}
}

void rectangulo(int w, int h){
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			cout << "*";
		cout << endl;
	}	
}

