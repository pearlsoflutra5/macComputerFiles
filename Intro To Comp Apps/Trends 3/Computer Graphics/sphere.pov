// Test image

#include "coordinates.inc"      

sphere{ <-2,0,0>,1.5 

        texture { pigment{ color rgb<0,0,0>}
                  finish { diffuse 0.9 phong 1.0 reflection 0.00}
                } 

        scale<1,1,.2>  rotate<0,0,0>  translate<-10,0,0>  
}
