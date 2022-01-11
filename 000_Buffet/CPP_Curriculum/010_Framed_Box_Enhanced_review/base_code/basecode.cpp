// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
char z;
cout << "Please enter the symbol: ";
cin >> z;


int width;
cout<<"Please enter box width:"<<endl;
cin>>width;

int height= 0;
cout<<"Please enter box height:"<<endl;
cin>>height;

int x;
cout<<"Please enter box x coordinate:"<<endl;
cin>>x;

int y;
cout<<"Please enter box y coordinate:"<<endl;
cin>>y;

gotoxy(0,0);
for(int i = 0; i<width; i++){
cout<<z;
}
gotoxy(0,0);
for(int i = 0; i<height; i++){
gotoxy(0,i);
cout<<z<<endl;
}
gotoxy(0,height);
for(int i = 0; i<width; i++){
cout<<z;
}
gotoxy(width,0);
for(int i = 0; i<height; i++){
gotoxy(width,i);
cout<<z<<endl;
}

}
