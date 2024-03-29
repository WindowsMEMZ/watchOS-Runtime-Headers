//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTCellularUsageWorkspaceInfo_h
#define CTCellularUsageWorkspaceInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface CTCellularUsageWorkspaceInfo : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSNumber *subscriberTag;
@property (readonly, nonatomic) NSNumber *metaDataForHomeCountry;
@property (readonly, nonatomic) NSNumber *metaDataForRoaming;
@property (readonly, nonatomic) NSDate *billingCycleEndDate;
@property (readonly, nonatomic) NSDate *previousBillingCycleDate;
@property (readonly, nonatomic) NSNumber *billingCycleSupported;
@property (readonly, nonatomic) NSNumber *carrierSpaceSupported;
@property (readonly, nonatomic) NSString *workspaceName;
@property (readonly, nonatomic) NSString *workspacePath;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (id)initWithSubscriberTag:(id)tag metaDataForHomeCountry:(id)country metaDataForRoaming:(id)roaming billingCycleEndDate:(id)date previousBillingCycleDate:(id)date billingCycleSupported:(id)supported carrierSpaceSupported:(id)supported workspaceName:(id)name workspacePath:(id)path;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CTCellularUsageWorkspaceInfo_h */
