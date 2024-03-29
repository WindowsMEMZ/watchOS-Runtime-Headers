//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTDisplayPlan_h
#define CTDisplayPlan_h
@import Foundation;

#include "CTPlan.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CTDisplayPlan : NSObject<NSSecureCoding>

@property (readonly, nonatomic) CTPlan *plan;
@property (readonly, nonatomic) NSString *carrierName;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) unsigned long long attributes;
@property (readonly, nonatomic) BOOL isPhysical;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPlan:(id)plan status:(long long)status attributes:(unsigned long long)attributes isPhysical:(BOOL)physical carrierName:(id)name phoneNumber:(id)number label:(id)label;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CTDisplayPlan_h */
