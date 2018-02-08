// count from 1 to 2000;
#include <iostream>
using namespace std;

int main (){

int count = 0;


for (int i=1; i<=2000; i++){

count = count + 1;
cout << count;

if (count%50==0) {
	cout << " FOO ";
}
if (count%33==0) {
	cout << " BAR ";
}
cout << endl;

}



return 0;

}
// End of program.