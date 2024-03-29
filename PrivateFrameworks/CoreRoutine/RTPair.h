//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef RTPair_h
#define RTPair_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface RTPair : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id secondObject;

/* class methods */
+ (Class)getClusterClassOfObject:(id)object;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithFirstObject:(id)object secondObject:(id)object;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* RTPair_h */
