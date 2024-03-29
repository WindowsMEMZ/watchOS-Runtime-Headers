//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2AccessoryServerPairingDriverAuthPromptWorkItem_h
#define HAP2AccessoryServerPairingDriverAuthPromptWorkItem_h
@import Foundation;

#include "HAP2AccessoryServerPairingDriverWorkItem.h"

@class NSError;

@interface HAP2AccessoryServerPairingDriverAuthPromptWorkItem : HAP2AccessoryServerPairingDriverWorkItem

@property (readonly, nonatomic) unsigned long long permissionType;
@property (retain, nonatomic) NSError *cancelError;

/* class methods */
+ (id)promptForType:(unsigned long long)type;

/* instance methods */
- (id)initWithPermissionType:(unsigned long long)type;
- (void)runForPairingDriver:(id)driver;
- (void)cancelWithError:(id)error;
- (id)description;
@end

#endif /* HAP2AccessoryServerPairingDriverAuthPromptWorkItem_h */
