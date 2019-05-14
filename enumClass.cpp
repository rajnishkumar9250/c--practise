// enum class example

#include<iostream>

using namespace std;

int main(){

    enum class colors_t  {black, blue, green, cyan, red, purple, yellow, white};
    colors_t mycolor;
    mycolor = colors_t::blue;
    //cout << mycolor;

    return 0;

}
