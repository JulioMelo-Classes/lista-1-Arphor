/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{

    int x;
    int reset=0;
    int v[6];
    int result;

    while(cin >> std::ws >> x){
        v[reset]=x;
        reset++;
        if(reset==6){
            Ponto IE(v[0], v[1]);
            Ponto SD(v[2], v[3]);
            Ponto y(v[4], v[5]);

            if(IE.x == SD.x && IE.y == SD.y){
                std::cout << "invalid" << std::endl;
            }
            else{
                result = pt_in_rect(IE, SD, y);

                switch (result){

                    case 0:
                        std::cout << "inside" << std::endl;
                        break;
                    case 1:
                        std::cout << "border" << std::endl;
                        break;
                    case 2:
                        std::cout << "outside" << std::endl;
                        break;

                }

            }

            reset=0;

        }

    }

    return 0;
}
