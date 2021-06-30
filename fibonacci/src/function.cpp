#include "function.h"

/*ok*/
std::vector<unsigned int> fib_below_n( unsigned int n )
{
   
    std::vector<unsigned int> fib_below_n; //eu não usaria o mesmo nome da função, embora c++ permita, realmente fica meio confuso as vezes

    if(n>1){

        fib_below_n.emplace_back(1);
        fib_below_n.emplace_back(1);
        unsigned int x = fib_below_n.back();
        unsigned int y = fib_below_n.back();
    

        while(y<n){

            y = x + fib_below_n.back();
            x = fib_below_n.back();
            if(y<n){
                fib_below_n.emplace_back(y);
            }
             
        }
        return fib_below_n;
    }

    return fib_below_n;
}
