#include "coordinates.inc"        

///sor Surface of Revolution 
sor{  7, // # of points,  list of <x,y> points, spline rotates around y-axis 
     <0.00,0.00> 
     <0.12,0.00> 
     <0.62,0.54> 
     <0.21,0.83> 
     <0.19,1.46> 
     <0.29,1.50> 
     <0.46,1.53>
     // sturm 
     texture { pigment{ color LightWood}
               normal { bumps 0.75 scale 0.010}
               finish { diffuse 0.9 phong 1}
             } // end of texture 
     scale 1.5  rotate<0,0,0> translate<0,0,0>
   } // end of sor ---------------------------------------------------------------------

