//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/adamroberts/Documents/Workspace6/JRendezvous/src/uk/ac/cam/cl/rendezvous/RendezvousChannel.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "RendezvousChannel.h"
#include "RendezvousInputStream.h"
#include "RendezvousOutputStream.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/lang/Integer.h"
#include "java/net/HttpURLConnection.h"
#include "java/net/URL.h"
#include "java/net/URLConnection.h"

@interface UkAcCamClRendezvousRendezvousChannel () {
 @public
  JavaNetURL *url_;
  volatile_jboolean isOpen_;
  UkAcCamClRendezvousRendezvousInputStream *inputStream_;
  UkAcCamClRendezvousRendezvousOutputStream *outputStream_;
  jint timeout_;
}

@end

J2OBJC_FIELD_SETTER(UkAcCamClRendezvousRendezvousChannel, url_, JavaNetURL *)
J2OBJC_FIELD_SETTER(UkAcCamClRendezvousRendezvousChannel, inputStream_, UkAcCamClRendezvousRendezvousInputStream *)
J2OBJC_FIELD_SETTER(UkAcCamClRendezvousRendezvousChannel, outputStream_, UkAcCamClRendezvousRendezvousOutputStream *)


#line 13
@implementation UkAcCamClRendezvousRendezvousChannel


#line 23
- (instancetype)initWithJavaNetURL:(JavaNetURL *)url {
  UkAcCamClRendezvousRendezvousChannel_initWithJavaNetURL_(self, url);
  return self;
}


#line 27
- (instancetype)initWithJavaNetURL:(JavaNetURL *)url
                           withInt:(jint)timeout {
  UkAcCamClRendezvousRendezvousChannel_initWithJavaNetURL_withInt_(self, url, timeout);
  return self;
}

- (JavaNetURL *)getUrl {
  return url_;
}

- (void)setTimeoutWithInt:(jint)ms {
  timeout_ = ms;
}

- (JavaIoInputStream *)getInputStream {
  @synchronized(self) {
    
#line 42
    if (JreLoadVolatileBoolean(&isOpen_) && inputStream_ == nil) {
      inputStream_ = new_UkAcCamClRendezvousRendezvousInputStream_initWithUkAcCamClRendezvousRendezvousChannel_(self);
    }
    return inputStream_;
  }
}


#line 48
- (JavaIoOutputStream *)getOutputStream {
  @synchronized(self) {
    
#line 49
    if (JreLoadVolatileBoolean(&isOpen_) && outputStream_ == nil) {
      outputStream_ = new_UkAcCamClRendezvousRendezvousOutputStream_initWithUkAcCamClRendezvousRendezvousChannel_(self);
    }
    return outputStream_;
  }
}


#line 55
- (void)close {
  JavaNetHttpURLConnection *connection = (JavaNetHttpURLConnection *) cast_chk([((JavaNetURL *) nil_chk(url_)) openConnection], [JavaNetHttpURLConnection class]);
  if (timeout_ != -1) {
    [((JavaNetHttpURLConnection *) nil_chk(connection)) setReadTimeoutWithInt:timeout_];
  }
  [((JavaNetHttpURLConnection *) nil_chk(connection)) setRequestMethodWithNSString:@"DELETE"];
  
#line 63
  jint responseCode = [connection getResponseCode];
  
#line 65
  if (responseCode == JavaNetHttpURLConnection_HTTP_OK) {
    JreAssignVolatileBoolean(&isOpen_, false);
    if (outputStream_ != nil) {
      [outputStream_ close];
      outputStream_ = nil;
    }
    else
#line 70
    if (inputStream_ != nil) {
      [inputStream_ close];
      inputStream_ = nil;
    }
  }
  else
#line 74
  if (responseCode == JavaNetHttpURLConnection_HTTP_NOT_FOUND) {
    @throw new_JavaIoIOException_initWithNSString_(JreStrcat("$@", @"no such channel: ", url_));
  }
  else {
    
#line 77
    @throw new_JavaIoIOException_initWithNSString_(NSString_java_formatWithNSString_withNSObjectArray_(
#line 78
    @"inavlid HTTP response code: %d %s", [IOSObjectArray newArrayWithObjects:(id[]){ JavaLangInteger_valueOfWithInt_(
#line 79
    responseCode),
#line 80
    [connection getResponseMessage] } count:2 type:NSObject_class_()]));
  }
}


#line 84
- (JavaNetHttpURLConnection *)attemptRead {
  JavaNetHttpURLConnection *connection = (JavaNetHttpURLConnection *) cast_chk([((JavaNetURL *) nil_chk(url_)) openConnection], [JavaNetHttpURLConnection class]);
  if (timeout_ != -1) {
    [((JavaNetHttpURLConnection *) nil_chk(NSString_java_formatWithNSString_withNSObjectArray_  }
  
#line 91
  jint responseCode = [((JavaNetHttpURLConnection *) nil_chk(connection)) getResponseCode];
  
#line 93
  if (responseCode == JavaNetHttpURLConnection_HTTP_OK) {
    return connection;
  }
  else
#line 95
  if (responseCode == JavaNetHttpURLConnection_HTTP_NOT_FOUND) {
    @throw new_JavaIoIOException_initWithNSString_(JreStrcat("$@", @"no such channel: ", url_));
  }
  else {
    
#line 98
    @throw new_JavaIoIOException_initWithNSString_(NSString_java_formatWithNSString_withNSObjectArray_(
#line 99
    @"inavlid HTTP response code: %d %s", [IOSObjectArray newArrayWithObjects:(id[]){ JavaLangInteger_valueOfWithInt_(
#line 100
    responseCode),
#line 101
    [connection getResponseMessage] } count:2 type:NSObject_class_()]));
  }
}


#line 105
- (JavaNetHttpURLConnection *)attemptWriteWithByteArray:(IOSByteArray *)bytes {
  
#line 107
  JavaNetHttpURLConnection *connection = (JavaNetHttpURLConnection *) cast_chk([((JavaNetURL *) nil_chk(url_)) openConnection], [JavaNetHttpURLConnection class]);
  if (timeout_ != -1) {
    [((JavaNetHttpURLConnection *) nil_chk(connection)) setReadTimeoutWithInt:timeout_];
  }
  
#line 112
  [((JavaNetHttpURLConnection *) nil_chk(connection)) setRequestMethodWithNSString:@"POST"];
  [connection setRequestPropertyWithNSString:@"Content-Type" withNSString:@"application/octet-stream"];
  [connection setRequestPropertyWithNSString:@"Content-Length" withNSString:JavaLangInteger_toStringWithInt_(((IOSByteArray *) nil_chk(bytes))->size_)];
  
#line 116
  [connection setDoOutputWithBoolean:true];
  JavaIoOutputStream *os = nil;
  @try {
    os = [connection getOutputStream];
    [((JavaIoOutputStream *) nil_chk(os)) writeWithByteArray:bytes];
    [os flush];
  }
  @finally {
    
#line 123
    if (os != nil) {
      [os close];
    }
  }
  
#line 129
  jint responseCode = [connection getResponseCode];
  
#line 131
  if (responseCode == JavaNetHttpURLConnection_HTTP_OK) {
    return connection;
  }
  else
#line 133
  if (responseCode == JavaNetHttpURLConnection_HTTP_NOT_FOUND) {
    @throw new_JavaIoIOException_initWithNSString_(JreStrcat("$@", @"no such channel: ", url_));
  }
  else {
    
#line 136
    @throw new_JavaIoIOException_initWithNSString_(NSString_formatWithNSString_withNSObjectArray_(
#line 137
    @"inavlid HTTP response code: %d %s", [IOSObjectArray newArrayWithObjects:(id[]){ JavaLangInteger_valueOfWithInt_(
#line 138
    responseCode),
#line 139
    [connection getResponseMessage] } count:2 type:NSObject_class_()]));
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, 0, -1, -1, -1, -1 },
    { NULL, NULL, 0x1, -1, 1, -1, -1, -1, -1 },
    { NULL, "LJavaNetURL;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 2, 3, -1, -1, -1, -1 },
    { NULL, "LJavaIoInputStream;", 0x21, -1, -1, -1, -1, -1, -1 },
    { NULL, "LJavaIoOutputStream;", 0x21, -1, -1, -1, -1, -1, -1 },
    { NULL, "V", 0x1, -1, -1, 4, -1, -1, -1 },
    { NULL, "LJavaNetHttpURLConnection;", 0x0, -1, -1, 4, -1, -1, -1 },
    { NULL, "LJavaNetHttpURLConnection;", 0x0, 5, 6, 4, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithJavaNetURL:);
  methods[1].selector = @selector(initWithJavaNetURL:withInt:);
  methods[2].selector = @selector(getUrl);
  methods[3].selector = @selector(setTimeoutWithInt:);
  methods[4].selector = @selector(getInputStream);
  methods[5].selector = @selector(getOutputStream);
  methods[6].selector = @selector(close);
  methods[7].selector = @selector(attemptRead);
  methods[8].selector = @selector(attemptWriteWithByteArray:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "url_", "LJavaNetURL;", .constantValue.asLong = 0, 0x12, -1, -1, -1, -1 },
    { "isOpen_", "Z", .constantValue.asLong = 0, 0x42, -1, -1, -1, -1 },
    { "inputStream_", "LUkAcCamClRendezvousRendezvousInputStream;", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
    { "outputStream_", "LUkAcCamClRendezvousRendezvousOutputStream;", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
    { "timeout_", "I", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "LJavaNetURL;", "LJavaNetURL;I", "setTimeout", "I", "LJavaIoIOException;", "attemptWrite", "[B" };
  static const J2ObjcClassInfo _UkAcCamClRendezvousRendezvousChannel = { "RendezvousChannel", "uk.ac.cam.cl.rendezvous", ptrTable, methods, fields, 7, 0x1, 9, 5, -1, -1, -1, -1, -1 };
  return &_UkAcCamClRendezvousRendezvousChannel;
}

@end


#line 23
void UkAcCamClRendezvousRendezvousChannel_initWithJavaNetURL_(UkAcCamClRendezvousRendezvousChannel *self, JavaNetURL *url) {
  NSObject_init(self);
  JreAssignVolatileBoolean(&self->isOpen_,
#line 16
  true);
  self->inputStream_ =
#line 18
  nil;
  self->outputStream_ = nil;
  self->timeout_ =
#line 21
  10000;
  
#line 24
  self->url_ = url;
}


#line 23
UkAcCamClRendezvousRendezvousChannel *new_UkAcCamClRendezvousRendezvousChannel_initWithJavaNetURL_(JavaNetURL *url) {
  J2OBJC_NEW_IMPL(UkAcCamClRendezvousRendezvousChannel, initWithJavaNetURL_, url)
}


#line 23
UkAcCamClRendezvousRendezvousChannel *create_UkAcCamClRendezvousRendezvousChannel_initWithJavaNetURL_(JavaNetURL *url) {
  J2OBJC_CREATE_IMPL(UkAcCamClRendezvousRendezvousChannel, initWithJavaNetURL_, url)
}

void UkAcCamClRendezvousRendezvousChannel_initWithJavaNetURL_withInt_(UkAcCamClRendezvousRendezvousChannel *self, JavaNetURL *url, jint timeout) {
  UkAcCamClRendezvousRendezvousChannel_initWithJavaNetURL_(self, url);
  [self setTimeoutWithInt:timeout];
}


#line 27
UkAcCamClRendezvousRendezvousChannel *new_UkAcCamClRendezvousRendezvousChannel_initWithJavaNetURL_withInt_(JavaNetURL *url, jint timeout) {
  J2OBJC_NEW_IMPL(UkAcCamClRendezvousRendezvousChannel, initWithJavaNetURL_withInt_, url, timeout)
}


#line 27
UkAcCamClRendezvousRendezvousChannel *create_UkAcCamClRendezvousRendezvousChannel_initWithJavaNetURL_withInt_(JavaNetURL *url, jint timeout) {
  J2OBJC_CREATE_IMPL(UkAcCamClRendezvousRendezvousChannel, initWithJavaNetURL_withInt_, url, timeout)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(UkAcCamClRendezvousRendezvousChannel)