
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_Executors$DelegatedScheduledExecutorService__
#define __java_util_concurrent_Executors$DelegatedScheduledExecutorService__

#pragma interface

#include <java/util/concurrent/Executors$DelegatedExecutorService.h>

class java::util::concurrent::Executors$DelegatedScheduledExecutorService : public ::java::util::concurrent::Executors$DelegatedExecutorService
{

public: // actually package-private
  Executors$DelegatedScheduledExecutorService(::java::util::concurrent::ScheduledExecutorService *);
public:
  virtual ::java::util::concurrent::ScheduledFuture * schedule(::java::lang::Runnable *, jlong, ::java::util::concurrent::TimeUnit *);
  virtual ::java::util::concurrent::ScheduledFuture * schedule(::java::util::concurrent::Callable *, jlong, ::java::util::concurrent::TimeUnit *);
  virtual ::java::util::concurrent::ScheduledFuture * scheduleAtFixedRate(::java::lang::Runnable *, jlong, jlong, ::java::util::concurrent::TimeUnit *);
  virtual ::java::util::concurrent::ScheduledFuture * scheduleWithFixedDelay(::java::lang::Runnable *, jlong, jlong, ::java::util::concurrent::TimeUnit *);
private:
  ::java::util::concurrent::ScheduledExecutorService * __attribute__((aligned(__alignof__( ::java::util::concurrent::Executors$DelegatedExecutorService)))) e;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_Executors$DelegatedScheduledExecutorService__