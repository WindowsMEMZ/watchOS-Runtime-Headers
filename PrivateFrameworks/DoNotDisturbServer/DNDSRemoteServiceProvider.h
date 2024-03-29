//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSRemoteServiceProvider_h
#define DNDSRemoteServiceProvider_h
@import Foundation;

#include "BSServiceConnectionListenerDelegate-Protocol.h"
#include "DNDRemoteMonitorServerProtocol-Protocol.h"
#include "DNDRemoteServiceServerProtocol-Protocol.h"
#include "DNDSClientDetailsProvider.h"
#include "DNDSRemoteServiceProviderDelegate-Protocol.h"

@class BSServiceConnectionListener, NSMapTable, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface DNDSRemoteServiceProvider : NSObject<BSServiceConnectionListenerDelegate, DNDRemoteServiceServerProtocol, DNDRemoteMonitorServerProtocol> {
  /* instance variables */
  BSServiceConnectionListener *_requestListener;
  BSServiceConnectionListener *_monitorListener;
  NSMapTable *_clientConnectionDetailsByConnection;
  DNDSClientDetailsProvider *_clientDetailsProvider;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
  NSMutableSet *_connections;
  NSObject<OS_dispatch_queue> *_clientNotificationQueue;
}

@property (weak, nonatomic) NSObject<DNDSRemoteServiceProviderDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithClientDetailsProvider:(id)provider;
- (void)dealloc;
- (void)resume;
- (void)invalidate;
- (void)handleStateUpdate:(id)update;
- (void)handleModeAssertionUpdateResult:(id)result;
- (void)handleUpdatedBehaviorSettings:(id)settings;
- (void)handleUpdatedPhoneCallBypassSettings:(id)settings;
- (void)handleUpdatedPairSyncState:(unsigned long long)state;
- (void)handleUpdatedPreventAutoReplySetting:(BOOL)setting;
- (void)handleUpdatedScheduleSettings:(id)settings;
- (void)handleUpdatedModes:(id)modes availableModes:(id)modes;
- (void)handleAppConfigurationContextUpdateForModeIdentifier:(id)identifier;
- (void)handleMeDeviceStateUpdate:(id)update;
- (void)listener:(id)listener didReceiveConnection:(id)connection withContext:(id)context;
- (void)resolveBehaviorForEventDetails:(id)details requestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)takeModeAssertionWithDetails:(id)details requestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)invalidateActiveModeAssertionWithDetails:(id)details reasonOverride:(id)override requestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getActiveModeAssertionWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getLatestModeAssertionInvalidationWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAllModeAssertionsWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)registerForAssertionUpdatesWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)queryStateWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)queryStateForUpdateWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)_queryStateWithCompletionHandler:(id /* block */)handler;
- (void)registerForStateUpdatesWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setScreenIsShared:(id)shared screenIsMirrored:(id)mirrored withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getBehaviorSettingsWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setBehaviorSettings:(id)settings withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getScheduleSettingsWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setScheduleSettings:(id)settings withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)registerForSettingsUpdatesWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setPreventAutoReply:(id)reply withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getPreventAutoReplyWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setModesCanImpactAvailability:(id)availability withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getModesCanImpactAvailabilityWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)registerForGlobalConfigurationUpdatesWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getCloudSyncStateWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setCloudSyncPreferenceEnabled:(id)enabled withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getPairSyncStateWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setPairSyncPreferenceEnabled:(id)enabled withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAccountFeatureSupportWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getStateDumpWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)didChangeFocusStatusSharingSettingForApplicationIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setModeConfiguration:(id)configuration withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)removeModeConfigurationForModeIdentifier:(id)identifier deletePlaceholder:(id)placeholder withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getModeConfigurationsWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getModeConfigurationForModeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAllModesWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAvailableModesWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)syncModeConfigurationsWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAllowedModesForContactHandle:(id)handle withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getSilencedModesForContactHandle:(id)handle withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getUserAvailabilityInActiveModeForContactHandle:(id)handle withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)publishStatusKitAvailabilityWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)activateModeWithDetails:(id)details withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)activeModeAssertionWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)invalidateModeAssertionWithUUID:(id)uuid withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)registerForModeSelectionUpdatesWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAppInfoForBundleIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAppInfoForBundleIdentifiers:(id)identifiers withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)queryMeDeviceStateWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)registerForMeDeviceStateUpdatesWithRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setAppConfigurationPredicate:(id)predicate forActionIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAppConfigurationPredicateForActionIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setAppConfigurationTargetContentIdentifierPrefix:(id)prefix forActionIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setAppAction:(id)action forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)clearAppActionWithIdentifier:(id)identifier forApplicationIdentifier:(id)identifier modeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAppActionsForModeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)clearSystemActionWithIdentifier:(id)identifier forModeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getSystemActionsForModeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)setSystemAction:(id)action forModeIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)_handleClientConnectionInterrupted:(id)interrupted;
- (void)_handleClientConnectionInvalidated:(id)invalidated;
- (void)_registerOrMutateConnectionDetailsForClientConnection:(id)connection handler:(id /* block */)handler;
- (void)_unregisterConnectionDetailsForClientConnection:(id)connection;
- (void)_iterateClientConnectionsToSendWithHandler:(id /* block */)handler;
- (id)_clientDetailsForClientIdentifier:(id)identifier clientConnection:(id)connection;
- (void)_addConnection:(id)connection;
- (void)_removeConnection:(id)connection;
@end

#endif /* DNDSRemoteServiceProvider_h */
