//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTDanglingPlanItem_h
#define CTDanglingPlanItem_h
@import Foundation;

#include "CTUserLabel.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CTDanglingPlanItem : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSString *iccid;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *simLabelID;
@property (retain, nonatomic) CTUserLabel *userLabel;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIccid:(id)iccid phoneNumber:(id)number label:(id)label labelID:(id)id;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CTDanglingPlanItem_h */
