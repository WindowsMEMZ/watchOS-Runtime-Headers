//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef VGExternalAccessory_Protocol_h
#define VGExternalAccessory_Protocol_h
@import Foundation;

#include "VGExternalAccessory-Protocol.h"
#include "VGExternalAccessoryModelFilter.h"
#include "VGExternalAccessoryState.h"
#include "VGExternalAccessoryUpdating-Protocol.h"
#include "VGVehicle.h"
#include "VGVehicleState.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@protocol VGExternalAccessory <NSObject, VGVehicleStateProviding>
/* instance methods */
- (BOOL)isConnectedToVehicle:(id)vehicle;
- (BOOL)isConnectedToAccessoryWithIdentifier:(id)identifier;
@end

#endif /* VGExternalAccessory_Protocol_h */
