// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

	gotoxy(3+5,5);
	cout << '"';
	

	gotoxy(3+1,5+1);
	cout << ' ';
	gotoxy(3+2,5+1);
	cout << '-';
	gotoxy(3+3,5+1);
	cout << '-';
	gotoxy(3+4,5+1);
	cout << '-';
	gotoxy(3+5,5+1);
	cout << '-';
	gotoxy(3+6,5+1);
	cout << '-';
	gotoxy(3+7,5+1);
	cout << ' ';
	gotoxy(3+8,5+1);
	cout << ' ';

	gotoxy(3+3,5+2);
	cout << '0';
	gotoxy(3+2,5+3);
	cout << ' ';
	gotoxy(3+3,5+4);
	cout << ' ';
	gotoxy(3+4,5+5);
	cout << ' ';

	gotoxy(3,5+2);
	cout << '/';
	gotoxy(3,5+3);
	cout << '<';
	gotoxy(3,5+4);
	cout << '@';
	gotoxy(3,5+5);
	cout << ' ';
	gotoxy(3,5+6);
	cout << ' ';
	
	gotoxy(3+1,5+4);
	cout << '@';
	gotoxy(3+2,5+4);
	cout << '-';
	gotoxy(3+3,5+4);
	cout << '-';
	gotoxy(3+4,5+4);
	cout << '-';
	gotoxy(3+5,5+4);
	cout << '-';
	gotoxy(3+6,5+4);
	cout << '-';
	gotoxy(3+7,5+4);
	cout << '/';

	gotoxy(3+8,5+3);
	cout << '|';
	gotoxy(3+8,5+2);
	cout << '|';
	
	gotoxy(3,5+5);
	cout << '|';
	gotoxy(3+1,5+5);
	cout << '|';
	gotoxy(3+2,5+5);
	cout << ' ';
	gotoxy(3+3,5+5);
	cout << ' ';
	gotoxy(3+4,5+5);
	cout << '|';
	gotoxy(3+5,5+5);
	cout << '|';
	gotoxy(3+6,5+5);
	cout << '|';
	
	gotoxy(3+4,5+6);
	cout << '|';
	gotoxy(3+6,5+6);
	cout << '|';
	
	gotoxy(3+4,5+6);
	cout << '|';
	gotoxy(3+6,5+6);
	cout << '|';
		
	gotoxy(3+4,5+7);
	cout << '|';
	gotoxy(3+6,5+7);
	cout << '|';

	gotoxy(3+7,5+7);
	cout << '-';
	gotoxy(3+8,5+7);
	cout << '-';
	gotoxy(3+9,5+7);
	cout << '-';
	gotoxy(3+10,5+7);
	cout << '-';
	gotoxy(3+11,5+7);
	cout << '-';
	gotoxy(3+12,5+7);
	cout << '-';
	gotoxy(3+13,5+7);
	cout << '-';
	gotoxy(3+14,5+7);
	cout << '-';
	gotoxy(3+15,5+7);
	cout << '-';
	gotoxy(3+16,5+7);
	cout << '-';
	gotoxy(3+17,5+7);
	cout << '-';
	gotoxy(3+18,5+7);
	cout << '-';
	
	gotoxy(3+19,5+7);
	cout << '/';
	gotoxy(3+20,5+6);
	cout << '/';
	gotoxy(3+21,5+5);
	cout << '/';
	gotoxy(3+22,5+4);
	cout << '/';
	gotoxy(3+23,5+4);
	cout << '\\';
	gotoxy(3+24,5+5);
	cout << '\\';
	gotoxy(3+25,5+6);
	cout << '\\';



	gotoxy(3+4,5+8);
	cout << '/';
	
	gotoxy(3+3,5+9);
	cout << '/';
	
	gotoxy(3+2,5+10);
	cout << '{';
	
	gotoxy(3+2,5+11);
	cout << '\\';

	gotoxy(3+3,5+12);
	cout << '\\';
	gotoxy(3+4,5+12);
	cout << '-';
	gotoxy(3+5,5+12);
	cout << '-';
	gotoxy(3+6,5+12);
	cout << '-';
	gotoxy(3+7,5+12);
	cout << '-';
	gotoxy(3+8,5+12);
	cout << '-';
	gotoxy(3+9,5+12);
	cout << '-';
	gotoxy(3+10,5+12);
	cout << '-';
	gotoxy(3+11,5+12);
	cout << '-';
	gotoxy(3+12,5+12);
	cout << '-';
	gotoxy(3+13,5+12);
	cout << '-';
	gotoxy(3+14,5+12);
	cout << '-';
	gotoxy(3+15,5+12);
	cout << '-';
	gotoxy(3+16,5+12);
	cout << '-';
	gotoxy(3+17,5+12);
	cout << '-';
	gotoxy(3+18,5+12);
	cout << '-';
	gotoxy(3+19,5+12);
	cout << '-';
	gotoxy(3+20,5+12);
	cout << '-';
	
	gotoxy(3+21,5+12);
	cout << '/';
	gotoxy(3+22,5+11);
	cout << '/';
	gotoxy(3+23,5+10);
	cout << '/';
	gotoxy(3+24,5+9);
	cout << '/';
	gotoxy(3+25,5+8);
	cout << '/';
	gotoxy(3+26,5+7);
	cout << '/';
	gotoxy(3+21,5+12);
	cout << '/';
		
	gotoxy(3+9,5+13);
	cout << '|';
	gotoxy(3+9,5+14);
	cout << '|';
	gotoxy(3+9,5+15);
	cout << '|';

	
	gotoxy(3+13,5+13);
	cout << '|';
	gotoxy(3+13,5+14);
	cout << '|';
	gotoxy(3+13,5+15);
	cout << '|';


	gotoxy(3+6,5+16);
	cout << '-';
	gotoxy(3+7,5+16);
	cout << '-';
	gotoxy(3+8,5+16);
	cout << '-';

	gotoxy(3+11,5+16);
	cout << '-';
	gotoxy(3+12,5+16);
	cout << '-';
	gotoxy(3+13,5+16);
	cout << '-';




	for(int i = 0; i < 6; i++){
		gotoxy(3 + i, 5 + i);
		cout << ' ';
	}
	
	
	gotoxy(1,40);
	
}
