//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:gson-2.6.2-sources.jar!com/google/gson/internal/bind/SqlDateTypeAdapter.java
//

#include "IOSClass.h"
#include "J2ObjC_source.h"
#include "com/google/gson/Gson.h"
#include "com/google/gson/JsonSyntaxException.h"
#include "com/google/gson/TypeAdapter.h"
#include "com/google/gson/TypeAdapterFactory.h"
#include "com/google/gson/internal/bind/SqlDateTypeAdapter.h"
#include "com/google/gson/reflect/TypeToken.h"
#include "com/google/gson/stream/JsonReader.h"
#include "com/google/gson/stream/JsonToken.h"
#include "com/google/gson/stream/JsonWriter.h"
#include "java/sql/Date.h"
#include "java/text/DateFormat.h"
#include "java/text/ParseException.h"
#include "java/text/SimpleDateFormat.h"
#include "java/util/Date.h"

#pragma clang diagnostic ignored "-Wincomplete-implementation"

@interface ComGoogleGsonInternalBindSqlDateTypeAdapter () {
 @public
  JavaTextDateFormat *format_;
}

@end

J2OBJC_FIELD_SETTER(ComGoogleGsonInternalBindSqlDateTypeAdapter, format_, JavaTextDateFormat *)

@interface ComGoogleGsonInternalBindSqlDateTypeAdapter_1 : NSObject < ComGoogleGsonTypeAdapterFactory >

- (instancetype)init;

- (ComGoogleGsonTypeAdapter *)createWithComGoogleGsonGson:(ComGoogleGsonGson *)gson
                        withComGoogleGsonReflectTypeToken:(ComGoogleGsonReflectTypeToken *)typeToken;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleGsonInternalBindSqlDateTypeAdapter_1)

__attribute__((unused)) static void ComGoogleGsonInternalBindSqlDateTypeAdapter_1_init(ComGoogleGsonInternalBindSqlDateTypeAdapter_1 *self);

__attribute__((unused)) static ComGoogleGsonInternalBindSqlDateTypeAdapter_1 *new_ComGoogleGsonInternalBindSqlDateTypeAdapter_1_init() NS_RETURNS_RETAINED;

__attribute__((unused)) static ComGoogleGsonInternalBindSqlDateTypeAdapter_1 *create_ComGoogleGsonInternalBindSqlDateTypeAdapter_1_init();

J2OBJC_INITIALIZED_DEFN(ComGoogleGsonInternalBindSqlDateTypeAdapter)

id<ComGoogleGsonTypeAdapterFactory> ComGoogleGsonInternalBindSqlDateTypeAdapter_FACTORY;

@implementation ComGoogleGsonInternalBindSqlDateTypeAdapter

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ComGoogleGsonInternalBindSqlDateTypeAdapter_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (JavaSqlDate *)readWithComGoogleGsonStreamJsonReader:(ComGoogleGsonStreamJsonReader *)inArg {
  @synchronized(self) {
    if ([((ComGoogleGsonStreamJsonReader *) nil_chk(inArg)) peek] == JreLoadEnum(ComGoogleGsonStreamJsonToken, NULL)) {
      [inArg nextNull];
      return nil;
    }
    @try {
      jlong utilDate = [((JavaUtilDate *) nil_chk([((JavaTextDateFormat *) nil_chk(format_)) parseWithNSString:[inArg nextString]])) getTime];
      return create_JavaSqlDate_initWithLong_(utilDate);
    }
    @catch (JavaTextParseException *e) {
      @throw create_ComGoogleGsonJsonSyntaxException_initWithNSException_(e);
    }
  }
}

- (void)writeWithComGoogleGsonStreamJsonWriter:(ComGoogleGsonStreamJsonWriter *)outArg
                                        withId:(JavaSqlDate *)value {
  @synchronized(self) {
    [((ComGoogleGsonStreamJsonWriter *) nil_chk(outArg)) valueWithNSString:value == nil ? nil : [((JavaTextDateFormat *) nil_chk(format_)) formatWithJavaUtilDate:value]];
  }
}

- (void)dealloc {
  RELEASE_(format_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LJavaSqlDate;", 0x21, 0, 1, 2, -1, -1, -1 },
    { NULL, "V", 0x21, 3, 4, 2, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(readWithComGoogleGsonStreamJsonReader:);
  methods[2].selector = @selector(writeWithComGoogleGsonStreamJsonWriter:withId:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "FACTORY", "LComGoogleGsonTypeAdapterFactory;", .constantValue.asLong = 0, 0x19, -1, 5, -1, -1 },
    { "format_", "LJavaTextDateFormat;", .constantValue.asLong = 0, 0x12, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "read", "LComGoogleGsonStreamJsonReader;", "LJavaIoIOException;", "write", "LComGoogleGsonStreamJsonWriter;LJavaSqlDate;", &ComGoogleGsonInternalBindSqlDateTypeAdapter_FACTORY, "Lcom/google/gson/TypeAdapter<Ljava/sql/Date;>;" };
  static const J2ObjcClassInfo _ComGoogleGsonInternalBindSqlDateTypeAdapter = { "SqlDateTypeAdapter", "com.google.gson.internal.bind", ptrTable, methods, fields, 7, 0x11, 3, 2, -1, -1, -1, 6, -1 };
  return &_ComGoogleGsonInternalBindSqlDateTypeAdapter;
}

+ (void)initialize {
  if (self == [ComGoogleGsonInternalBindSqlDateTypeAdapter class]) {
    JreStrongAssignAndConsume(&ComGoogleGsonInternalBindSqlDateTypeAdapter_FACTORY, new_ComGoogleGsonInternalBindSqlDateTypeAdapter_1_init());
    J2OBJC_SET_INITIALIZED(ComGoogleGsonInternalBindSqlDateTypeAdapter)
  }
}

@end

void ComGoogleGsonInternalBindSqlDateTypeAdapter_init(ComGoogleGsonInternalBindSqlDateTypeAdapter *self) {
  ComGoogleGsonTypeAdapter_init(self);
  JreStrongAssignAndConsume(&self->format_, new_JavaTextSimpleDateFormat_initWithNSString_(@"MMM d, yyyy"));
}

ComGoogleGsonInternalBindSqlDateTypeAdapter *new_ComGoogleGsonInternalBindSqlDateTypeAdapter_init() {
  J2OBJC_NEW_IMPL(ComGoogleGsonInternalBindSqlDateTypeAdapter, init)
}

ComGoogleGsonInternalBindSqlDateTypeAdapter *create_ComGoogleGsonInternalBindSqlDateTypeAdapter_init() {
  J2OBJC_CREATE_IMPL(ComGoogleGsonInternalBindSqlDateTypeAdapter, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ComGoogleGsonInternalBindSqlDateTypeAdapter)

@implementation ComGoogleGsonInternalBindSqlDateTypeAdapter_1

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ComGoogleGsonInternalBindSqlDateTypeAdapter_1_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (ComGoogleGsonTypeAdapter *)createWithComGoogleGsonGson:(ComGoogleGsonGson *)gson
                        withComGoogleGsonReflectTypeToken:(ComGoogleGsonReflectTypeToken *)typeToken {
  return [((ComGoogleGsonReflectTypeToken *) nil_chk(typeToken)) getRawType] == JavaSqlDate_class_() ? create_ComGoogleGsonInternalBindSqlDateTypeAdapter_init() : nil;
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x0, -1, -1, -1, -1, -1, -1 },
    { NULL, "LComGoogleGsonTypeAdapter;", 0x1, 0, 1, -1, 2, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(createWithComGoogleGsonGson:withComGoogleGsonReflectTypeToken:);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "create", "LComGoogleGsonGson;LComGoogleGsonReflectTypeToken;", "<T:Ljava/lang/Object;>(Lcom/google/gson/Gson;Lcom/google/gson/reflect/TypeToken<TT;>;)Lcom/google/gson/TypeAdapter<TT;>;", "LComGoogleGsonInternalBindSqlDateTypeAdapter;" };
  static const J2ObjcClassInfo _ComGoogleGsonInternalBindSqlDateTypeAdapter_1 = { "", "com.google.gson.internal.bind", ptrTable, methods, NULL, 7, 0x8008, 2, 0, 3, -1, -1, -1, -1 };
  return &_ComGoogleGsonInternalBindSqlDateTypeAdapter_1;
}

@end

void ComGoogleGsonInternalBindSqlDateTypeAdapter_1_init(ComGoogleGsonInternalBindSqlDateTypeAdapter_1 *self) {
  NSObject_init(self);
}

ComGoogleGsonInternalBindSqlDateTypeAdapter_1 *new_ComGoogleGsonInternalBindSqlDateTypeAdapter_1_init() {
  J2OBJC_NEW_IMPL(ComGoogleGsonInternalBindSqlDateTypeAdapter_1, init)
}

ComGoogleGsonInternalBindSqlDateTypeAdapter_1 *create_ComGoogleGsonInternalBindSqlDateTypeAdapter_1_init() {
  J2OBJC_CREATE_IMPL(ComGoogleGsonInternalBindSqlDateTypeAdapter_1, init)
}
