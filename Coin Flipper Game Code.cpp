#include <iostream>
#include <ctime> 
#include <cstdlib> 
using namespace std;
int main() {

srand(time(0)); 
string flip;
//capital FLIP will be the coin flipper button;
cout<<"Enter the word FLIP (in caps) to flip a coin: "; 
cin>>flip;

	while(flip == "FLIP"){
	int r = rand() % 2;
	if (r==1) cout<<"landed on tails"<<endl;
	else cout<<"landed on heads"<<endl;
	cout<< "If you want to flip again, enter FLIP(in caps). If you want to stop the game enter STOP (in caps) : "; 
	cin>>flip;
//capital STOP will be the end button;
	if(flip == "STOP")
	return 0;
	}

return 0; 
}

