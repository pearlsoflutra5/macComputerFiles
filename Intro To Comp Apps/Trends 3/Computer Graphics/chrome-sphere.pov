//Persistence of Vision Ray Tracer Scene Description File

#include "colors.inc"
#include "textures.inc"

#include "coordinates.inc"
#include "colors.inc"
#include "functions.inc"

sphere { <0,0,0>, 0.75 

         texture { Polished_Chrome    
                 finish { diffuse 0.9 phong 1 phong_size 50}
               }
         scale<1,1,1>  rotate<0,0,0>  translate<1,1,0>  
       } 
