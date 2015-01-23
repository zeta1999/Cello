#include "Cello.h"

static const char* C_Char_Name(void) {
  return "C_Char";
}

/* TODO */
static const char* C_Char_Brief(void) {
  return "";
}

/* TODO */
static const char* C_Char_Description(void) {
  return "";
}

/* TODO */
static const char* C_Char_Examples(void) {
  return "";
}

/* TODO */
static const char* C_Char_Methods(void) {
  return "";
}

var C_Char = typedecl(C_Char,
  typeclass(Doc,
    C_Char_Name, C_Char_Brief, C_Char_Description, 
    C_Char_Examples, C_Char_Methods));

static const char* C_Str_Name(void) {
  return "C_Str";
}

/* TODO */
static const char* C_Str_Brief(void) {
  return "";
}

/* TODO */
static const char* C_Str_Description(void) {
  return "";
}

/* TODO */
static const char* C_Str_Examples(void) {
  return "";
}

/* TODO */
static const char* C_Str_Methods(void) {
  return "";
}

var C_Str = typedecl(C_Str,
  typeclass(Doc,
    C_Str_Name, C_Str_Brief, C_Str_Description, 
    C_Str_Examples, C_Str_Methods));

static const char* C_Int_Name(void) {
  return "C_Int";
}

/* TODO */
static const char* C_Int_Brief(void) {
  return "";
}

/* TODO */
static const char* C_Int_Description(void) {
  return "";
}

/* TODO */
static const char* C_Int_Examples(void) {
  return "";
}

/* TODO */
static const char* C_Int_Methods(void) {
  return "";
}

var C_Int = typedecl(C_Int,
  typeclass(Doc,
    C_Int_Name, C_Int_Brief, C_Int_Description, 
    C_Int_Examples, C_Int_Methods));
    
static const char* C_Float_Name(void) {
  return "C_Float";
}

/* TODO */
static const char* C_Float_Brief(void) {
  return "";
}

/* TODO */
static const char* C_Float_Description(void) {
  return "";
}

/* TODO */
static const char* C_Float_Examples(void) {
  return "";
}

/* TODO */
static const char* C_Float_Methods(void) {
  return "";
}

var C_Float = typedecl(C_Float,
  typeclass(Doc,
    C_Float_Name, C_Float_Brief, C_Float_Description, 
    C_Float_Examples, C_Float_Methods));
    
char c_char(var self) {
  return method(self, C_Char, c_char);
}

char* c_str(var self) {
  return method(self, C_Str, c_str);
}

int64_t c_int(var self) {
  return method(self, C_Int, c_int);
}

double c_float(var self) {
  return method(self, C_Float, c_float);
}