// count from 1 to 2000;
#include <iostream>
using namespace std;

int main (){

int count = 0;
int foo_amount = 0;
int bar_amount = 0;


for (int i=1; i<=2000; i++){

count = count + 1;
cout << count;

if (count%50==0) {
	cout << " FOO ";
	foo_amount++;
}
if (count%33==0) {
	cout << " BAR ";
	bar_amount++;
}
cout << endl;

}

cout << " FOO amount is "<< foo_amount<< endl;
cout << " BAR amount is "<< bar_amount << endl;

return 0;

}
// End of program.