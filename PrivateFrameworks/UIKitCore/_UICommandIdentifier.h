//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICommandIdentifier_h
#define _UICommandIdentifier_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface _UICommandIdentifier : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) id propertyList;

/* class methods */
+ (id)identifierWithAction:(SEL)action propertyList:(id)list;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAction:(SEL)action propertyList:(id)list;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* _UICommandIdentifier_h */
