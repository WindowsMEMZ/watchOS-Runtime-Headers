//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDLegacyAccessorySettingsAdaptor_Protocol_h
#define HMDLegacyAccessorySettingsAdaptor_Protocol_h
@import Foundation;

#include "HMDLegacyAccessorySettingsAdaptor-Protocol.h"
#include "HMDLegacyAccessorySettingsAdaptorDelegate-Protocol.h"
#include "HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider-Protocol.h"
#include "HMEEventConsumer-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSString, NSUUID;
@protocol HMESubscriptionProviding, OS_dispatch_queue;

@protocol HMDLegacyAccessorySettingsAdaptor 

@property (weak) NSObject<HMDLegacyAccessorySettingsAdaptorDelegate> *delegate;

/* instance methods */
- (void)updateSettingWithKeyPath:(id)path settingValue:(id)value completion:(id /* block */)completion;
- (id)languageValueList;
@end

#endif /* HMDLegacyAccessorySettingsAdaptor_Protocol_h */
