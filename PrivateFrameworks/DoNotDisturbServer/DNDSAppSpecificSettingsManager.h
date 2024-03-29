//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSAppSpecificSettingsManager_h
#define DNDSAppSpecificSettingsManager_h
@import Foundation;

#include "DNDSCoreDataBackingStore.h"
#include "DNDSIDSSyncEngine.h"
#include "DNDSIDSSyncEngineDataSource-Protocol.h"

@class NSString;

@interface DNDSAppSpecificSettingsManager : NSObject<DNDSIDSSyncEngineDataSource> {
  /* instance variables */
  DNDSIDSSyncEngine *_idsSyncEngine;
}

@property (readonly, nonatomic) DNDSCoreDataBackingStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)appConfigurationPredicateForActionIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier error:(id *)error;
- (id)appConfigurationPredicateForApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier error:(id *)error;
- (id)systemActionWithIdentifier:(id)identifier modeIdentifier:(id)identifier error:(id *)error;
- (id)appConfigurationTargetContentIdentifierPrefixForApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier error:(id *)error;
- (id)appConfigurationTargetContentIdentifierPrefixForActionIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier error:(id *)error;
- (id)appActionWithIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier error:(id *)error;
- (id)init;
- (id)initWithIDSSyncEngine:(id)engine backingStoreURL:(id)url;
- (id)_initWithBackingStoreURL:(id)url;
- (id)modeSpecificSettingsOfType:(Class)type modeIdentifier:(id)identifier error:(id *)error;
- (id)appSpecificSettingsOfType:(Class)type modeIdentifier:(id)identifier error:(id *)error;
- (id)_perModeSettingsMOsOfType:(Class)type modeIdentifier:(id)identifier processBlock:(id /* block */)block;
- (id)appSpecificSettingsOfType:(Class)type modeIdentifier:(id)identifier applicationIdentifier:(id)identifier error:(id *)error;
- (id)modeSpecificSettingsOfType:(Class)type identifier:(id)identifier modeIdentifier:(id)identifier error:(id *)error;
- (id)appSpecificSettingsOfType:(Class)type identifier:(id)identifier modeIdentifier:(id)identifier applicationIdentifier:(id)identifier error:(id *)error;
- (BOOL)setModeSpecificSettings:(id)settings identifier:(id)identifier type:(Class)type modeIdentifier:(id)identifier error:(id *)error;
- (BOOL)setAppSpecificSettings:(id)settings identifier:(id)identifier type:(Class)type applicationIdentifier:(id)identifier modeIdentifier:(id)identifier error:(id *)error;
- (BOOL)removeModeSpecificSettingsForModeIdentifier:(id)identifier error:(id *)error;
- (id)removeModeSpecificSettingsForModeIdentifiersNotInModeIdentifiers:(id)identifiers error:(id *)error;
- (BOOL)removeAppSpecificSettingsForApplicationIdentifier:(id)identifier error:(id *)error;
- (id)_allModeSpecificSettingsOfType:(Class)type;
- (id)_allAppSpecificSettingsOfType:(Class)type;
- (void)_allPerModeSettingsMOsOfType:(Class)type processBlock:(id /* block */)block;
- (void)idsSyncEngine:(id)engine didFetchRecord:(id)record;
- (void)idsSyncEngine:(id)engine prepareRecordToSave:(inout id)save;
- (void)idsSyncEngine:(id)engine recordWithIDWasDeleted:(id)deleted;
- (void)purgeRecordsForIDSSyncEngine:(id)engine;
- (id)recordIDsForIDSSyncEngine:(id)engine;
- (void)_modesToSave:(id)save modesToDelete:(id)delete;
@end

#endif /* DNDSAppSpecificSettingsManager_h */
