//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/TimeZone.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilTimeZone")
#ifdef RESTRICT_JavaUtilTimeZone
#define INCLUDE_ALL_JavaUtilTimeZone 0
#else
#define INCLUDE_ALL_JavaUtilTimeZone 1
#endif
#undef RESTRICT_JavaUtilTimeZone

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilTimeZone_) && (INCLUDE_ALL_JavaUtilTimeZone || defined(INCLUDE_JavaUtilTimeZone))
#define JavaUtilTimeZone_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaUtilDate;
@class JavaUtilLocale;

/*!
 @brief <code>TimeZone</code> represents a time zone, primarily used for configuring a <code>Calendar</code> or
 <code>java.text.SimpleDateFormat</code> instance.
 <p>Most applications will use <code>getDefault</code> which returns a <code>TimeZone</code> based on
 the time zone where the program is running.
 <p>You can also get a specific <code>TimeZone</code> <code>by Olson ID</code>.
 <p>It is highly unlikely you'll ever want to use anything but the factory methods yourself.
 Let classes like <code>Calendar</code> and <code>java.text.SimpleDateFormat</code> do the date
 computations for you.
 <p>If you do need to do date computations manually, there are two common cases to take into
 account:
 <ul>
 <li>Somewhere like California, where daylight time is used.
 The <code>useDaylightTime</code> method will always return true, and <code>inDaylightTime</code>
 must be used to determine whether or not daylight time applies to a given <code>Date</code>.
 The <code>getRawOffset</code> method will return a raw offset of (in this case) -8 hours from UTC,
 which isn't usually very useful. More usefully, the <code>getOffset</code> methods return the
 actual offset from UTC <i>for a given point in time</i>; this is the raw offset plus (if the
 point in time is <code>in daylight time</code>) the applicable
 <code>DST savings</code> (usually, but not necessarily, 1 hour).
 <li>Somewhere like Japan, where daylight time is not used.
 The <code>useDaylightTime</code> and <code>inDaylightTime</code> methods both always return false,
 and the raw and actual offsets will always be the same.
 </ul>
 <p>Note the type returned by the factory methods <code>getDefault</code> and <code>getTimeZone</code> is
 implementation dependent. This may introduce serialization incompatibility issues between
 different implementations, or different versions of Android.
 - seealso: Calendar
 - seealso: GregorianCalendar
 - seealso: SimpleDateFormat
 */
@interface JavaUtilTimeZone : NSObject < JavaIoSerializable, NSCopying >

+ (jint)SHORT;

+ (jint)LONG;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Returns a new time zone with the same ID, raw offset, and daylight
 savings time rules as this time zone.
 */
- (id)java_clone;

/*!
 @brief Returns a string representation of an offset from UTC.
 <p>The format is "[GMT](+|-)HH[:]MM". The output is not localized.
 @param includeGmt true to include "GMT", false to exclude
 @param includeMinuteSeparator true to include the separator between hours and minutes, false
 to exclude.
 @param offsetMillis the offset from UTC
  used internally by SimpleDateFormat
 */
+ (NSString *)createGmtOffsetStringWithBoolean:(jboolean)includeGmt
                                   withBoolean:(jboolean)includeMinuteSeparator
                                       withInt:(jint)offsetMillis;

/*!
 @brief Returns the system's installed time zone IDs.
 Any of these IDs can be
 passed to <code>getTimeZone</code> to lookup the corresponding time zone
 instance.
 */
+ (IOSObjectArray *)getAvailableIDs;

/*!
 @brief Returns the IDs of the time zones whose offset from UTC is <code>offsetMillis</code>
 .
 Any of these IDs can be passed to <code>getTimeZone</code> to
 lookup the corresponding time zone instance.
 @return a possibly-empty array.
 */
+ (IOSObjectArray *)getAvailableIDsWithInt:(jint)offsetMillis;

/*!
 @brief Returns the user's preferred time zone.
 This may have been overridden for
 this process with <code>setDefault</code>.
 <p>Since the user's time zone changes dynamically, avoid caching this
 value. Instead, use this method to look it up for each use.
 */
+ (JavaUtilTimeZone *)getDefault;

/*!
 @brief Equivalent to <code>getDisplayName(false, TimeZone.LONG, Locale.getDefault())</code>.
 <a href="../util/Locale.html#default_locale">Be wary of the default locale</a>.
 */
- (NSString *)getDisplayName;

/*!
 @brief Equivalent to <code>getDisplayName(daylightTime, style, Locale.getDefault())</code>.
 <a href="../util/Locale.html#default_locale">Be wary of the default locale</a>.
 */
- (NSString *)getDisplayNameWithBoolean:(jboolean)daylightTime
                                withInt:(jint)style;

/*!
 @brief Returns the <code>short</code> or <code>long</code> name of this time
 zone with either standard or daylight time, as written in <code>locale</code>.
 If the name is not available, the result is in the format
 <code>GMT[+-]hh:mm</code>.
 @param daylightTime true for daylight time, false for standard time.
 @param style either <code>TimeZone.LONG</code> or <code>TimeZone.SHORT</code>.
 @param locale the display locale.
 */
- (NSString *)getDisplayNameWithBoolean:(jboolean)daylightTime
                                withInt:(jint)style
                     withJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Equivalent to <code>getDisplayName(false, TimeZone.LONG, locale)</code>.
 */
- (NSString *)getDisplayNameWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the latest daylight savings in milliseconds for this time zone, relative
 to this time zone's regular UTC offset (as returned by <code>getRawOffset</code>).
 <p>This class returns <code>3600000</code> (1 hour) for time zones
 that use daylight savings time and <code>0</code> for timezones that do not,
 leaving it to subclasses to override this method for other daylight savings
 offsets. (There are time zones, such as <code>Australia/Lord_Howe</code>,
 that use other values.)
 <p>Note that this method doesn't tell you whether or not to <i>apply</i> the
 offset: you need to call <code>inDaylightTime</code> for the specific time
 you're interested in. If this method returns a non-zero offset, that only
 tells you that this <code>TimeZone</code> sometimes observes daylight savings.
 <p>Note also that this method doesn't necessarily return the value you need
 to apply to the time you're working with. This value can and does change over
 time for a given time zone.
 <p>It's highly unlikely that you should ever call this method. You
 probably want <code>getOffset</code> instead, which tells you the offset
 for a specific point in time, and takes daylight savings into account for you.
 */
- (jint)getDSTSavings;

/*!
 @brief Returns the ID of this <code>TimeZone</code>, such as
 <code>America/Los_Angeles</code>, <code>GMT-08:00</code> or <code>UTC</code>.
 */
- (NSString *)getID;

/*!
 @brief Returns this time zone's offset in milliseconds from UTC at the specified
 date and time.
 The offset includes daylight savings time if the date
 and time is within the daylight savings time period.
 <p>This method is intended to be used by <code>Calendar</code> to compute
 <code>Calendar.DST_OFFSET</code> and <code>Calendar.ZONE_OFFSET</code>. Application
 code should have no reason to call this method directly. Each parameter
 is interpreted in the same way as the corresponding <code>Calendar</code>
 field. Refer to <code>Calendar</code> for specific definitions of this
 method's parameters.
 */
- (jint)getOffsetWithInt:(jint)era
                 withInt:(jint)year
                 withInt:(jint)month
                 withInt:(jint)day
                 withInt:(jint)dayOfWeek
                 withInt:(jint)timeOfDayMillis;

/*!
 @brief Returns the offset in milliseconds from UTC for this time zone at <code>time</code>
 .
 The offset includes daylight savings time if the specified
 date is within the daylight savings time period.
 @param time the date in milliseconds since January 1, 1970 00:00:00 UTC
 */
- (jint)getOffsetWithLong:(jlong)time;

/*!
 @brief Returns the offset in milliseconds from UTC of this time zone's standard
 time.
 */
- (jint)getRawOffset;

/*!
 @brief Returns a <code>TimeZone</code> corresponding to the given <code>id</code>, or <code>GMT</code>
 for unknown ids.
 <p>An ID can be an Olson name of the form <i>Area</i>/<i>Location</i>, such
 as <code>America/Los_Angeles</code>. The <code>getAvailableIDs</code> method returns
 the supported names.
 <p>This method can also create a custom <code>TimeZone</code> given an ID with the following
 syntax: <code>GMT[+|-]hh[[:]mm]</code>. For example, <code>"GMT+05:00"</code>, <code>"GMT+0500"</code>,
 <code>"GMT+5:00"</code>, <code>"GMT+500"</code>, <code>"GMT+05"</code>, and <code>"GMT+5"</code> all return
 an object with a raw offset of +5 hours from UTC, and which does <i>not</i> use daylight
 savings. These are rarely useful, because they don't correspond to time zones actually
 in use by humans.
 <p>Other than the special cases "UTC" and "GMT" (which are synonymous in this context,
 both corresponding to UTC), Android does not support the deprecated three-letter time
 zone IDs used in Java 1.1.
 */
+ (JavaUtilTimeZone *)getTimeZoneWithNSString:(NSString *)id_;

/*!
 @brief Returns true if <code>timeZone</code> has the same rules as this time zone.
 <p>The base implementation returns true if both time zones have the same
 raw offset.
 */
- (jboolean)hasSameRulesWithJavaUtilTimeZone:(JavaUtilTimeZone *)timeZone;

/*!
 @brief Returns true if <code>time</code> is in a daylight savings time period for
 this time zone.
 */
- (jboolean)inDaylightTimeWithJavaUtilDate:(JavaUtilDate *)time;

/*!
 @brief Overrides the default time zone for the current process only.
 <p><strong>Warning</strong>: avoid using this method to use a custom time
 zone in your process. This value may be cleared or overwritten at any
 time, which can cause unexpected behavior. Instead, manually supply a
 custom time zone as needed.
 @param timeZone a custom time zone, or <code>null</code> to set the default to
 the user's preferred value.
 */
+ (void)setDefaultWithJavaUtilTimeZone:(JavaUtilTimeZone *)timeZone;

/*!
 @brief Sets the ID of this <code>TimeZone</code>.
 */
- (void)setIDWithNSString:(NSString *)id_;

/*!
 @brief Sets the offset in milliseconds from UTC of this time zone's standard
 time.
 */
- (void)setRawOffsetWithInt:(jint)offsetMillis;

/*!
 @brief Returns true if this time zone has a future transition to or from
 daylight savings time.
 <p><strong>Warning:</strong> this returns false for time zones like
 <code>Asia/Kuala_Lumpur</code> that have previously used DST but do not
 currently. A hypothetical country that has never observed daylight
 savings before but plans to start next year would return true.
 <p><strong>Warning:</strong> this returns true for time zones that use
 DST, even when it is not active.
 <p>Use <code>inDaylightTime</code> to find out whether daylight savings is
 in effect at a specific time.
 <p>Most applications should not use this method.
 */
- (jboolean)useDaylightTime;

@end

J2OBJC_STATIC_INIT(JavaUtilTimeZone)

/*!
 @brief The short display name style, such as <code>PDT</code>.
 Requests for this
 style may yield GMT offsets like <code>GMT-08:00</code>.
 */
inline jint JavaUtilTimeZone_get_SHORT();
#define JavaUtilTimeZone_SHORT 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilTimeZone, SHORT, jint)

/*!
 @brief The long display name style, such as <code>Pacific Daylight Time</code>.
 Requests for this style may yield GMT offsets like <code>GMT-08:00</code>.
 */
inline jint JavaUtilTimeZone_get_LONG();
#define JavaUtilTimeZone_LONG 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilTimeZone, LONG, jint)

FOUNDATION_EXPORT void JavaUtilTimeZone_init(JavaUtilTimeZone *self);

FOUNDATION_EXPORT IOSObjectArray *JavaUtilTimeZone_getAvailableIDs();

FOUNDATION_EXPORT IOSObjectArray *JavaUtilTimeZone_getAvailableIDsWithInt_(jint offsetMillis);

FOUNDATION_EXPORT JavaUtilTimeZone *JavaUtilTimeZone_getDefault();

FOUNDATION_EXPORT NSString *JavaUtilTimeZone_createGmtOffsetStringWithBoolean_withBoolean_withInt_(jboolean includeGmt, jboolean includeMinuteSeparator, jint offsetMillis);

FOUNDATION_EXPORT JavaUtilTimeZone *JavaUtilTimeZone_getTimeZoneWithNSString_(NSString *id_);

FOUNDATION_EXPORT void JavaUtilTimeZone_setDefaultWithJavaUtilTimeZone_(JavaUtilTimeZone *timeZone);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimeZone)

#endif

#if !defined (JavaUtilTimeZone_AvailableIDsGetter_) && (INCLUDE_ALL_JavaUtilTimeZone || defined(INCLUDE_JavaUtilTimeZone_AvailableIDsGetter))
#define JavaUtilTimeZone_AvailableIDsGetter_

@class IOSObjectArray;

/*!
 @brief A static class is used for lazy-initialization of available time zone IDs.
 */
@interface JavaUtilTimeZone_AvailableIDsGetter : NSObject

+ (IOSObjectArray *)IDS;

#pragma mark Package-Private

- (instancetype)init;

+ (IOSObjectArray *)getAllIds;

@end

J2OBJC_STATIC_INIT(JavaUtilTimeZone_AvailableIDsGetter)

inline IOSObjectArray *JavaUtilTimeZone_AvailableIDsGetter_get_IDS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *JavaUtilTimeZone_AvailableIDsGetter_IDS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilTimeZone_AvailableIDsGetter, IDS, IOSObjectArray *)

FOUNDATION_EXPORT void JavaUtilTimeZone_AvailableIDsGetter_init(JavaUtilTimeZone_AvailableIDsGetter *self);

FOUNDATION_EXPORT JavaUtilTimeZone_AvailableIDsGetter *new_JavaUtilTimeZone_AvailableIDsGetter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTimeZone_AvailableIDsGetter *create_JavaUtilTimeZone_AvailableIDsGetter_init();

FOUNDATION_EXPORT IOSObjectArray *JavaUtilTimeZone_AvailableIDsGetter_getAllIds();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimeZone_AvailableIDsGetter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilTimeZone")
