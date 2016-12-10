#include <iostream>
#include <algorithm>

using namespace std;

struct escuelas{
	int index;
	int g;
	int s;
	int b;
};

bool cmp(escuelas x, escuelas y) { 
	if(x.g > y.g)
		return true;
	else if(x.g == y.g){
		if(x.s > y.s){
			return true;
		}else if(x.s == y.s){
			if(x.b > y.b){
				return true;
			}
			else if(x.b == y.b)
				return x.index > y.index;
			else return false;
		}
		else return false;
	}
	else return false;
}

int main(){
	escuelas lista[7];

	for(int i = 0; i < 7;i++){
		lista[i].index = i + 1;
		cin >> lista[i].g >> lista[i].s >> lista[i].b;
	}
	
	sort(lista, lista+7, cmp);
	for(int i = 0; i < 7; i++)
		cout << "Facultad " << lista[i].index << " " << lista[i].g << " " << lista[i].s << " " << lista[i].b << endl;
	return 0;
}
