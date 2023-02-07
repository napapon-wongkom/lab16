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
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d){
	int money[]={50,100,500,1000};
	int checker[4];
	for(int i=0;i<4;i++){
		checker[i]=rand()%4;
		for(int j =0;j<i;j++){
			if(checker[i]==checker[j]){
				i--;
				break;
			}
		}

	}
	a = money[checker[0]];
	b = money[checker[1]];
	c = money[checker[2]];
	d = money[checker[3]];
}