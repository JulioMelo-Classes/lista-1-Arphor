#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

/*
ok
*/
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    if(P.x<IE.x || P.y<IE.y || P.x>SD.x || P.y>SD.y){ //boa ideia, usualmente eu não gosto de usar construções muito abrangentes usando || mas nesse caso ficou muito bom
        return location_t::OUTSIDE;;
    }
    else{
        if(P.x==IE.x || P.y==IE.y || P.x==SD.x || P.y==SD.y){
            return location_t::BORDER;
        }
        else{
            return location_t::INSIDE;
        }
    }

}
