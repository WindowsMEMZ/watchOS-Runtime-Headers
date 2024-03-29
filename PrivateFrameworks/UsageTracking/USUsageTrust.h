//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 324.0.0.0.0
//
#ifndef USUsageTrust_h
#define USUsageTrust_h
@import Foundation;

@interface USUsageTrust : NSObject
/* class methods */
+ (BOOL)validateTrustForSecTask:(struct __SecTask *)task;
+ (BOOL)validateTrustForSecTask:(struct __SecTask *)task representingBundleIdentifier:(id)identifier;
@end

#endif /* USUsageTrust_h */
