//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNChangeHistoryLabeledValueChange_h
#define CNChangeHistoryLabeledValueChange_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CNChangeHistoryLabeledValueChange : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *propertyKey;
@property (readonly, nonatomic) NSString *labeledValueIdentifier;
@property (readonly, nonatomic) long long changeType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithContactIdentifier:(id)identifier propertyKey:(id)key labeledValueIdentifier:(id)identifier changeType:(long long)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* CNChangeHistoryLabeledValueChange_h */
