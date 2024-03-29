//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef NSBundleAccessibility_h
#define NSBundleAccessibility_h
@import Foundation;

#include "__NSBundleAccessibility_super.h"

@interface NSBundleAccessibility : __NSBundleAccessibility_super
/* class methods */
+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

/* instance methods */
- (BOOL)loadAndReturnError:(id *)error;
- (id)localizedStringForKey:(id)key value:(id)value table:(id)table;
@end

#endif /* NSBundleAccessibility_h */
