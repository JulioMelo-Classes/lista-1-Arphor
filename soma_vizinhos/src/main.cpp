/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int x, y, out;

    while(std::cin >> x){
        std::cin >> y;

        out = x;

        if(y==0){
            std::cout << out << std::endl;
            
        }
        else{
            if(y>0){
                y--;
                while(y>0){

                    x++;
                    y--;

                    out = out + x; 
                }
            }
            else{
                y++;
                while(y<0){
                    x--;
                    y++;
                    out = out + x;
                }
            }

            std::cout << out << std::endl;
        }
    }

    return 0;
}
