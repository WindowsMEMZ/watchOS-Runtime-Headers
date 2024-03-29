//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 488.1.0.0.0
//
#ifndef FMFMapCacheImage_h
#define FMFMapCacheImage_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface FMFMapCacheImage : NSObject<NSSecureCoding>

@property (nonatomic) long long count;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSDate *timestamp;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPath:(id)path;
- (id)initWithCoder:(id)coder;
- (void)boostPriority;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* FMFMapCacheImage_h */
