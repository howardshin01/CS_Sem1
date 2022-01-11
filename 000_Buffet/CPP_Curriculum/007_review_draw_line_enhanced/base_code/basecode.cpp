// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

char x;
cout << "Please enter the symbol: ";
cin >> x;

int y = 0;
int z = 0;
cout << "Please enter the length: ";
cin >> y;

char n;
cout << "Please enter h for horizontal, v for vertical, or d for diagonal: ";
cin >> n;

	for(int y = 1; y < 2; y++){
		for(int x = 1; x < 6; x++){
			gotoxy(x+5,y+10);
			cout << "%";
		}
		
		cout << endl;

	}
}