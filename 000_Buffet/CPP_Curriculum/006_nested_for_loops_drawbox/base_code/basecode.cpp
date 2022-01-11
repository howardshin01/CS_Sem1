// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));


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
for(int y = 1; y < 9; y++){
		for(int x = 1; x < 6; x++){
			gotoxy(x,y+4);
			cout << "%";
		}
		cout << endl;
}

}

