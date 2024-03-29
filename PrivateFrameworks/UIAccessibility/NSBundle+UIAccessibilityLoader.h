//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef NSBundle_UIAccessibilityLoader_h
#define NSBundle_UIAccessibilityLoader_h
@import Foundation;

@interface NSBundle (UIAccessibilityLoader)
/* class methods */
+ (id)accessibilityLocalBundleWithLastPathComponent:(id)component;
+ (id)accessibilityInternalBundleWithLastPathComponent:(id)component;
+ (id)_accessibilityBundleWithBundlePath:(id)path;
+ (id)accessibilityBundleWithLastPathComponent:(id)component;
+ (id)accessibilityMacCalystBundleWithLastPathComponent:(id)component;

/* instance methods */
- (id)accessibilityBundlePath;
- (void)_loadAXBundleForBundleOffMainThread;
@end

#endif /* NSBundle_UIAccessibilityLoader_h */
