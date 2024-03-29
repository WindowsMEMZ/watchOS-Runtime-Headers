//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXCustomContent_h
#define AXCustomContent_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSAttributedString, NSString;

@interface AXCustomContent : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSAttributedString *attributedLabel;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSAttributedString *attributedValue;
@property (nonatomic) unsigned long long importance;

/* class methods */
+ (id)customContentWithLabel:(id)label value:(id)value;
+ (id)customContentWithAttributedLabel:(id)label attributedValue:(id)value;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* AXCustomContent_h */
