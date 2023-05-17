//

#include "coordinates.inc"      

cone { <0,-1,0>, 1, <0,1.5,0>,0 

        texture { pigment{ color rgb<0.0, 1.0, 0.0>}
                  finish { diffuse 0.9 phong 1.0 reflection 0.0}
                } 

        scale<1,1,1>  rotate<0,30,0>  translate<0,0,0>
}
