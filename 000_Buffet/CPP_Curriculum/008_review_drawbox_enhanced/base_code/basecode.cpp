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

char c;
cout << "Please enter box x coordinate: ";
cin >> c;

char m;
cout << "Please enter box y coordinate: ";
cin >> m;


for(int y = 1; y < 9; y++){
		for(int x = 1; x < 6; x++){
			gotoxy(x+10,y+1);
			cout << "%";
		}
		cout << endl;
}

}

