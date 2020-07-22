// gcc switch_blend.c -c
#include "switch_blend.h"

int blend;

GLuint switch_blend(GLuint blend) {
  blend = blend ? 0 : 1;              // switch the current value of blend, between 0 and 1.
  if (!blend) {
    glEnable(GL_BLEND);		    		// Turn Blending On
    glDisable(GL_DEPTH_TEST);                   // Turn Depth Testing Off

                                             
  } else {
    glDisable(GL_BLEND);              // Turn Blending Off
    glEnable(GL_DEPTH_TEST);        // Turn Depth Testing On
  }
  return blend;
}
