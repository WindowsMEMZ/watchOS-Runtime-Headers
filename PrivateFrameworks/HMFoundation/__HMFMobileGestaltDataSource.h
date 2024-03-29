//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef __HMFMobileGestaltDataSource_h
#define __HMFMobileGestaltDataSource_h
@import Foundation;

#include "HMFObject.h"
#include "HMFMACAddress.h"
#include "HMFSoftwareVersion.h"
#include "HMFSystemInfoBluetoothLEDataSource-Protocol.h"
#include "HMFSystemInfoMarketingInformationDataSource-Protocol.h"
#include "HMFSystemInfoNameDataSource-Protocol.h"
#include "HMFSystemInfoNameDataSourceDelegate-Protocol.h"
#include "HMFSystemInfoProductColorDataSource-Protocol.h"
#include "HMFSystemInfoProductInfoDataSource-Protocol.h"
#include "HMFSystemInfoSerialNumberDataSource-Protocol.h"
#include "HMFSystemInfoSoftwareVersionDataSource-Protocol.h"
#include "HMFSystemInfoWiFiDataSource-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface __HMFMobileGestaltDataSource : HMFObject<HMFSystemInfoNameDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoWiFiDataSource, HMFSystemInfoBluetoothLEDataSource, HMFSystemInfoProductColorDataSource> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) struct MGNotificationTokenStruct * notificationToken;
@property (weak) NSObject<HMFSystemInfoNameDataSourceDelegate> *delegate;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *regionInfo;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) long long productPlatform;
@property (readonly, nonatomic) long long productClass;
@property (readonly, nonatomic) long long productVariant;
@property (readonly, copy, nonatomic) NSString *modelIdentifier;
@property (readonly, copy, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (readonly, copy) HMFMACAddress *WiFiInterfaceMACAddress;
@property (readonly) BOOL supportsBLE;
@property (readonly) long long productColor;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)shouldFetchUserAssignedDeviceName;
- (BOOL)shouldFetchProtectedKey:(id)key;
@end

#endif /* __HMFMobileGestaltDataSource_h */
