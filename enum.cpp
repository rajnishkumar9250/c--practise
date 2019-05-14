// enum example

#include<iostream>

using namespace std;

int main(){

	enum colors_t {black, blue, green, cyan, red, purple, yellow, white};
	colors_t mycolor;
	mycolor = blue;
	cout << mycolor;

	return 0;

}
