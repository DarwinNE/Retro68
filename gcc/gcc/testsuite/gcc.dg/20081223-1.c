/* { dg-do compile } */
/* { dg-options "-flto" { target lto } }  */

typedef struct foo_ foo_t;
foo_t bar;  /* { dg-error "storage size of 'bar' isn't known" }  */
