//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSettingGroupModel_h
#define HMDSettingGroupModel_h
@import Foundation;

#include "HMBModel.h"
#include "HMDSettingGroupModelProtocol-Protocol.h"

@class NSString, NSUUID;

@interface HMDSettingGroupModel : HMBModel<HMDSettingGroupModelProtocol>

@property (copy, @dynamic, nonatomic) NSString *name;
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

#endif /* HMDSettingGroupModel_h */
