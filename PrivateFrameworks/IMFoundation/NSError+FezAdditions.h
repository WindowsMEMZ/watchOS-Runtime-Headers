//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef NSError_FezAdditions_h
#define NSError_FezAdditions_h
@import Foundation;

@interface NSError (FezAdditions)
/* class methods */
+ (id)genericErrorWithFile:(const char *)file function:(const char *)function lineNumber:(long long)number;
@end

#endif /* NSError_FezAdditions_h */
