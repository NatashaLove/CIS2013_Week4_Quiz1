#include <iostream>
using namespace std;

int main (){

int count = 0;


for (int i=1; i<=2000; i++){

count = count + 1;
cout << count;

if (count%50) {
	cout << " FOO ";
}
if (count%33) {
	cout << " BAR ";
}
cout << endl;

}



return 0;

}