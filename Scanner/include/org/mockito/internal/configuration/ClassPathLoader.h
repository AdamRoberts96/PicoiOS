//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/configuration/ClassPathLoader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationClassPathLoader")
#ifdef RESTRICT_OrgMockitoInternalConfigurationClassPathLoader
#define INCLUDE_ALL_OrgMockitoInternalConfigurationClassPathLoader 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationClassPathLoader 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationClassPathLoader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalConfigurationClassPathLoader_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationClassPathLoader || defined(INCLUDE_OrgMockitoInternalConfigurationClassPathLoader))
#define OrgMockitoInternalConfigurationClassPathLoader_

@class IOSClass;
@class JavaIoReader;
@protocol JavaUtilList;
@protocol OrgMockitoConfigurationIMockitoConfiguration;
@protocol OrgMockitoPluginsMockMaker;
@protocol OrgMockitoPluginsStackTraceCleanerProvider;

/*!
 @brief Loads configuration or extension points available in the classpath.
 <p>
 <ul>
 <li>
 Can load the mockito configuration. The user who want to provide his own mockito configuration
 should write the class <code>org.mockito.configuration.MockitoConfiguration</code> that implements
 <code>IMockitoConfiguration</code>. For example :
 <pre class="code"><code class="java">
 package org.mockito.configuration;
 //...
 public class MockitoConfiguration implements IMockitoConfiguration {
 boolean enableClassCache() { return false; }
 // ...
 }
 
@endcode
 </li>
 <li>
 Can load available mockito extensions. Currently Mockito only have one extension point the
 <code>MockMaker</code>. This extension point allows a user to provide his own bytecode engine to build mocks.
 <br>Suppose you wrote an extension to create mocks with some <em>Awesome</em> library, in order to tell
 Mockito to use it you need to put in your classpath
 <ol style="list-style-type: lower-alpha">
 <li>The implementation itself, for example <code>org.awesome.mockito.AwesomeMockMaker</code>.</li>
 <li>A file named <code>org.mockito.plugins.MockMaker</code> in a folder named
 <code>mockito-extensions</code>, the content of this file need to have <strong>one</strong> line with
 the qualified name <code>org.awesome.mockito.AwesomeMockMaker</code>.</li>
 </ol>
 </li>
 </ul>
 </p>
 */
@interface OrgMockitoInternalConfigurationClassPathLoader : NSObject

+ (NSString *)MOCKITO_CONFIGURATION_CLASS_NAME;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Returns the implementation of the mock maker available for the current runtime.
 <p>Returns <code>IosMockMaker</code> if no <code>MockMaker</code> extension exists
 or is visible in the current classpath.</p>
 */
+ (id<OrgMockitoPluginsMockMaker>)getMockMaker;

+ (id<OrgMockitoPluginsStackTraceCleanerProvider>)getStackTraceCleanerProvider;

/*!
 @return configuration loaded from classpath or null
 */
- (id<OrgMockitoConfigurationIMockitoConfiguration>)loadConfiguration;

#pragma mark Package-Private

/*!
 @brief Scans the classpath to find a mock maker plugin if one is available,
 allowing mockito to run on alternative platforms like Android.
 */
+ (id<OrgMockitoPluginsMockMaker>)findPlatformMockMaker;

+ (id)findPluginImplementationWithIOSClass:(IOSClass *)pluginType
                                    withId:(id)defaultPlugin;

/*!
 @brief Equivalent to <code>java.util.ServiceLoader.load</code> but without requiring
 Java 6 / Android 2.3 (Gingerbread).
 */
+ (id<JavaUtilList>)loadImplementationsWithIOSClass:(IOSClass *)service;

+ (id<JavaUtilList>)readerToLinesWithJavaIoReader:(JavaIoReader *)reader;

+ (NSString *)stripCommentAndWhitespaceWithNSString:(NSString *)line;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalConfigurationClassPathLoader)

inline NSString *OrgMockitoInternalConfigurationClassPathLoader_get_MOCKITO_CONFIGURATION_CLASS_NAME();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgMockitoInternalConfigurationClassPathLoader_MOCKITO_CONFIGURATION_CLASS_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalConfigurationClassPathLoader, MOCKITO_CONFIGURATION_CLASS_NAME, NSString *)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationClassPathLoader_init(OrgMockitoInternalConfigurationClassPathLoader *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationClassPathLoader *new_OrgMockitoInternalConfigurationClassPathLoader_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationClassPathLoader *create_OrgMockitoInternalConfigurationClassPathLoader_init();

FOUNDATION_EXPORT id<OrgMockitoPluginsMockMaker> OrgMockitoInternalConfigurationClassPathLoader_getMockMaker();

FOUNDATION_EXPORT id<OrgMockitoPluginsStackTraceCleanerProvider> OrgMockitoInternalConfigurationClassPathLoader_getStackTraceCleanerProvider();

FOUNDATION_EXPORT id<OrgMockitoPluginsMockMaker> OrgMockitoInternalConfigurationClassPathLoader_findPlatformMockMaker();

FOUNDATION_EXPORT id OrgMockitoInternalConfigurationClassPathLoader_findPluginImplementationWithIOSClass_withId_(IOSClass *pluginType, id defaultPlugin);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalConfigurationClassPathLoader_loadImplementationsWithIOSClass_(IOSClass *service);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalConfigurationClassPathLoader_readerToLinesWithJavaIoReader_(JavaIoReader *reader);

FOUNDATION_EXPORT NSString *OrgMockitoInternalConfigurationClassPathLoader_stripCommentAndWhitespaceWithNSString_(NSString *line);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationClassPathLoader)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationClassPathLoader")
