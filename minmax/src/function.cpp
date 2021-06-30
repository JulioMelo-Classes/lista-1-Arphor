#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

/*
blz!
*/
std::pair<int,int> min_max( int V[], std::size_t n )
{
    int max=V[0];
    int min=V[0];
    int max_place = -1;
    int min_place = -1;


    for(auto x=0; x<n; x++){
        if(V[x]<min || x==0){
            min_place = x;
            min = V[x];
        }
    }
    for(auto y=0; y<n; y++){
        if(V[y]>=max){
            max_place = y;
            max = V[y];
        }
    }


    return { min_place, max_place };
}
