#include "Cello.h"

static const char* Terminal_Name(void) {
  return "Terminal";
}

/* TODO */
static const char* Terminal_Brief(void) {
  return "";
}

/* TODO */
static const char* Terminal_Description(void) {
  return "";
}

/* TODO */
static const char* Terminal_Examples(void) {
  return "";
}

/* TODO */
static const char* Terminal_Methods(void) {
  return "";
}

var Terminal = typedecl(Terminal,
  typeclass(Doc,
    Terminal_Name, Terminal_Brief, Terminal_Description,
    Terminal_Examples, Terminal_Methods));

static const char* Iter_Name(void) {
  return "Iter";
}

/* TODO */
static const char* Iter_Brief(void) {
  return "";
}

/* TODO */
static const char* Iter_Description(void) {
  return "";
}

/* TODO */
static const char* Iter_Examples(void) {
  return "";
}

/* TODO */
static const char* Iter_Methods(void) {
  return "";
}

var Iter = typedecl(Iter,
  typeclass(Doc,
    Iter_Name, Iter_Brief, Iter_Description, Iter_Examples, Iter_Methods));

var iter_init(var self) {
  return method(self, Iter, iter_init);
}

var iter_next(var self, var curr) {
  return method(self, Iter, iter_next, curr);
}
