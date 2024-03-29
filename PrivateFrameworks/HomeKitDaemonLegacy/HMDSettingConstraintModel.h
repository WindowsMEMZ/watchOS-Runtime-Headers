//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSettingConstraintModel_h
#define HMDSettingConstraintModel_h
@import Foundation;

#include "HMBModel.h"
#include "HMDSettingConstraintModelProtocol-Protocol.h"

@class NSData, NSNumber, NSString, NSUUID;

@interface HMDSettingConstraintModel : HMBModel<HMDSettingConstraintModelProtocol>

@property (copy, @dynamic, nonatomic) NSNumber *type;
@property (copy, @dynamic, nonatomic) NSNumber *numberValue;
@property (copy, @dynamic, nonatomic) NSString *stringValue;
@property (copy, @dynamic, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) NSUUID *hmbModelID;
@property (readonly, nonatomic) NSUUID *hmbParentModelID;
@property (readonly, nonatomic) NSString *nameForKeyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)hmbProperties;

/* instance methods */
- (id)copyWithNewParentModelID:(id)id;
@end

#endif /* HMDSettingConstraintModel_h */
