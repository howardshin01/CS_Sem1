// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

 int symbol;
 char op;
 cout<<"Enter the symbol you want to use: ";
    cin>>symbol;
   
    if(op == '*'){
    cout << "*";
    }
    else if(op != '*'){
    cout << " ";
    }

for(int i = 1; i < 6; i++){
		gotoxy(1,2+i);
		cout << " " << endl;
		cout << "*" << endl;
		sleep(1);
	}
}






