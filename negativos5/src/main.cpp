#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int x;
    int y;
    int count=0;

    for(y=0; y<SIZE; y++){

        std::cin >> x;

        if ( x<0 ){
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;

    return 0;
}
