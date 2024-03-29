//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIWeakReference_h
#define _UIWeakReference_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface _UIWeakReference : NSObject<NSCopying>

@property (weak, nonatomic) id object;

/* class methods */
+ (id)weakReferenceWrappingObject:(id)object;

/* instance methods */
- (id)initWithObject:(id)object;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _UIWeakReference_h */
