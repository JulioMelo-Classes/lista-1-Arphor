#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
/*
blz, faltou só incluir "array" alí mas vou considerar
*/
void reverse( std::array< std::string, SIZE > & arr )
{
    size_t x = arr.size();
    size_t count=0;

    while(count < x){
        for(auto i=(arr.begin()+1); i<(arr.end()-count) ;i++){
            auto temp = *i;
            *i = *(i-1);
            *(i-1) = temp; //poderia usar std::iter_swap
        }


        count++;
    }
    
}
