//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFResidentDeviceStatusDetailsItem_h
#define HFResidentDeviceStatusDetailsItem_h
@import Foundation;

#include "HFItem.h"
#include "HFHomeKitItemProtocol-Protocol.h"
#include "HFHomeKitObject-Protocol.h"

@class HMHome, HMResidentDevice, NSString;

@interface HFResidentDeviceStatusDetailsItem : HFItem<HFHomeKitItemProtocol>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMResidentDevice *residentDevice;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithHome:(id)home residentDevice:(id)device;
- (id)_subclass_updateWithOptions:(id)options;
@end

#endif /* HFResidentDeviceStatusDetailsItem_h */
