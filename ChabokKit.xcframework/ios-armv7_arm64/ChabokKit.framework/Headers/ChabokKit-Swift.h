#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.2.4 (swiftlang-1103.0.32.9 clang-1103.0.32.53)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ChabokKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC9ChabokKit15AnalyticsAction")
@interface AnalyticsAction : NSObject
- (void)setEventWithId:(NSString * _Nonnull)id body:(NSDictionary<NSString *, id> * _Nullable)body;
- (void)setEventWithId:(NSString * _Nonnull)id body:(NSDictionary<NSString *, id> * _Nullable)body callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum LogLevel : NSInteger;
@class ChabokAction;
@class UserAction;

SWIFT_CLASS("_TtC9ChabokKit6Chabok")
@interface Chabok : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (void)setLogLevelWithLogLevel:(enum LogLevel)logLevel;
+ (void)lockLoggingWithLock:(BOOL)lock;
+ (ChabokAction * _Nonnull)perform SWIFT_WARN_UNUSED_RESULT;
+ (UserAction * _Nonnull)user SWIFT_WARN_UNUSED_RESULT;
+ (AnalyticsAction * _Nonnull)analytics SWIFT_WARN_UNUSED_RESULT;
+ (void)initializeWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
+ (void)setDefaultTrackerWithId:(NSString * _Nonnull)id;
+ (void)kdsEpytWithT:(NSString * _Nonnull)t;
+ (void)disableSdkWithDisableSdk:(BOOL)disableSdk;
+ (BOOL)isSdkDisabled SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9ChabokKit12ChabokAction")
@interface ChabokAction : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSStream;

SWIFT_CLASS("_TtC9ChabokKit19FoundationTransport")
@interface FoundationTransport : NSObject <NSStreamDelegate>
- (void)stream:(NSStream * _Nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, Gender, open) {
  GenderFEMALE = 0,
  GenderMALE = 1,
};

typedef SWIFT_ENUM(NSInteger, LogLevel, open) {
  LogLevelVerbose = 1,
  LogLevelDebug = 2,
  LogLevelInfo = 3,
  LogLevelWarn = 4,
  LogLevelError = 5,
  LogLevelAssert = 6,
  LogLevelSuppress = 7,
};

typedef SWIFT_ENUM(NSInteger, LoginKey, open) {
  LoginKeyEMAIL = 0,
  LoginKeyMOBILE = 1,
};

@class NSURLSession;
@class NSURLSessionWebSocketTask;

SWIFT_CLASS("_TtC9ChabokKit12NativeEngine") SWIFT_AVAILABILITY(tvos,introduced=13.0) SWIFT_AVAILABILITY(watchos,introduced=6.0) SWIFT_AVAILABILITY(ios,introduced=13.0) SWIFT_AVAILABILITY(macos,introduced=10.15)
@interface NativeEngine : NSObject <NSURLSessionDataDelegate, NSURLSessionWebSocketDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session webSocketTask:(NSURLSessionWebSocketTask * _Nonnull)webSocketTask didOpenWithProtocol:(NSString * _Nullable)protocol;
- (void)URLSession:(NSURLSession * _Nonnull)session webSocketTask:(NSURLSessionWebSocketTask * _Nonnull)webSocketTask didCloseWithCode:(NSURLSessionWebSocketCloseCode)closeCode reason:(NSData * _Nullable)reason;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9ChabokKit7Profile")
@interface Profile : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtCC9ChabokKit7Profile14ProfileBuilder")
@interface ProfileBuilder : NSObject
- (ProfileBuilder * _Nonnull)email:(NSString * _Nonnull)email;
- (ProfileBuilder * _Nonnull)mobile:(NSString * _Nonnull)mobile;
- (ProfileBuilder * _Nonnull)name:(NSString * _Nonnull)name;
- (ProfileBuilder * _Nonnull)family:(NSString * _Nonnull)family;
- (ProfileBuilder * _Nonnull)birthDate:(NSString * _Nonnull)birthDate;
- (ProfileBuilder * _Nonnull)timeZone:(NSString * _Nonnull)timeZone;
- (ProfileBuilder * _Nonnull)gender:(enum Gender)gender;
- (Profile * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9ChabokKit10UserAction")
@interface UserAction : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (BOOL)isLoggedIn SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getUserId SWIFT_WARN_UNUSED_RESULT;
- (void)loginWithUserId:(NSString * _Nonnull)userId;
- (void)loginWithUserId:(NSString * _Nonnull)userId callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (void)logout;
- (void)logoutWithCallback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (void)setProfileWithProfile:(Profile * _Nonnull)profile;
- (void)setProfileWithProfile:(Profile * _Nonnull)profile callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (void)setAttributeWithAttributes:(NSDictionary<NSString *, id> * _Nonnull)attributes;
- (void)setAttributeWithAttributes:(NSDictionary<NSString *, id> * _Nonnull)attributes callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (void)setLocationWithLatitude:(double)latitude longitude:(double)longitude;
- (void)setLocationWithLatitude:(double)latitude longitude:(double)longitude callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (void)setPushIdWithId:(NSString * _Nonnull)id;
- (void)setPushIdWithId:(NSString * _Nonnull)id callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.2.4 (swiftlang-1103.0.32.9 clang-1103.0.32.53)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ChabokKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC9ChabokKit15AnalyticsAction")
@interface AnalyticsAction : NSObject
- (void)setEventWithId:(NSString * _Nonnull)id body:(NSDictionary<NSString *, id> * _Nullable)body;
- (void)setEventWithId:(NSString * _Nonnull)id body:(NSDictionary<NSString *, id> * _Nullable)body callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum LogLevel : NSInteger;
@class ChabokAction;
@class UserAction;

SWIFT_CLASS("_TtC9ChabokKit6Chabok")
@interface Chabok : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (void)setLogLevelWithLogLevel:(enum LogLevel)logLevel;
+ (void)lockLoggingWithLock:(BOOL)lock;
+ (ChabokAction * _Nonnull)perform SWIFT_WARN_UNUSED_RESULT;
+ (UserAction * _Nonnull)user SWIFT_WARN_UNUSED_RESULT;
+ (AnalyticsAction * _Nonnull)analytics SWIFT_WARN_UNUSED_RESULT;
+ (void)initializeWithClientId:(NSString * _Nonnull)clientId clientSecret:(NSString * _Nonnull)clientSecret callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
+ (void)setDefaultTrackerWithId:(NSString * _Nonnull)id;
+ (void)kdsEpytWithT:(NSString * _Nonnull)t;
+ (void)disableSdkWithDisableSdk:(BOOL)disableSdk;
+ (BOOL)isSdkDisabled SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9ChabokKit12ChabokAction")
@interface ChabokAction : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSStream;

SWIFT_CLASS("_TtC9ChabokKit19FoundationTransport")
@interface FoundationTransport : NSObject <NSStreamDelegate>
- (void)stream:(NSStream * _Nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, Gender, open) {
  GenderFEMALE = 0,
  GenderMALE = 1,
};

typedef SWIFT_ENUM(NSInteger, LogLevel, open) {
  LogLevelVerbose = 1,
  LogLevelDebug = 2,
  LogLevelInfo = 3,
  LogLevelWarn = 4,
  LogLevelError = 5,
  LogLevelAssert = 6,
  LogLevelSuppress = 7,
};

typedef SWIFT_ENUM(NSInteger, LoginKey, open) {
  LoginKeyEMAIL = 0,
  LoginKeyMOBILE = 1,
};

@class NSURLSession;
@class NSURLSessionWebSocketTask;

SWIFT_CLASS("_TtC9ChabokKit12NativeEngine") SWIFT_AVAILABILITY(tvos,introduced=13.0) SWIFT_AVAILABILITY(watchos,introduced=6.0) SWIFT_AVAILABILITY(ios,introduced=13.0) SWIFT_AVAILABILITY(macos,introduced=10.15)
@interface NativeEngine : NSObject <NSURLSessionDataDelegate, NSURLSessionWebSocketDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session webSocketTask:(NSURLSessionWebSocketTask * _Nonnull)webSocketTask didOpenWithProtocol:(NSString * _Nullable)protocol;
- (void)URLSession:(NSURLSession * _Nonnull)session webSocketTask:(NSURLSessionWebSocketTask * _Nonnull)webSocketTask didCloseWithCode:(NSURLSessionWebSocketCloseCode)closeCode reason:(NSData * _Nullable)reason;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9ChabokKit7Profile")
@interface Profile : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtCC9ChabokKit7Profile14ProfileBuilder")
@interface ProfileBuilder : NSObject
- (ProfileBuilder * _Nonnull)email:(NSString * _Nonnull)email;
- (ProfileBuilder * _Nonnull)mobile:(NSString * _Nonnull)mobile;
- (ProfileBuilder * _Nonnull)name:(NSString * _Nonnull)name;
- (ProfileBuilder * _Nonnull)family:(NSString * _Nonnull)family;
- (ProfileBuilder * _Nonnull)birthDate:(NSString * _Nonnull)birthDate;
- (ProfileBuilder * _Nonnull)timeZone:(NSString * _Nonnull)timeZone;
- (ProfileBuilder * _Nonnull)gender:(enum Gender)gender;
- (Profile * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9ChabokKit10UserAction")
@interface UserAction : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (BOOL)isLoggedIn SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getUserId SWIFT_WARN_UNUSED_RESULT;
- (void)loginWithUserId:(NSString * _Nonnull)userId;
- (void)loginWithUserId:(NSString * _Nonnull)userId callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (void)logout;
- (void)logoutWithCallback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (void)setProfileWithProfile:(Profile * _Nonnull)profile;
- (void)setProfileWithProfile:(Profile * _Nonnull)profile callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (void)setAttributeWithAttributes:(NSDictionary<NSString *, id> * _Nonnull)attributes;
- (void)setAttributeWithAttributes:(NSDictionary<NSString *, id> * _Nonnull)attributes callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (void)setLocationWithLatitude:(double)latitude longitude:(double)longitude;
- (void)setLocationWithLatitude:(double)latitude longitude:(double)longitude callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
- (void)setPushIdWithId:(NSString * _Nonnull)id;
- (void)setPushIdWithId:(NSString * _Nonnull)id callback:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))callback;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
