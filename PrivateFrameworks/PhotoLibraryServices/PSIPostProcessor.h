//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PSIPostProcessor_h
#define PSIPostProcessor_h
@import Foundation;

@interface PSIPostProcessor : NSObject
/* class methods */
+ (void)postProcessGroupResults:(id)results dedupedGroupResults:(out id *)results query:(id)query;
+ (BOOL)_prefer:(id)_prefer over:(id)over;
@end

#endif /* PSIPostProcessor_h */
