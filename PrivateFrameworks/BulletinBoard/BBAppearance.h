//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBAppearance_h
#define BBAppearance_h
@import Foundation;

#include "BBImage.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface BBAppearance : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) BBImage *image;
@property (nonatomic) long long style;

/* class methods */
+ (id)appearanceWithTitle:(id)title;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)replacementObjectForCoder:(id)coder;
- (id)awakeAfterUsingCoder:(id)coder;
@end

#endif /* BBAppearance_h */
