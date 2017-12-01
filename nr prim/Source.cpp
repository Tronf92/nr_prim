#include <iostream>
using namespace std;

int main(){
	int nr,contor=2,check=0;
	cout << "Introduceti un nr: " << endl;
	cin >> nr;

	while(contor<=sqrt(nr) && check==0){
		if(nr%contor==0){
			check++;
		}
		contor++;
	}
	
	if(check==0 && nr>1){
		cout << "Numarul este prim" << endl;
	}
	else{
		cout << "Numarul nu este prim" << endl;
	}

	system("pause");
	return 0;
}

