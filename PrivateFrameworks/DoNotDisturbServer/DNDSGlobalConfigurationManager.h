//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSGlobalConfigurationManager_h
#define DNDSGlobalConfigurationManager_h
@import Foundation;

#include "DNDSBackingStoreDelegate-Protocol.h"
#include "DNDSGlobalConfigurationManagerDelegate-Protocol.h"
#include "DNDSGlobalConfigurationStoreDelegate-Protocol.h"
#include "DNDSGlobalConfigurationStoring-Protocol.h"
#include "DNDSSysdiagnoseDataProvider-Protocol.h"

@class NSString;

@interface DNDSGlobalConfigurationManager : NSObject<DNDSSysdiagnoseDataProvider, DNDSBackingStoreDelegate, DNDSGlobalConfigurationStoreDelegate> {
  /* instance variables */
  NSObject<DNDSGlobalConfigurationStoring> *_backingStore;
}

@property (weak, nonatomic) NSObject<DNDSGlobalConfigurationManagerDelegate> *delegate;
@property (readonly, copy, @dynamic, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBackingStore:(id)store;
- (void)dealloc;
- (id)getConfigurationReturningError:(id *)error;
- (BOOL)setConfiguration:(id)configuration withError:(id *)error;
- (BOOL)getPreventAutoReplyReturningError:(id *)error;
- (BOOL)setPreventAutoReply:(BOOL)reply withError:(id *)error;
- (BOOL)getModesCanImpactAvailabilityReturningError:(id *)error;
- (BOOL)setModesCanImpactAvailability:(BOOL)availability withError:(id *)error;
- (id)fallbackConfiguration;
- (void)globalConfigurationStore:(id)store didUpdatePreventAutoReplySetting:(BOOL)setting;
- (id)backingStore:(id)store migrateDictionaryRepresentation:(id)representation fromVersionNumber:(unsigned long long)number toVersionNumber:(unsigned long long)number;
- (id)sysdiagnoseDataForDate:(id)date redacted:(BOOL)redacted;
- (unsigned long long)_writeConfiguration:(id)configuration error:(id *)error;
@end

#endif /* DNDSGlobalConfigurationManager_h */
