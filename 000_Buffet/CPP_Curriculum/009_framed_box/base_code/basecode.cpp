// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
char x;
cout << "Please enter the symbol: ";
cin >> x;


int width;
cout<<"Please enter box width:"<<endl;
cin>>width;

int height= 0;
cout<<"Please enter box height:"<<endl;
cin>>height;

gotoxy(0,0);
for(int i = 0; i<width; i++){
cout<<x;
}
gotoxy(0,0);
for(int i = 0; i<height; i++){
gotoxy(0,i);
cout<<x<<endl;
}
gotoxy(0,height);
for(int i = 0; i<width; i++){
cout<<x;
}
gotoxy(width,0);
for(int i = 0; i<height; i++){
gotoxy(width,i);
cout<<x<<endl;
}

}





