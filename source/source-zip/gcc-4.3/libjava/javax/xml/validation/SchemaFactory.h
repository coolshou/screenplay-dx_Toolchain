
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_validation_SchemaFactory__
#define __javax_xml_validation_SchemaFactory__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
        class URL;
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace transform
      {
          class Source;
      }
      namespace validation
      {
          class Schema;
          class SchemaFactory;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
        namespace ls
        {
            class LSResourceResolver;
        }
      }
    }
    namespace xml
    {
      namespace sax
      {
          class ErrorHandler;
      }
    }
  }
}

class javax::xml::validation::SchemaFactory : public ::java::lang::Object
{

public: // actually protected
  SchemaFactory();
public:
  static ::javax::xml::validation::SchemaFactory * newInstance(::java::lang::String *);
private:
  static ::java::lang::String * getFactoryClassName(::java::lang::ClassLoader *, ::java::lang::String *, jint);
public:
  virtual jboolean isSchemaLanguageSupported(::java::lang::String *) = 0;
  virtual jboolean getFeature(::java::lang::String *);
  virtual void setFeature(::java::lang::String *, jboolean);
  virtual ::java::lang::Object * getProperty(::java::lang::String *);
  virtual void setProperty(::java::lang::String *, ::java::lang::Object *);
  virtual ::org::xml::sax::ErrorHandler * getErrorHandler() = 0;
  virtual void setErrorHandler(::org::xml::sax::ErrorHandler *) = 0;
  virtual ::org::w3c::dom::ls::LSResourceResolver * getResourceResolver() = 0;
  virtual void setResourceResolver(::org::w3c::dom::ls::LSResourceResolver *) = 0;
  virtual ::javax::xml::validation::Schema * newSchema(::javax::xml::transform::Source *);
  virtual ::javax::xml::validation::Schema * newSchema(::java::io::File *);
  virtual ::javax::xml::validation::Schema * newSchema(::java::net::URL *);
  virtual ::javax::xml::validation::Schema * newSchema(JArray< ::javax::xml::transform::Source * > *) = 0;
  virtual ::javax::xml::validation::Schema * newSchema() = 0;
  static ::java::lang::Class class$;
};

#endif // __javax_xml_validation_SchemaFactory__
