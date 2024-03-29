//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef NSUserDefaults_TelephonyUtilities_h
#define NSUserDefaults_TelephonyUtilities_h
@import Foundation;

@interface NSUserDefaults (TelephonyUtilities)
/* class methods */
+ (id)tu_defaults;
+ (id)sb_defaults;

/* instance methods */
- (BOOL)boolForKey:(id)key withDefault:(BOOL)default;
@end

#endif /* NSUserDefaults_TelephonyUtilities_h */
