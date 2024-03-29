//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSEphemeralDefaults_h
#define AMSEphemeralDefaults_h
@import Foundation;

@interface AMSEphemeralDefaults : NSObject
/* class methods */
+ (long long)HARLoggingItemLimit;
+ (BOOL)preferEphemeralImageLoader;
+ (BOOL)preferEphemeralURLSessions;
+ (BOOL)processAssertionsEnabled;
+ (BOOL)purchaseAccountFallback;
+ (BOOL)suppressEngagement;
+ (void)setHARLoggingItemLimit:(long long)limit;
+ (void)setPreferEphemeralImageLoader:(BOOL)loader;
+ (void)setPreferEphemeralURLSessions:(BOOL)urlsessions;
+ (void)setProcessAssertionsEnabled:(BOOL)enabled;
+ (void)setPurchaseAccountFallback:(BOOL)fallback;
+ (void)setSuppressEngagement:(BOOL)engagement;
+ (BOOL)bagKeyRegistrationEnabled;
+ (BOOL)HARLoggingEnabled;
+ (void)setBagKeyRegistrationEnabled:(BOOL)enabled;
+ (void)setHARLoggingEnabled:(BOOL)enabled;
+ (void)_setProperty:(id)property forKey:(id)key;
+ (id)_propertyForKey:(id)key defaultValue:(id)value expectedType:(Class)type;
+ (void)_accessDataStoreUsingBlock:(id /* block */)block;
@end

#endif /* AMSEphemeralDefaults_h */
