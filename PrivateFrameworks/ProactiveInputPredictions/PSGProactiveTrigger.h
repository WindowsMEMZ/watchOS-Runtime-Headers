//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PSGProactiveTrigger_h
#define PSGProactiveTrigger_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface PSGProactiveTrigger : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) unsigned long long triggerSourceType;
@property (readonly, nonatomic) NSString *triggerCategory;
@property (readonly, nonatomic) NSDictionary *triggerAttributes;

/* class methods */
+ (id)getGivenNameQualifier:(id)qualifier;
+ (id)getSearchTerm:(id)term;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSourceType:(unsigned long long)type category:(id)category attributes:(id)attributes;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToTrigger:(id)trigger;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* PSGProactiveTrigger_h */
