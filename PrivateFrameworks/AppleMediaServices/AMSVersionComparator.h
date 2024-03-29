//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSVersionComparator_h
#define AMSVersionComparator_h
@import Foundation;

@interface AMSVersionComparator : NSObject
/* class methods */
+ (BOOL)isVersionSupported:(id)supported requiredVersion:(id)version;
+ (id)_sanitizedVersionStringForVersionString:(id)string;
@end

#endif /* AMSVersionComparator_h */
