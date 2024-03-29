//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.15.1.0.0
//
#ifndef LSRError_h
#define LSRError_h
@import Foundation;

@interface LSRError : NSObject
/* class methods */
+ (void)initialize;
+ (id)errorWithCode:(long long)code description:(id)description;
+ (id)errorWithCode:(long long)code;
+ (id)new;

/* instance methods */
- (id)init;
@end

#endif /* LSRError_h */
