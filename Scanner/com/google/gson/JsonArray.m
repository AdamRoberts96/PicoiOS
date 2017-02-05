//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:gson-2.6.2-sources.jar!com/google/gson/JsonArray.java
//

#include "J2ObjC_source.h"
#include "com/google/gson/JsonArray.h"
#include "com/google/gson/JsonElement.h"
#include "com/google/gson/JsonNull.h"
#include "com/google/gson/JsonPrimitive.h"
#include "java/lang/Boolean.h"
#include "java/lang/Character.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Iterable.h"
#include "java/math/BigDecimal.h"
#include "java/math/BigInteger.h"
#include "java/util/ArrayList.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/Spliterator.h"
#include "java/util/function/Consumer.h"

@interface ComGoogleGsonJsonArray () {
 @public
  id<JavaUtilList> elements_;
}

@end

J2OBJC_FIELD_SETTER(ComGoogleGsonJsonArray, elements_, id<JavaUtilList>)

@implementation ComGoogleGsonJsonArray

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ComGoogleGsonJsonArray_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (ComGoogleGsonJsonArray *)deepCopy {
  ComGoogleGsonJsonArray *result = create_ComGoogleGsonJsonArray_init();
  for (ComGoogleGsonJsonElement * __strong element in nil_chk(elements_)) {
    [result addWithComGoogleGsonJsonElement:[((ComGoogleGsonJsonElement *) nil_chk(element)) deepCopy]];
  }
  return result;
}

- (void)addWithJavaLangBoolean:(JavaLangBoolean *)bool_ {
  [((id<JavaUtilList>) nil_chk(elements_)) addWithId:bool_ == nil ? JreLoadStatic(ComGoogleGsonJsonNull, INSTANCE) : (id) create_ComGoogleGsonJsonPrimitive_initWithJavaLangBoolean_(bool_)];
}

- (void)addWithJavaLangCharacter:(JavaLangCharacter *)character {
  [((id<JavaUtilList>) nil_chk(elements_)) addWithId:character == nil ? JreLoadStatic(ComGoogleGsonJsonNull, INSTANCE) : (id) create_ComGoogleGsonJsonPrimitive_initWithJavaLangCharacter_(character)];
}

- (void)addWithNSNumber:(NSNumber *)number {
  [((id<JavaUtilList>) nil_chk(elements_)) addWithId:number == nil ? JreLoadStatic(ComGoogleGsonJsonNull, INSTANCE) : (id) create_ComGoogleGsonJsonPrimitive_initWithNSNumber_(number)];
}

- (void)addWithNSString:(NSString *)string {
  [((id<JavaUtilList>) nil_chk(elements_)) addWithId:string == nil ? JreLoadStatic(ComGoogleGsonJsonNull, INSTANCE) : (id) create_ComGoogleGsonJsonPrimitive_initWithNSString_(string)];
}

- (void)addWithComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)element {
  if (element == nil) {
    element = JreLoadStatic(ComGoogleGsonJsonNull, INSTANCE);
  }
  [((id<JavaUtilList>) nil_chk(elements_)) addWithId:element];
}

- (void)addAllWithComGoogleGsonJsonArray:(ComGoogleGsonJsonArray *)array {
  [((id<JavaUtilList>) nil_chk(elements_)) addAllWithJavaUtilCollection:((ComGoogleGsonJsonArray *) nil_chk(array))->elements_];
}

- (ComGoogleGsonJsonElement *)setWithInt:(jint)index
            withComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)element {
  return [((id<JavaUtilList>) nil_chk(elements_)) setWithInt:index withId:element];
}

- (jboolean)removeWithComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)element {
  return [((id<JavaUtilList>) nil_chk(elements_)) removeWithId:element];
}

- (ComGoogleGsonJsonElement *)removeWithInt:(jint)index {
  return [((id<JavaUtilList>) nil_chk(elements_)) removeWithInt:index];
}

- (jboolean)containsWithComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)element {
  return [((id<JavaUtilList>) nil_chk(elements_)) containsWithId:element];
}

- (jint)size {
  return [((id<JavaUtilList>) nil_chk(elements_)) size];
}

- (id<JavaUtilIterator>)iterator {
  return [((id<JavaUtilList>) nil_chk(elements_)) iterator];
}

- (ComGoogleGsonJsonElement *)getWithInt:(jint)i {
  return [((id<JavaUtilList>) nil_chk(elements_)) getWithInt:i];
}

- (NSNumber *)getAsNumber {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsNumber];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (NSString *)getAsString {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsString];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (jdouble)getAsDouble {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsDouble];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (JavaMathBigDecimal *)getAsBigDecimal {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsBigDecimal];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (JavaMathBigInteger *)getAsBigInteger {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsBigInteger];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (jfloat)getAsFloat {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsFloat];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (jlong)getAsLong {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsLong];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (jint)getAsInt {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsInt];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (jbyte)getAsByte {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsByte];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (jchar)getAsCharacter {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsCharacter];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (jshort)getAsShort {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsShort];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (jboolean)getAsBoolean {
  if ([((id<JavaUtilList>) nil_chk(elements_)) size] == 1) {
    return [((ComGoogleGsonJsonElement *) nil_chk([elements_ getWithInt:0])) getAsBoolean];
  }
  @throw create_JavaLangIllegalStateException_init();
}

- (jboolean)isEqual:(id)o {
  return (o == self) || ([o isKindOfClass:[ComGoogleGsonJsonArray class]] && [((id<JavaUtilList>) nil_chk(((ComGoogleGsonJsonArray *) nil_chk(((ComGoogleGsonJsonArray *) cast_chk(o, [ComGoogleGsonJsonArray class]))))->elements_)) isEqual:elements_]);
}

- (NSUInteger)hash {
  return ((jint) [((id<JavaUtilList>) nil_chk(elements_)) hash]);
}

- (void)forEachWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)arg0 {
  JavaLangIterable_forEachWithJavaUtilFunctionConsumer_(self, arg0);
}

- (id<JavaUtilSpliterator>)spliterator {
  return JavaLangIterable_spliterator(self);
}

- (NSUInteger)countByEnumeratingWithState:(NSFastEnumerationState *)state objects:(__unsafe_unretained id *)stackbuf count:(NSUInteger)len {
  return JreDefaultFastEnumeration(self, state, stackbuf, len);
}

- (void)dealloc {
  RELEASE_(elements_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LComGoogleGsonJsonArray;", 0x0, -1, -1, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 0, 1, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 0, 2, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 0, 3, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 0, 4, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 0, 5, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 6, 7, -1, -1, -1, -1 },
    { NULL, "LComGoogleGsonJsonElement;", 0x1, 8, 9, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, 10, 5, -1, -1, -1, -1 },
    { NULL, "LComGoogleGsonJsonElement;", 0x1, 10, 11, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, 12, 5, -1, -1, -1, -1 },
    { NULL, "I", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LJavaUtilIterator;", 0x1, -1, -1, -1, 13, -1, -1 },
    { NULL, "LComGoogleGsonJsonElement;", 0x1, 14, 11, -1, -1, -1, -1 },
    { NULL, "LNSNumber;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LNSString;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "D", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LJavaMathBigDecimal;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LJavaMathBigInteger;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "F", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "J", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "I", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "B", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "C", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "S", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, 15, 16, -1, -1, -1, -1 },
    { NULL, "I", 0x1, 17, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(deepCopy);
  methods[2].selector = @selector(addWithJavaLangBoolean:);
  methods[3].selector = @selector(addWithJavaLangCharacter:);
  methods[4].selector = @selector(addWithNSNumber:);
  methods[5].selector = @selector(addWithNSString:);
  methods[6].selector = @selector(addWithComGoogleGsonJsonElement:);
  methods[7].selector = @selector(addAllWithComGoogleGsonJsonArray:);
  methods[8].selector = @selector(setWithInt:withComGoogleGsonJsonElement:);
  methods[9].selector = @selector(removeWithComGoogleGsonJsonElement:);
  methods[10].selector = @selector(removeWithInt:);
  methods[11].selector = @selector(containsWithComGoogleGsonJsonElement:);
  methods[12].selector = @selector(size);
  methods[13].selector = @selector(iterator);
  methods[14].selector = @selector(getWithInt:);
  methods[15].selector = @selector(getAsNumber);
  methods[16].selector = @selector(getAsString);
  methods[17].selector = @selector(getAsDouble);
  methods[18].selector = @selector(getAsBigDecimal);
  methods[19].selector = @selector(getAsBigInteger);
  methods[20].selector = @selector(getAsFloat);
  methods[21].selector = @selector(getAsLong);
  methods[22].selector = @selector(getAsInt);
  methods[23].selector = @selector(getAsByte);
  methods[24].selector = @selector(getAsCharacter);
  methods[25].selector = @selector(getAsShort);
  methods[26].selector = @selector(getAsBoolean);
  methods[27].selector = @selector(isEqual:);
  methods[28].selector = @selector(hash);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "elements_", "LJavaUtilList;", .constantValue.asLong = 0, 0x12, -1, -1, 18, -1 },
  };
  static const void *ptrTable[] = { "add", "LJavaLangBoolean;", "LJavaLangCharacter;", "LNSNumber;", "LNSString;", "LComGoogleGsonJsonElement;", "addAll", "LComGoogleGsonJsonArray;", "set", "ILComGoogleGsonJsonElement;", "remove", "I", "contains", "()Ljava/util/Iterator<Lcom/google/gson/JsonElement;>;", "get", "equals", "LNSObject;", "hashCode", "Ljava/util/List<Lcom/google/gson/JsonElement;>;", "Lcom/google/gson/JsonElement;Ljava/lang/Iterable<Lcom/google/gson/JsonElement;>;" };
  static const J2ObjcClassInfo _ComGoogleGsonJsonArray = { "JsonArray", "com.google.gson", ptrTable, methods, fields, 7, 0x11, 29, 1, -1, -1, -1, 19, -1 };
  return &_ComGoogleGsonJsonArray;
}

@end

void ComGoogleGsonJsonArray_init(ComGoogleGsonJsonArray *self) {
  ComGoogleGsonJsonElement_init(self);
  JreStrongAssignAndConsume(&self->elements_, new_JavaUtilArrayList_init());
}

ComGoogleGsonJsonArray *new_ComGoogleGsonJsonArray_init() {
  J2OBJC_NEW_IMPL(ComGoogleGsonJsonArray, init)
}

ComGoogleGsonJsonArray *create_ComGoogleGsonJsonArray_init() {
  J2OBJC_CREATE_IMPL(ComGoogleGsonJsonArray, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ComGoogleGsonJsonArray)
