//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef VCNRDeviceSyncService_h
#define VCNRDeviceSyncService_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "VCCompanionSyncService.h"
#include "VCShortcutSyncService-Protocol.h"

@class NSString, NSURL;

@interface VCNRDeviceSyncService : NSObject<NSCopying, VCShortcutSyncService>

@property (readonly, weak, nonatomic) VCCompanionSyncService *service;
@property (readonly, nonatomic) long long protocolVersion;
@property (readonly, copy, nonatomic) NSString *syncServiceIdentifier;
@property (readonly, copy, nonatomic) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCompanionSyncService:(id)service device:(id)device;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)requestSync;
- (void)requestFullResync;
@end

#endif /* VCNRDeviceSyncService_h */
