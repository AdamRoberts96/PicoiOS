//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/NumberFormat.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextNumberFormat")
#ifdef RESTRICT_JavaTextNumberFormat
#define INCLUDE_ALL_JavaTextNumberFormat 0
#else
#define INCLUDE_ALL_JavaTextNumberFormat 1
#endif
#undef RESTRICT_JavaTextNumberFormat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaTextNumberFormat_) && (INCLUDE_ALL_JavaTextNumberFormat || defined(INCLUDE_JavaTextNumberFormat))
#define JavaTextNumberFormat_

#define RESTRICT_JavaTextFormat 1
#define INCLUDE_JavaTextFormat 1
#include "java/text/Format.h"

@class IOSObjectArray;
@class JavaLangStringBuffer;
@class JavaMathRoundingMode;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;
@class JavaUtilCurrency;
@class JavaUtilLocale;

/*!
 @brief The abstract base class for all number formats.
 This class provides the
 interface for formatting and parsing numbers. <code>NumberFormat</code> also
 provides methods for determining which locales have number formats, and what
 their names are.
 <p>
 <code>NumberFormat</code> helps you to format and parse numbers for any locale.
 Your code can be completely independent of the locale conventions for decimal
 points, thousands-separators, or even the particular decimal digits used, or
 whether the number format is even decimal.
 <p>
 To format a number for the current locale, use one of the factory class
 methods:
 <blockquote>
 @code

  myString = NumberFormat.getInstance().format(myNumber);
  
@endcode
 </blockquote>
 <p>
 If you are formatting multiple numbers, it is more efficient to get the
 format and use it multiple times so that the system doesn't have to fetch the
 information about the local language and country conventions multiple times.
 <blockquote>
 @code

  NumberFormat nf = NumberFormat.getInstance();
  for (int i = 0; i &lt; a.length; ++i) {
     output.println(nf.format(myNumber[i]) + &quot;; &quot;);
  }
  
@endcode
 </blockquote>
 <p>
 To format a number for a different locale, specify it in the call to
 <code>getInstance</code>.
 <blockquote>
 @code

  NumberFormat nf = NumberFormat.getInstance(Locale.FRENCH);
  
@endcode
 </blockquote>
 <p>
 You can also use a <code>NumberFormat</code> to parse numbers:
 <blockquote>
 @code

  myNumber = nf.parse(myString);
  
@endcode
 </blockquote>
 <p>Use <code>#getInstance</code> or <code>#getNumberInstance</code> to get the default number
 format. Use <code>getIntegerInstance</code> to get an integer number format,
 <code>getCurrencyInstance</code> to get the currency number format, and
 <code>getPercentInstance</code> to get a format for displaying percentages.
 <p>You can also control the display of numbers with methods such as
 <code>setMinimumFractionDigits</code>. If you want even more control over the
 format or parsing, or want to give your users more control, you can try
 casting the <code>NumberFormat</code> you get from the factory methods to a
 <code>DecimalFormat</code>. This will work for the vast majority of locales; just
 remember to put it in a <code>try</code> block in case you encounter an unusual
 one.
 <p>
 <code>NumberFormat</code> is designed such that some controls work for formatting
 and others work for parsing. For example, <code>setParseIntegerOnly</code> only
 affects parsing: If set to <code>true</code>, "3456.78" is parsed as 3456 (and
 leaves the parse position just after '6'); if set to <code>false</code>,
 "3456.78" is parsed as 3456.78 (and leaves the parse position just after
 '8'). This is independent of formatting.
 <p>
 You can also use forms of the <code>parse</code> and <code>format</code> methods with
 <code>ParsePosition</code> and <code>FieldPosition</code> to allow you to:
 <ul>
 <li>progressively parse through pieces of a string;</li>
 <li>align the decimal point and other areas.</li>
 </ul>
 For example, you can align numbers in two ways:
 <ol>
 <li> If you are using a monospaced font with spacing for alignment, you can
 pass the <code>FieldPosition</code> in your format call, with <code>field</code> =
 <code>INTEGER_FIELD</code>. On output, <code>getEndIndex</code> will be set to the
 offset between the last character of the integer and the decimal. Add
 (desiredSpaceCount - getEndIndex) spaces to the front of the string.</li>
 <li> If you are using proportional fonts, instead of padding with spaces,
 measure the width of the string in pixels from the start to
 <code>getEndIndex</code>. Then move the pen by (desiredPixelWidth -
 widthToAlignmentPoint) before drawing the text. This also works where there
 is no decimal but possibly additional characters before or after the number,
 for example with parentheses in negative numbers: "(12)" for -12.</li>
 </ol>
 <h4>Synchronization</h4>
 <p>
 Number formats are generally not synchronized. It is recommended to create
 separate format instances for each thread. If multiple threads access a
 format concurrently, it must be synchronized externally.
 <p>
 <h4>DecimalFormat</h4>
 <p>
 <code>DecimalFormat</code> is the concrete implementation of <code>NumberFormat</code>,
 and the <code>NumberFormat</code> API is essentially an abstraction of
 <code>DecimalFormat's</code> API. Refer to <code>DecimalFormat</code> for more
 information about this API.
 - seealso: DecimalFormat
 - seealso: java.text.ChoiceFormat
 */
@interface JavaTextNumberFormat : JavaTextFormat

+ (jint)INTEGER_FIELD;

+ (jint)FRACTION_FIELD;

#pragma mark Public

/*!
 @brief Returns a new <code>NumberFormat</code> with the same properties.
 */
- (id)java_clone;

/*!
 @brief Compares the specified object to this number format and indicates if
 they are equal.
 In order to be equal, <code>object</code> must be an instance
 of <code>NumberFormat</code> with the same pattern and properties.
 @param object
 the object to compare with this object.
 @return <code>true</code> if the specified object is equal to this number
 format; <code>false</code> otherwise.
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Formats the specified double using the rules of this number format.
 @param value
 the double to format.
 @return the formatted string.
 */
- (NSString *)formatWithDouble:(jdouble)value;

/*!
 @brief Formats the specified double value as a string using the pattern of this
 number format and appends the string to the specified string buffer.
 <p>
 If the <code>field</code> member of <code>position</code> contains a value
 specifying a format field, then its <code>beginIndex</code> and
 <code>endIndex</code> members will be updated with the position of the first
 occurrence of this field in the formatted text.
 @param value
 the double to format.
 @param buffer
 the target string buffer to append the formatted double value
 to.
 @param field
 on input: an optional alignment field; on output: the offsets
 of the alignment field in the formatted text.
 @return the string buffer.
 */
- (JavaLangStringBuffer *)formatWithDouble:(jdouble)value
                  withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                 withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

/*!
 @brief Formats the specified long using the rules of this number format.
 @param value
 the long to format.
 @return the formatted string.
 */
- (NSString *)formatWithLong:(jlong)value;

/*!
 @brief Formats the specified long value as a string using the pattern of this
 number format and appends the string to the specified string buffer.
 <p>
 If the <code>field</code> member of <code>position</code> contains a value
 specifying a format field, then its <code>beginIndex</code> and
 <code>endIndex</code> members will be updated with the position of the first
 occurrence of this field in the formatted text.
 @param value
 the long to format.
 @param buffer
 the target string buffer to append the formatted long value
 to.
 @param field
 on input: an optional alignment field; on output: the offsets
 of the alignment field in the formatted text.
 @return the string buffer.
 */
- (JavaLangStringBuffer *)formatWithLong:(jlong)value
                withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
               withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

/*!
 @brief Formats a number into a supplied buffer.
 <p>
 The number must be a subclass of <code>Number</code>. Instances of <code>Byte</code>, <code>Short</code>,
 <code>Integer</code>, and <code>Long</code> have <code>Number.longValue</code> invoked, as do instances of
 <code>BigInteger</code> where <code>BigInteger.bitLength</code> returns <i>less than</i> 64. All other
 values have <code>Number.doubleValue</code> invoked instead.
 <p>
 If the <code>field</code> member of <code>field</code> contains a value specifying
 a format field, then its <code>beginIndex</code> and <code>endIndex</code> members
 will be updated with the position of the first occurrence of this field
 in the formatted text.
 @param object
 the object to format, must be a <code>Number</code>.
 @param buffer
 the target string buffer to append the formatted number to.
 @param field
 on input: an optional alignment field; on output: the offsets
 of the alignment field in the formatted text.
 @return the string buffer.
 @throws IllegalArgumentException
 if <code>object</code> is not an instance of <code>Number</code>.
 */
- (JavaLangStringBuffer *)formatWithId:(id)object
              withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
             withJavaTextFieldPosition:(JavaTextFieldPosition *)field;

/*!
 @brief Returns an array of locales for which custom <code>NumberFormat</code> instances
 are available.
 <p>Note that Android does not support user-supplied locale service providers.
 */
+ (IOSObjectArray *)getAvailableLocales;

/*!
 @brief Returns the currency used by this number format.
 <p>
 This implementation throws <code>UnsupportedOperationException</code>,
 concrete subclasses should override this method if they support currency
 formatting.
 <p>
 @return the currency that was set in getInstance() or in setCurrency(),
 or <code>null</code>.
 @throws UnsupportedOperationException
 */
- (JavaUtilCurrency *)getCurrency;

/*!
 @brief Returns a <code>NumberFormat</code> for formatting and parsing currency values
 for the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @return a <code>NumberFormat</code> for handling currency values.
 */
+ (JavaTextNumberFormat *)getCurrencyInstance;

/*!
 @brief Returns a <code>NumberFormat</code> for formatting and parsing currency values
 for the specified locale.
 @param locale
 the locale to use.
 @return a <code>NumberFormat</code> for handling currency values.
 */
+ (JavaTextNumberFormat *)getCurrencyInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns a <code>NumberFormat</code> for formatting and parsing numbers for the
 default locale.
 @return a <code>NumberFormat</code> for handling <code>Number</code> objects.
 */
+ (JavaTextNumberFormat *)getInstance;

/*!
 @brief Returns a <code>NumberFormat</code> for formatting and parsing numbers for the
 specified locale.
 @param locale
 the locale to use.
 @return a <code>NumberFormat</code> for handling <code>Number</code> objects.
 */
+ (JavaTextNumberFormat *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns a <code>NumberFormat</code> for formatting and parsing integers for the
 user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @return a <code>NumberFormat</code> for handling integers.
 */
+ (JavaTextNumberFormat *)getIntegerInstance;

/*!
 @brief Returns a <code>NumberFormat</code> for formatting and parsing integers for
 the specified locale.
 @param locale
 the locale to use.
 @return a <code>NumberFormat</code> for handling integers.
 */
+ (JavaTextNumberFormat *)getIntegerInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the maximum number of fraction digits that are printed when
 formatting.
 If the maximum is less than the number of fraction digits,
 the least significant digits are truncated.
 @return the maximum number of fraction digits.
 */
- (jint)getMaximumFractionDigits;

/*!
 @brief Returns the maximum number of integer digits that are printed when
 formatting.
 If the maximum is less than the number of integer digits, the
 most significant digits are truncated.
 @return the maximum number of integer digits.
 */
- (jint)getMaximumIntegerDigits;

/*!
 @brief Returns the minimum number of fraction digits that are printed when
 formatting.
 @return the minimum number of fraction digits.
 */
- (jint)getMinimumFractionDigits;

/*!
 @brief Returns the minimum number of integer digits that are printed when
 formatting.
 @return the minimum number of integer digits.
 */
- (jint)getMinimumIntegerDigits;

/*!
 @brief Returns a <code>NumberFormat</code> for formatting and parsing numbers for the
 user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @return a <code>NumberFormat</code> for handling <code>Number</code> objects.
 */
+ (JavaTextNumberFormat *)getNumberInstance;

/*!
 @brief Returns a <code>NumberFormat</code> for formatting and parsing numbers for the
 specified locale.
 @param locale
 the locale to use.
 @return a <code>NumberFormat</code> for handling <code>Number</code> objects.
 */
+ (JavaTextNumberFormat *)getNumberInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns a <code>NumberFormat</code> for formatting and parsing percentage
 values for the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 <p>The <code>NumberFormat</code> returned by this method should only be used
 to format floating-point numbers typically between 0 and 1 (with 1 being 100%).
 A value such as 0.53 will be treated as 53%, but 53.0 (or the integer 53) will be
 treated as 5,300%, which is rarely what you intended.
 */
+ (JavaTextNumberFormat *)getPercentInstance;

/*!
 @brief Returns a <code>NumberFormat</code> for formatting and parsing percentage
 values for the given <code>locale</code>.
 <p>The <code>NumberFormat</code> returned by this method should only be used
 to format floating-point numbers typically between 0 and 1 (with 1 being 100%).
 A value such as 0.53 will be treated as 53%, but 53.0 (or the integer 53) will be
 treated as 5,300%, which is rarely what you intended.
 */
+ (JavaTextNumberFormat *)getPercentInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the <code>RoundingMode</code> used by this <code>NumberFormat</code>.
 The default
 implementation in <code>NumberFormat</code> throws <code>UnsupportedOperationException</code>.
 Subclasses for which a rounding mode is meaningful are expected to override this method.
 @since 1.6
 */
- (JavaMathRoundingMode *)getRoundingMode;

- (NSUInteger)hash;

/*!
 @brief Indicates whether this number format formats and parses numbers using a
 grouping separator.
 @return <code>true</code> if a grouping separator is used; <code>false</code>
 otherwise.
 */
- (jboolean)isGroupingUsed;

/*!
 @brief Indicates whether this number format only parses integer numbers.
 Parsing
 stops if a decimal separator is encountered.
 @return <code>true</code> if this number format only parses integers,
 <code>false</code> if if parsese integers as well as fractions.
 */
- (jboolean)isParseIntegerOnly;

/*!
 @brief Parses a <code>Number</code> from the specified string using the rules of this
 number format.
 @param string
 the string to parse.
 @return the <code>Number</code> resulting from the parsing.
 @throws ParseException
 if an error occurs during parsing.
 */
- (NSNumber *)parseWithNSString:(NSString *)string;

/*!
 @brief Parses a <code>Number</code> from the specified string starting at the index
 specified by <code>position</code>.
 If the string is successfully parsed then
 the index of the <code>ParsePosition</code> is updated to the index following
 the parsed text. On error, the index is unchanged and the error index of
 <code>ParsePosition</code> is set to the index where the error occurred.
 @param string
 the string to parse.
 @param position
 input/output parameter, specifies the start index in
 <code>string</code> from where to start parsing. If parsing is
 successful, it is updated with the index following the parsed
 text; on error, the index is unchanged and the error index is
 set to the index where the error occurred.
 @return the <code>Number</code> resulting from the parse or <code>null</code> if
 there is an error.
 */
- (NSNumber *)parseWithNSString:(NSString *)string
      withJavaTextParsePosition:(JavaTextParsePosition *)position;

- (id)parseObjectWithNSString:(NSString *)string
    withJavaTextParsePosition:(JavaTextParsePosition *)position;

/*!
 @brief Sets the currency used by this number format when formatting currency
 values.
 The min and max fraction digits remain the same.
 <p>
 This implementation throws <code>UnsupportedOperationException</code>,
 concrete subclasses should override this method if they support currency
 formatting.
 @param currency
 the new currency.
 @throws UnsupportedOperationException
 */
- (void)setCurrencyWithJavaUtilCurrency:(JavaUtilCurrency *)currency;

/*!
 @brief Sets whether this number format formats and parses numbers using a
 grouping separator.
 @param value
 <code>true</code> if a grouping separator is used; <code>false</code>
 otherwise.
 */
- (void)setGroupingUsedWithBoolean:(jboolean)value;

/*!
 @brief Sets the maximum number of fraction digits that are printed when
 formatting.
 If the maximum is less than the number of fraction digits,
 the least significant digits are truncated.
 @param value
 the maximum number of fraction digits.
 */
- (void)setMaximumFractionDigitsWithInt:(jint)value;

/*!
 @brief Sets the new maximum count of integer digits that are printed when
 formatting.
 If the maximum is less than the number of integer digits, the
 most significant digits are truncated.
 @param value
 the new maximum number of integer numerals for display.
 */
- (void)setMaximumIntegerDigitsWithInt:(jint)value;

/*!
 @brief Sets the minimum number of fraction digits that are printed when
 formatting.
 @param value
 the minimum number of fraction digits.
 */
- (void)setMinimumFractionDigitsWithInt:(jint)value;

/*!
 @brief Sets the minimum number of integer digits that are printed when
 formatting.
 @param value
 the minimum number of integer digits.
 */
- (void)setMinimumIntegerDigitsWithInt:(jint)value;

/*!
 @brief Specifies if this number format should parse numbers only as integers or
 else as any kind of number.
 If this method is called with a <code>true</code>
 value then subsequent parsing attempts will stop if a decimal separator
 is encountered.
 @param value
 <code>true</code> to only parse integers, <code>false</code> to parse
 integers as well as fractions.
 */
- (void)setParseIntegerOnlyWithBoolean:(jboolean)value;

/*!
 @brief Sets the <code>RoundingMode</code> used by this <code>NumberFormat</code>.
 The default
 implementation in <code>NumberFormat</code> throws <code>UnsupportedOperationException</code>.
 Subclasses for which a rounding mode is meaningful are expected to override this method.
 @since 1.6
 */
- (void)setRoundingModeWithJavaMathRoundingMode:(JavaMathRoundingMode *)roundingMode;

#pragma mark Protected

/*!
 @brief Used by subclasses.
 This was public in Java 5.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextNumberFormat)

/*!
 @brief Field constant identifying the integer part of a number.
 */
inline jint JavaTextNumberFormat_get_INTEGER_FIELD();
#define JavaTextNumberFormat_INTEGER_FIELD 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextNumberFormat, INTEGER_FIELD, jint)

/*!
 @brief Field constant identifying the fractional part of a number.
 */
inline jint JavaTextNumberFormat_get_FRACTION_FIELD();
#define JavaTextNumberFormat_FRACTION_FIELD 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextNumberFormat, FRACTION_FIELD, jint)

FOUNDATION_EXPORT void JavaTextNumberFormat_init(JavaTextNumberFormat *self);

FOUNDATION_EXPORT IOSObjectArray *JavaTextNumberFormat_getAvailableLocales();

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getCurrencyInstance();

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getCurrencyInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getIntegerInstance();

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getIntegerInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getInstance();

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getNumberInstance();

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getNumberInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getPercentInstance();

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getPercentInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextNumberFormat)

#endif

#if !defined (JavaTextNumberFormat_Field_) && (INCLUDE_ALL_JavaTextNumberFormat || defined(INCLUDE_JavaTextNumberFormat_Field))
#define JavaTextNumberFormat_Field_

#define RESTRICT_JavaTextFormat 1
#define INCLUDE_JavaTextFormat_Field 1
#include "java/text/Format.h"

/*!
 @brief The instances of this inner class are used as attribute keys and values
 in <code>AttributedCharacterIterator</code> that the
 <code>NumberFormat.formatToCharacterIterator(Object)</code> method returns.
 <p>
 There is no public constructor in this class, the only instances are the
 constants defined here.
 <p>
 */
@interface JavaTextNumberFormat_Field : JavaTextFormat_Field

+ (JavaTextNumberFormat_Field *)SIGN;

+ (JavaTextNumberFormat_Field *)INTEGER;

+ (JavaTextNumberFormat_Field *)FRACTION;

+ (JavaTextNumberFormat_Field *)EXPONENT;

+ (JavaTextNumberFormat_Field *)EXPONENT_SIGN;

+ (JavaTextNumberFormat_Field *)EXPONENT_SYMBOL;

+ (JavaTextNumberFormat_Field *)DECIMAL_SEPARATOR;

+ (JavaTextNumberFormat_Field *)GROUPING_SEPARATOR;

+ (JavaTextNumberFormat_Field *)PERCENT;

+ (JavaTextNumberFormat_Field *)PERMILLE;

+ (JavaTextNumberFormat_Field *)CURRENCY;

#pragma mark Protected

/*!
 @brief Constructs a new instance of <code>NumberFormat.Field</code> with the
 given field name.
 @param fieldName
 the field name.
 */
- (instancetype)initWithNSString:(NSString *)fieldName;

@end

J2OBJC_STATIC_INIT(JavaTextNumberFormat_Field)

/*!
 @brief This constant stands for the number sign.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_SIGN();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_SIGN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, SIGN, JavaTextNumberFormat_Field *)

/*!
 @brief This constant stands for the integer part of the number.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_INTEGER();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_INTEGER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, INTEGER, JavaTextNumberFormat_Field *)

/*!
 @brief This constant stands for the fraction part of the number.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_FRACTION();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_FRACTION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, FRACTION, JavaTextNumberFormat_Field *)

/*!
 @brief This constant stands for the exponent part of the number.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_EXPONENT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_EXPONENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, EXPONENT, JavaTextNumberFormat_Field *)

/*!
 @brief This constant stands for the exponent sign symbol.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_EXPONENT_SIGN();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_EXPONENT_SIGN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, EXPONENT_SIGN, JavaTextNumberFormat_Field *)

/*!
 @brief This constant stands for the exponent symbol.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_EXPONENT_SYMBOL();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_EXPONENT_SYMBOL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, EXPONENT_SYMBOL, JavaTextNumberFormat_Field *)

/*!
 @brief This constant stands for the decimal separator.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_DECIMAL_SEPARATOR();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_DECIMAL_SEPARATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, DECIMAL_SEPARATOR, JavaTextNumberFormat_Field *)

/*!
 @brief This constant stands for the grouping separator.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_GROUPING_SEPARATOR();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_GROUPING_SEPARATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, GROUPING_SEPARATOR, JavaTextNumberFormat_Field *)

/*!
 @brief This constant stands for the percent symbol.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_PERCENT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_PERCENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, PERCENT, JavaTextNumberFormat_Field *)

/*!
 @brief This constant stands for the permille symbol.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_PERMILLE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_PERMILLE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, PERMILLE, JavaTextNumberFormat_Field *)

/*!
 @brief This constant stands for the currency symbol.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_CURRENCY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_CURRENCY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, CURRENCY, JavaTextNumberFormat_Field *)

FOUNDATION_EXPORT void JavaTextNumberFormat_Field_initWithNSString_(JavaTextNumberFormat_Field *self, NSString *fieldName);

FOUNDATION_EXPORT JavaTextNumberFormat_Field *new_JavaTextNumberFormat_Field_initWithNSString_(NSString *fieldName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextNumberFormat_Field *create_JavaTextNumberFormat_Field_initWithNSString_(NSString *fieldName);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextNumberFormat_Field)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextNumberFormat")
