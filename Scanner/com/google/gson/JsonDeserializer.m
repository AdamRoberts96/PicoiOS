//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:gson-2.6.2-sources.jar!com/google/gson/JsonDeserializer.java
//

#include "J2ObjC_source.h"
#include "com/google/gson/JsonDeserializer.h"

@interface ComGoogleGsonJsonDeserializer : NSObject

@end

@implementation ComGoogleGsonJsonDeserializer

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "LNSObject;", 0x401, 0, 1, 2, 3, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(deserializeWithComGoogleGsonJsonElement:withJavaLangReflectType:withComGoogleGsonJsonDeserializationContext:);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "deserialize", "LComGoogleGsonJsonElement;LJavaLangReflectType;LComGoogleGsonJsonDeserializationContext;", "LComGoogleGsonJsonParseException;", "(Lcom/google/gson/JsonElement;Ljava/lang/reflect/Type;Lcom/google/gson/JsonDeserializationContext;)TT;", "<T:Ljava/lang/Object;>Ljava/lang/Object;" };
  static const J2ObjcClassInfo _ComGoogleGsonJsonDeserializer = { "JsonDeserializer", "com.google.gson", ptrTable, methods, NULL, 7, 0x609, 1, 0, -1, -1, -1, 4, -1 };
  return &_ComGoogleGsonJsonDeserializer;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(ComGoogleGsonJsonDeserializer)
