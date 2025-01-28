#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d){
    int money[4] = {a,b,c,d};
    int pos1,pos2;
    
    pos1 = rand()%4;
    pos2 = rand()%4;
    
    while (pos1==pos2){
        pos2 = rand()%4;
    }
    int place = money[pos1];
    money[pos1] = money[pos2];
    money[pos2] = place;
    
    a = money[0];
    b = money[1];
    c = money[2];
    d = money[3];
}
//Do not modify source code above this line
