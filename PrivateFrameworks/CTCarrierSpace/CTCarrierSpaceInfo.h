//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTCarrierSpaceInfo_h
#define CTCarrierSpaceInfo_h
@import Foundation;

#include "CTCarrierSpaceAppsInfo.h"
#include "CTCarrierSpacePlansInfo.h"
#include "CTCarrierSpaceUsageInfo.h"
#include "NSSecureCoding-Protocol.h"

@interface CTCarrierSpaceInfo : NSObject<NSSecureCoding>

@property (retain, nonatomic) CTCarrierSpaceUsageInfo *usageInfo;
@property (retain, nonatomic) CTCarrierSpacePlansInfo *plansInfo;
@property (retain, nonatomic) CTCarrierSpaceAppsInfo *appsInfo;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CTCarrierSpaceInfo_h */
