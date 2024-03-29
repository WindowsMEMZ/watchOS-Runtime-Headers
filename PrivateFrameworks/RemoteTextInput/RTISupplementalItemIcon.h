//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 139.203.0.0.0
//
#ifndef RTISupplementalItemIcon_h
#define RTISupplementalItemIcon_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface RTISupplementalItemIcon : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSString *dataType;
@property (readonly, nonatomic) NSData *data;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDataType:(id)type data:(id)data;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* RTISupplementalItemIcon_h */
