
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_CertSelector__
#define __java_security_cert_CertSelector__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace cert
      {
          class CertSelector;
          class Certificate;
      }
    }
  }
}

class java::security::cert::CertSelector : public ::java::lang::Object
{

public:
  virtual ::java::lang::Object * clone() = 0;
  virtual jboolean match(::java::security::cert::Certificate *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_security_cert_CertSelector__
