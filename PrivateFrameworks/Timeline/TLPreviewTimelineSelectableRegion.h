//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.0.0.0.0
//
#ifndef TLPreviewTimelineSelectableRegion_h
#define TLPreviewTimelineSelectableRegion_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface TLPreviewTimelineSelectableRegion : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPath:(id)path rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* TLPreviewTimelineSelectableRegion_h */
