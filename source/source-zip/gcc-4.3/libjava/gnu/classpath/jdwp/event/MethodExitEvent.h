
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_event_MethodExitEvent__
#define __gnu_classpath_jdwp_event_MethodExitEvent__

#pragma interface

#include <gnu/classpath/jdwp/event/Event.h>
extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace event
        {
            class MethodExitEvent;
        }
        namespace util
        {
            class Location;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::event::MethodExitEvent : public ::gnu::classpath::jdwp::event::Event
{

public:
  MethodExitEvent(::java::lang::Thread *, ::gnu::classpath::jdwp::util::Location *, ::java::lang::Object *);
  virtual ::java::lang::Object * getParameter(jint);
public: // actually protected
  virtual void _writeData(::java::io::DataOutputStream *);
private:
  ::java::lang::Thread * __attribute__((aligned(__alignof__( ::gnu::classpath::jdwp::event::Event)))) _thread;
  ::gnu::classpath::jdwp::util::Location * _location;
  ::java::lang::Object * _instance;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_classpath_jdwp_event_MethodExitEvent__
