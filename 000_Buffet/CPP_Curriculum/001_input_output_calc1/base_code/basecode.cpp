// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

	int x = 5;
	while(true){
		cout << x << endl;
		
		if(x == 25){
			break;
		}
		
		x = x + 1;
	}

	cout << endl;

	int y = 15;
	while(true){
		cout << y << endl;
		
	if(y == 5){
			break;
		}
		
		y = y - 1;
}

cout << endl;

for(int i = 5; i <= 25; i = i + 1){
	cout << i << endl;
}

cout << endl;

for(int i = 15; i >= 5; i = i - 1){
	cout << i << endl;
}
cout << endl;

for(int i = 123; i <= 200; i = i + 2){
	cout << i << endl;
}
cout << endl;

for(int i = 1253; i >= 7; i = i -2){
	cout << i << endl;
}
}