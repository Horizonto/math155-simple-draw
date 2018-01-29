// *******************************
// ShaderMgrSDM.h - Version 0.1. - January 5, 2017
//
// ShaderMgrSDM.cpp code defines, compiles and manages shaders
//           for the SimpleDrawModern.cpp program
//
// For use with Math 155A - Winter 2017.
//
// Bug reports: Sam Buss, sbuss@ucsd.edu
// *******************************


#pragma once

void setup_shaders();
unsigned int setup_shader_vertfrag(const char* vertexShaderSource, const char* fragmentShaderSource);

GLuint check_compilation_shader(GLuint shader);
GLuint check_link_status(GLuint program);



