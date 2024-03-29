//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISHashError_h
#define ISHashError_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface ISHashError : NSObject<NSCopying>

@property (copy, nonatomic) NSString *actualHashString;
@property (copy, nonatomic) NSString *expectedHashString;
@property (nonatomic) long long rangeEnd;
@property (nonatomic) long long rangeStart;
@property (readonly, nonatomic) NSString *hashFailureHeaderString;

/* instance methods */
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ISHashError_h */
