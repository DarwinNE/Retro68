
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenLookBehind$RETokenMatchHereOnly__
#define __gnu_java_util_regex_RETokenLookBehind$RETokenMatchHereOnly__

#pragma interface

#include <gnu/java/util/regex/REToken.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace lang
      {
          class CPStringBuilder;
      }
      namespace util
      {
        namespace regex
        {
            class CharIndexed;
            class REMatch;
            class RETokenLookBehind$RETokenMatchHereOnly;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenLookBehind$RETokenMatchHereOnly : public ::gnu::java::util::regex::REToken
{

public: // actually package-private
  virtual jint getMaximumLength();
  RETokenLookBehind$RETokenMatchHereOnly(jint);
  virtual ::gnu::java::util::regex::REMatch * matchThis(::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *);
  virtual void dump(::gnu::java::lang::CPStringBuilder *);
private:
  jint __attribute__((aligned(__alignof__( ::gnu::java::util::regex::REToken)))) index;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_regex_RETokenLookBehind$RETokenMatchHereOnly__
