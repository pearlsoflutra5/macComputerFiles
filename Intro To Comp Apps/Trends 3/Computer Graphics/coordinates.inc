/* Our first image is of Povray's left-handed coordinate system 
 This code was adapted from Friedrich A. Lohmueller's Povray Tutorial 
 See http://www.f-lohmueller.de/pov_tut/pov__eng.htm
*/

global_settings {  assumed_gamma 1 }
#default{ finish{ ambient 0.1 diffuse 0.9 }} 

#include "colors.inc"
#include "textures.inc"
#include "glass.inc"
#include "metals.inc"
#include "golds.inc"
#include "stones.inc"
#include "woods.inc"
#include "shapes.inc"
#include "shapes2.inc"
#include "functions.inc"
#include "math.inc"
#include "transforms.inc"

camera {/*ultra_wide_angle*/ angle 85    
                        location  <3.0 , 2.5 ,-4.0>
                        right     x*image_width/image_height
                        look_at   <0.0 , 1.0 , 0.0>}


light_source{<1500,2500,-2500> color White}

sphere{<0,0,0>,1 hollow 
              texture{pigment{gradient <0,1,0> scale 2
                              color_map{[0.0 color rgb<1,1,1>  ]
                                        [0.5 color rgb<1,0.8,0>]
                                        [1.0 color rgb<1,1,1>  ]}
                              quick_color White }
                      finish {ambient 1 diffuse 0}
                     } 
           scale 10000}

#macro Axis_( AxisLen, RedTexture,WhiteTexture) 
union{
    cylinder {<0,-AxisLen,0>,<0,AxisLen,0>,0.05
              texture{checker texture{RedTexture} 
                              texture{WhiteTexture}
                      translate<0.1,0,0.1>}}
    cone{<0,AxisLen,0>,0.2,<0,AxisLen+0.7,0>,0
         texture{RedTexture}}
     } // end of union                   
#end // of macro "Axis( )"

#macro AxisXYZ( AxisLenX, AxisLenY, AxisLenZ, TexRed, TexWhite)

union{
   object{Axis_(AxisLenX, TexRed, TexWhite)   rotate< 0,0,-90>}   // x axis
   object{Axis_(AxisLenY, TexRed, TexWhite)   rotate< 0,0,  0>}   // y axis 
   object{Axis_(AxisLenZ, TexRed, TexWhite)   rotate<90,0,  0>}   // z axis

   text{ ttf"arial.ttf",  "x",  0.15,  0  texture{TexRed} 
         scale 0.5 translate <AxisLenX+0.05,0.4,-0.10>}
   text{ ttf"arial.ttf",  "y",  0.15,  0  texture{TexRed} 
         scale 0.5 translate <-0.75,AxisLenY+0.50,-0.00>}
   text{ ttf"arial.ttf",  "z",  0.15,  0  texture{TexRed} 
         scale 0.5 translate <-0.75,0.2,AxisLenZ+0.50>}
}
#end

object{AxisXYZ (3,3,3, 
                texture{ pigment{rgb<1,0,0>} finish{ phong 1}}, 
                texture{ pigment{rgb<1,1,1>} finish{ phong 1}})
       } 
       