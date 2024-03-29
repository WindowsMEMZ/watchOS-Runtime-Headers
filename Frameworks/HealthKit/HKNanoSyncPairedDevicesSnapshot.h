//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKNanoSyncPairedDevicesSnapshot_h
#define HKNanoSyncPairedDevicesSnapshot_h
@import Foundation;

#include "HKNanoSyncPairedDeviceInfo.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSSet;

@interface HKNanoSyncPairedDevicesSnapshot : NSObject<NSCopying, NSSecureCoding>

@property (readonly) HKNanoSyncPairedDeviceInfo *activeDeviceInfo;
@property (readonly, copy) NSSet *allDeviceInfos;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPairedDeviceInfos:(id)infos;
- (id)deviceInfoForSourceBundleIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HKNanoSyncPairedDevicesSnapshot_h */
