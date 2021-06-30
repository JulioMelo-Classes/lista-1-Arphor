/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

/*
ok
*/
int main(void)
{
    int x;
    double count[5]= {0};
    double count_total=0;


    while(cin >> std::ws >> x){
        count_total++;

        if(x<0 || x>=100){
            count[4]++;
        }
        else{ //gostei da ideia de fazer assim, embora não seja uma boa para monitores pequenos =)
            if(x<25){
                count[0]++;
            }
            else{
                if(x<50){
                    count[1]++;
                }
                else{
                    if(x<75){
                        count[2]++;
                    }
                    else{
                        count[3]++;
                    }
                }
            }
        }
    }

    double percentage[5] = {0};
    
    for(int y=0; y<5; y++){
        percentage[y] = (count[y]/count_total)*100;
        std::cout << std::setprecision(4) << percentage[y] << std::endl;

    }


    return 0;
}
