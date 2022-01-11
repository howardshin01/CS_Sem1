// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////


main(){
	srand(time(NULL));




	gotoxy(3+1,5+6);
	cout << '@';
	
	gotoxy(3+2,5+6);
	cout << "---";
	
	gotoxy(3+8,5+6);
	cout << '@';
	
	gotoxy(3+6,5+5);
	cout << "/";
	
	gotoxy(3+7,5+5);
	cout << "---";
	gotoxy(3+9,5+8);
	cout << '/';

	gotoxy(3+11,5+4);
	cout << '/';

	gotoxy(3+11,5+5);
	cout << '\\';

	gotoxy(3+11,5+6);
	cout << '/';
	gotoxy(3+10,5+7);
	cout << '/';
	gotoxy(3+9,5+8);
	cout << '/';
	
	
	gotoxy(3+9,5+9);
	cout << '|';
	gotoxy(3+11,5+10);
	cout << "---------------";
	gotoxy(3+26,5+9);
	cout << "/";
	gotoxy(3+27,5+9);
	cout << '\\';
	gotoxy(3+28,5+10);
	cout << '\\';

	gotoxy(3+2,5+7);
	cout << "---";

	gotoxy(3+5,5+8);
	cout << '\\';
	
	gotoxy(3+6,5+9);
	cout << '|';
	
	gotoxy(3+6,5+10);
	cout << '{';


	gotoxy(3+7,5+11);
	cout << '\\';
	gotoxy(3+4,5+12);
	cout << ' ';
	gotoxy(3+5,5+12);
	cout << ' ';
	gotoxy(3+6,5+12);
	cout << ' ';
	gotoxy(3+7,5+12);
	cout << ' ';
	gotoxy(3+8,5+12);
	cout << ' ';
	gotoxy(3+9,5+12);
	cout << ' ';
	gotoxy(3+10,5+12);
	cout << ' ';
	gotoxy(3+11,5+12);
	cout << ' ';
	gotoxy(3+12,5+12);
	cout << "--";
	gotoxy(3+14,5+12);
	cout << '-';
	gotoxy(3+15,5+12);
	cout << ' ';
	gotoxy(3+16,5+12);
	cout << ' ';
	gotoxy(3+17,5+12);
	cout << ' ';
	gotoxy(3+18,5+12);
	cout << '-';
	gotoxy(3+19,5+12);
	cout << '-';
	gotoxy(3+20,5+12);
	cout << "--    -";
	
	gotoxy(3+28,5+11);
	cout << '/';

	gotoxy(3+23,5+13);
	cout << '\\';
	gotoxy(3+24,5+14);
	cout << '|';
	gotoxy(3+24,5+15);
	cout << '|';
	
	gotoxy(3+25,5+13);
	cout << '\\';
	gotoxy(3+26,5+14);
	cout << '|';
	gotoxy(3+26,5+15);
	cout << '|';

	

	
	gotoxy(3+11,5+13);
	cout << '/';
	gotoxy(3+10,5+14);
	cout << '/';
	gotoxy(3+9,5+15);
	cout << '/';	
		
	gotoxy(3+9,5+13);
	cout << '/';
	gotoxy(3+8,5+14);
	cout << '/';
	gotoxy(3+7,5+15);
	cout << '/';

	gotoxy(3+14,5+13);
	cout << '/';
	gotoxy(3+13,5+14);
	cout << '/';
	gotoxy(3+12,5+15);
	cout << '/';
	
	
	gotoxy(3+16,5+13);
	cout << '/';
	gotoxy(3+15,5+14);
	cout << '/';
	gotoxy(3+14,5+15);
	cout << '/';


	gotoxy(3+6,5+16);
	cout << "---";


	gotoxy(3+11,5+16);
	cout << "---          ---";




	for(int i = 0; i < 6; i++){
		gotoxy(3 + i, 5 + i);
		cout << ' ';
	}

{
	char sym;
gotoxy(1,14);
cout << " ";
cin >> sym;

for(int a = 0; a < 8; a++){
gotoxy(21,2+a);
cout << sym << endl;
sleep(1);
gotoxy(21,2+a);
cout << ' ' << endl;
}
}
	
	gotoxy(1,40);
	
}

