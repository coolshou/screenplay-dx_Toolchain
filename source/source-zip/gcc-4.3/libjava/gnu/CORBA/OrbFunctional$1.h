
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_OrbFunctional$1__
#define __gnu_CORBA_OrbFunctional$1__

#pragma interface

#include <java/lang/Thread.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
        class OrbFunctional;
        class OrbFunctional$1;
    }
  }
}

class gnu::CORBA::OrbFunctional$1 : public ::java::lang::Thread
{

public: // actually package-private
  OrbFunctional$1(::gnu::CORBA::OrbFunctional *, ::gnu::CORBA::OrbFunctional *);
public:
  void run();
public: // actually package-private
  ::gnu::CORBA::OrbFunctional * __attribute__((aligned(__alignof__( ::java::lang::Thread)))) this$0;
private:
  ::gnu::CORBA::OrbFunctional * val$THIS;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_OrbFunctional$1__
