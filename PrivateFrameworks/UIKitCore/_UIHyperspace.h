//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIHyperspace_h
#define _UIHyperspace_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_UIHyperregion_Internal-Protocol.h"

@class NSString;

@interface _UIHyperspace : NSObject<_UIHyperregion_Internal, NSSecureCoding, NSCopying>

@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDimensions:(unsigned long long)dimensions;
- (void)_closestPoint:(double *)point toPoint:(const double *)point;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* _UIHyperspace_h */
