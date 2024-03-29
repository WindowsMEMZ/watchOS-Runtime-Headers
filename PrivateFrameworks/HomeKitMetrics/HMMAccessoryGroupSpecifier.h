//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMAccessoryGroupSpecifier_h
#define HMMAccessoryGroupSpecifier_h
@import Foundation;

#include "HMMHomeGroupSpecifier.h"

@class NSUUID;

@interface HMMAccessoryGroupSpecifier : HMMHomeGroupSpecifier

@property (readonly, nonatomic) NSUUID *accessoryUUID;

/* class methods */
+ (id)type;

/* instance methods */
- (id)initWithAccessoryUUID:(id)uuid homeUUID:(id)uuid groupName:(id)name;
- (id)descriptor;
- (id)coreDataGroupUsingContext:(id)context;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAccessoryGroupSpecifier:(id)specifier;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* HMMAccessoryGroupSpecifier_h */
