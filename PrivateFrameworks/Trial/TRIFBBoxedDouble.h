//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFBBoxedDouble_h
#define TRIFBBoxedDouble_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@interface TRIFBBoxedDouble : NSObject<NSCopying, NSMutableCopying>

@property (readonly, nonatomic) const struct BoxedDouble { double x0; } * cppPointer;
@property (readonly, nonatomic) double val;

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithVal:(double)val;
- (id)init;
- (id)init_;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* TRIFBBoxedDouble_h */
