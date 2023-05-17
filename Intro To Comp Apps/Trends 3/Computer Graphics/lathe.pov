#include "coordinates.inc"        

lathe{  // rotates a 2-D outline of points around the Y axis to create a 3-D shape
  quadratic_spline // quadratic_spline | cubic_spline | linear_spline 
  5,      // number of points,
  <2, 0>, // list of <x,y> points,
  <3, 0>, 
  <3, 5>, 
  <2, 5>, 
  <2, 0>     
  // sturm
  texture { pigment{ color rgb<0.4,0.2,1>} 
            finish { diffuse 0.9 phong 1 reflection 0.2}
          } // end of texture
  scale<1,1,1>*0.25 
  rotate<-60,-60,0> 
  translate<0,0.6,0>
 } 
