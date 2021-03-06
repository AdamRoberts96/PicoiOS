//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:gson-2.6.2-sources.jar!com/google/gson/stream/JsonToken.java
//

#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "com/google/gson/stream/JsonToken.h"
#include "java/lang/Enum.h"
#include "java/lang/IllegalArgumentException.h"

__attribute__((unused)) static void ComGoogleGsonStreamJsonToken_initWithNSString_withInt_(ComGoogleGsonStreamJsonToken *self, NSString *__name, jint __ordinal);

J2OBJC_INITIALIZED_DEFN(ComGoogleGsonStreamJsonToken)

ComGoogleGsonStreamJsonToken *ComGoogleGsonStreamJsonToken_values_[10];

@implementation ComGoogleGsonStreamJsonToken

+ (IOSObjectArray *)values {
  return ComGoogleGsonStreamJsonToken_values();
}

+ (ComGoogleGsonStreamJsonToken *)valueOfWithNSString:(NSString *)name {
  return ComGoogleGsonStreamJsonToken_valueOfWithNSString_(name);
}

- (id)copyWithZone:(NSZone *)zone {
  return self;
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "[LComGoogleGsonStreamJsonToken;", 0x9, -1, -1, -1, -1, -1, -1 },
    { NULL, "LComGoogleGsonStreamJsonToken;", 0x9, 0, 1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(values);
  methods[1].selector = @selector(valueOfWithNSString:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "BEGIN_ARRAY", "LComGoogleGsonStreamJsonToken;", .constantValue.asLong = 0, 0x4019, -1, 2, -1, -1 },
    { "END_ARRAY", "LComGoogleGsonStreamJsonToken;", .constantValue.asLong = 0, 0x4019, -1, 3, -1, -1 },
    { "BEGIN_OBJECT", "LComGoogleGsonStreamJsonToken;", .constantValue.asLong = 0, 0x4019, -1, 4, -1, -1 },
    { "END_OBJECT", "LComGoogleGsonStreamJsonToken;", .constantValue.asLong = 0, 0x4019, -1, 5, -1, -1 },
    { "NAME", "LComGoogleGsonStreamJsonToken;", .constantValue.asLong = 0, 0x4019, -1, 6, -1, -1 },
    { "STRING", "LComGoogleGsonStreamJsonToken;", .constantValue.asLong = 0, 0x4019, -1, 7, -1, -1 },
    { "NUMBER", "LComGoogleGsonStreamJsonToken;", .constantValue.asLong = 0, 0x4019, -1, 8, -1, -1 },
    { "BOOLEAN", "LComGoogleGsonStreamJsonToken;", .constantValue.asLong = 0, 0x4019, -1, 9, -1, -1 },
    { "NULL", "LComGoogleGsonStreamJsonToken;", .constantValue.asLong = 0, 0x4019, -1, 10, -1, -1 },
    { "END_DOCUMENT", "LComGoogleGsonStreamJsonToken;", .constantValue.asLong = 0, 0x4019, -1, 11, -1, -1 },
  };
  static const void *ptrTable[] = { "valueOf", "LNSString;", &JreEnum(ComGoogleGsonStreamJsonToken, BEGIN_ARRAY), &JreEnum(ComGoogleGsonStreamJsonToken, END_ARRAY), &JreEnum(ComGoogleGsonStreamJsonToken, BEGIN_OBJECT), &JreEnum(ComGoogleGsonStreamJsonToken, END_OBJECT), &JreEnum(ComGoogleGsonStreamJsonToken, NAME), &JreEnum(ComGoogleGsonStreamJsonToken, STRING), &JreEnum(ComGoogleGsonStreamJsonToken, NUMBER), &JreEnum(ComGoogleGsonStreamJsonToken, BOOLEAN), &JreEnum(ComGoogleGsonStreamJsonToken, NULL), &JreEnum(ComGoogleGsonStreamJsonToken, END_DOCUMENT), "Ljava/lang/Enum<Lcom/google/gson/stream/JsonToken;>;" };
  static const J2ObjcClassInfo _ComGoogleGsonStreamJsonToken = { "JsonToken", "com.google.gson.stream", ptrTable, methods, fields, 7, 0x4011, 2, 10, -1, -1, -1, 12, -1 };
  return &_ComGoogleGsonStreamJsonToken;
}

+ (void)initialize {
  if (self == [ComGoogleGsonStreamJsonToken class]) {
    size_t objSize = class_getInstanceSize(self);
    size_t allocSize = 10 * objSize;
    uintptr_t ptr = (uintptr_t)calloc(allocSize, 1);
    id e;
    id names[] = {
      @"BEGIN_ARRAY", @"END_ARRAY", @"BEGIN_OBJECT", @"END_OBJECT", @"NAME", @"STRING", @"NUMBER", @"BOOLEAN", @"NULL", @"END_DOCUMENT",
    };
    for (jint i = 0; i < 10; i++) {
      (ComGoogleGsonStreamJsonToken_values_[i] = e = objc_constructInstance(self, (void *)ptr), ptr += objSize);
      ComGoogleGsonStreamJsonToken_initWithNSString_withInt_(e, names[i], i);
    }
    J2OBJC_SET_INITIALIZED(ComGoogleGsonStreamJsonToken)
  }
}

@end

void ComGoogleGsonStreamJsonToken_initWithNSString_withInt_(ComGoogleGsonStreamJsonToken *self, NSString *__name, jint __ordinal) {
  JavaLangEnum_initWithNSString_withInt_(self, __name, __ordinal);
}

IOSObjectArray *ComGoogleGsonStreamJsonToken_values() {
  ComGoogleGsonStreamJsonToken_initialize();
  return [IOSObjectArray arrayWithObjects:ComGoogleGsonStreamJsonToken_values_ count:10 type:ComGoogleGsonStreamJsonToken_class_()];
}

ComGoogleGsonStreamJsonToken *ComGoogleGsonStreamJsonToken_valueOfWithNSString_(NSString *name) {
  ComGoogleGsonStreamJsonToken_initialize();
  for (int i = 0; i < 10; i++) {
    ComGoogleGsonStreamJsonToken *e = ComGoogleGsonStreamJsonToken_values_[i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw create_JavaLangIllegalArgumentException_initWithNSString_(name);
  return nil;
}

ComGoogleGsonStreamJsonToken *ComGoogleGsonStreamJsonToken_fromOrdinal(NSUInteger ordinal) {
  ComGoogleGsonStreamJsonToken_initialize();
  if (ordinal >= 10) {
    return nil;
  }
  return ComGoogleGsonStreamJsonToken_values_[ordinal];
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ComGoogleGsonStreamJsonToken)
