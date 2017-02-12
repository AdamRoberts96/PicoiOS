//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/adamroberts/Documents/Workspace6/JRendezvous/src/uk/ac/cam/cl/rendezvous/RendezvousClient.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "IOSPrimitiveArray.h"
#include "IOUtils.h"
#include "J2ObjC_source.h"
#include "RendezvousChannel.h"
#include "RendezvousClient.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Integer.h"
#include "java/lang/RuntimeException.h"
#include "java/net/HttpURLConnection.h"
#include "java/net/MalformedURLException.h"
#include "java/net/URL.h"
#include "java/net/URLConnection.h"

@interface UkAcCamClRendezvousRendezvousClient () {
 @public
  JavaNetURL *root_;
}

@end

J2OBJC_FIELD_SETTER(UkAcCamClRendezvousRendezvousClient, root_, JavaNetURL *)

inline NSString *UkAcCamClRendezvousRendezvousClient_get_NEW_PATH();
static NSString *UkAcCamClRendezvousRendezvousClient_NEW_PATH = @"new";
J2OBJC_STATIC_FIELD_OBJ_FINAL(UkAcCamClRendezvousRendezvousClient, NEW_PATH, NSString *)

inline NSString *UkAcCamClRendezvousRendezvousClient_get_CHANNEL_PATH();
static NSString *UkAcCamClRendezvousRendezvousClient_CHANNEL_PATH = @"channel/%s";
J2OBJC_STATIC_FIELD_OBJ_FINAL(UkAcCamClRendezvousRendezvousClient, CHANNEL_PATH, NSString *)

#line 1 "/Users/adamroberts/Documents/Workspace6/JRendezvous/src/uk/ac/cam/cl/rendezvous/RendezvousClient.java"


#line 17
@implementation UkAcCamClRendezvousRendezvousClient


#line 24
- (instancetype)initWithJavaNetURL:(JavaNetURL *)root {
  UkAcCamClRendezvousRendezvousClient_initWithJavaNetURL_(self, root);
  return self;
}


#line 39
- (instancetype)initWithNSString:(NSString *)root {
  UkAcCamClRendezvousRendezvousClient_initWithNSString_(self, root);
  return self;
}


#line 43
- (UkAcCamClRendezvousRendezvousChannel *)newChannel {
  JavaNetURL *newUrl;
  @try {
    newUrl = new_JavaNetURL_initWithJavaNetURL_withNSString_(root_, UkAcCamClRendezvousRendezvousClient_NEW_PATH);
  }
  @catch (
#line 47
  JavaNetMalformedURLException *e) {
    @throw new_JavaLangRuntimeException_initWithNSString_withNSException_(
#line 49
    @"Invalid new channel path", e);
  }
  JavaNetHttpURLConnection *connection =
#line 52
  (JavaNetHttpURLConnection *) cast_chk([((JavaNetURL *) nil_chk(newUrl)) openConnection], [JavaNetHttpURLConnection class]);
  
#line 55
  jint code = [((JavaNetHttpURLConnection *) nil_chk(connection)) getResponseCode];
  
#line 57
  if (code == 200) {
    IOSByteArray *b = OrgApacheCommonsIoIOUtils_toByteArrayWithJavaIoInputStream_withInt_(
#line 59
    [connection getInputStream],
#line 60
    [connection getContentLength]);
    NSString *name = [NSString stringWithBytes:b];
    JavaNetURL *rendezvousUrl = new_JavaNetURL_initWithJavaNetURL_withNSString_(root_, NSString_formatWithNSString_withNSObjectArray_(UkAcCamClRendezvousRendezvousClient_CHANNEL_PATH, [IOSObjectArray newArrayWithObjects:(id[]){ name } count:1 type:NSObject_class_()]));
    return new_UkAcCamClRendezvousRendezvousChannel_initWithJavaNetURL_(rendezvousUrl);
  }
  else {
    
#line 65
    @throw new_JavaIoIOException_initWithNSString_(NSString_formatWithNSString_withNSObjectArray_(
#line 66
    @"New channel request failed: %d %s", [IOSObjectArray newArrayWithObjects:(id[]){ JavaLangInteger_valueOfWithInt_(
#line 67
    code),
#line 68
    [connection getResponseMessage] } count:2 type:NSObject_class_()]));
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, 0, -1, -1, -1, -1 },
    { NULL, NULL, 0x1, -1, 1, 2, -1, -1, -1 },
    { NULL, "LUkAcCamClRendezvousRendezvousChannel;", 0x1, -1, -1, 3, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithJavaNetURL:);
  methods[1].selector = @selector(initWithNSString:);
  methods[2].selector = @selector(newChannel);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "NEW_PATH", "LNSString;", .constantValue.asLong = 0, 0x1a, -1, 4, -1, -1 },
    { "CHANNEL_PATH", "LNSString;", .constantValue.asLong = 0, 0x1a, -1, 5, -1, -1 },
    { "root_", "LJavaNetURL;", .constantValue.asLong = 0, 0x12, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "LJavaNetURL;", "LNSString;", "LJavaNetMalformedURLException;", "LJavaIoIOException;", &UkAcCamClRendezvousRendezvousClient_NEW_PATH, &UkAcCamClRendezvousRendezvousClient_CHANNEL_PATH };
  static const J2ObjcClassInfo _UkAcCamClRendezvousRendezvousClient = { "RendezvousClient", "uk.ac.cam.cl.rendezvous", ptrTable, methods, fields, 7, 0x1, 3, 3, -1, -1, -1, -1, -1 };
  return &_UkAcCamClRendezvousRendezvousClient;
}

@end


#line 24
void UkAcCamClRendezvousRendezvousClient_initWithJavaNetURL_(UkAcCamClRendezvousRendezvousClient *self, JavaNetURL *root) {
  NSObject_init(self);
  NSString *r = [((JavaNetURL *) nil_chk(root)) description];
  if ([((NSString *) nil_chk(r)) hasSuffix:@"/"]) {
    @try {
      self->root_ = new_JavaNetURL_initWithNSString_([r substring:0 endIndex:((jint) [r length]) - 1]);
    }
    @catch (
#line 30
    JavaNetMalformedURLException *e) {
      @throw new_JavaLangRuntimeException_initWithNSString_withNSException_(
#line 32
      @"Failed to remove trailing slash from root URL", e);
    }
  }
  else {
    
#line 35
    self->root_ = root;
  }
}


#line 24
UkAcCamClRendezvousRendezvousClient *new_UkAcCamClRendezvousRendezvousClient_initWithJavaNetURL_(JavaNetURL *root) {
  J2OBJC_NEW_IMPL(UkAcCamClRendezvousRendezvousClient, initWithJavaNetURL_, root)
}


#line 24
UkAcCamClRendezvousRendezvousClient *create_UkAcCamClRendezvousRendezvousClient_initWithJavaNetURL_(JavaNetURL *root) {
  J2OBJC_CREATE_IMPL(UkAcCamClRendezvousRendezvousClient, initWithJavaNetURL_, root)
}


#line 39
void UkAcCamClRendezvousRendezvousClient_initWithNSString_(UkAcCamClRendezvousRendezvousClient *self, NSString *root) {
  UkAcCamClRendezvousRendezvousClient_initWithJavaNetURL_(self, new_JavaNetURL_initWithNSString_(root));
}


#line 39
UkAcCamClRendezvousRendezvousClient *new_UkAcCamClRendezvousRendezvousClient_initWithNSString_(NSString *root) {
  J2OBJC_NEW_IMPL(UkAcCamClRendezvousRendezvousClient, initWithNSString_, root)
}


#line 39
UkAcCamClRendezvousRendezvousClient *create_UkAcCamClRendezvousRendezvousClient_initWithNSString_(NSString *root) {
  J2OBJC_CREATE_IMPL(UkAcCamClRendezvousRendezvousClient, initWithNSString_, root)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(UkAcCamClRendezvousRendezvousClient)
