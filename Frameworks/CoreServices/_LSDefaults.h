//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef _LSDefaults_h
#define _LSDefaults_h
@import Foundation;

@class NSArray, NSData, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface _LSDefaults : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_ivarQueue;
  NSURL *_baseSystemContainerURL;
  NSData *_hmacSecret;
  NSMutableDictionary *_darwinNotificationNames;
  unsigned int _darwinNotificationNamesUID;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _darwinNotificationNamesLock;
  BOOL _isServer;
  long long _currentDisplayGamut;
  BOOL _isLightweightSystemServer;
}

@property (readonly) unsigned int currentSchemaVersion;
@property (readonly) NSURL *systemContainerURL;
@property (readonly) NSURL *systemGroupContainerURL;
@property (readonly) NSURL *userContainerURL;
@property (readonly) NSURL *databaseContainerDirectoryURL;
@property (readonly) unsigned short databaseStoreFileMode;
@property (readonly) NSURL *databaseStoreFileURL;
@property (readonly) NSURL *systemContentDatabaseStoreFileURL;
@property (readonly) NSURL *unremappableDatabaseStoreFileURL;
@property (readonly) NSURL *queriedSchemesMapFileURL;
@property (readonly) NSURL *identifiersFileURL;
@property (readonly) NSURL *preferencesFileURL;
@property (readonly) NSURL *securePreferencesFileURL;
@property (readonly) NSURL *preSydroFSecurePreferencesFileURL;
@property (readonly) NSURL *settingsStoreFileURL;
@property (readonly) NSURL *dbSentinelFileURL;
@property (readonly) NSURL *dbRecoveryFileURL;
@property (readonly) NSURL *dbSyncInterruptedFileURL;
@property (readonly) NSURL *installJournalDirectoryURL;
@property (readonly) NSURL *progressProportionsStateURL;
@property (readonly) NSURL *simulatorRootURL;
@property (readonly) NSString *simulatorRuntimeVersion;
@property (readonly) NSString *simulatorRuntimeBuildVersion;
@property BOOL server;
@property (readonly, @dynamic) BOOL systemServer;
@property BOOL lightweightSystemServer;
@property BOOL hasServer;
@property (readonly) BOOL inEducationMode;
@property (readonly) BOOL usingEphemeralStorage;
@property (readonly) BOOL hasPersistentPreferences;
@property (readonly) BOOL inSyncBubble;
@property (readonly, nonatomic) BOOL inXCTestRigInsecure;
@property (readonly, nonatomic) BOOL appleInternal;
@property (readonly, nonatomic) BOOL allowsAlternateIcons;
@property (readonly, nonatomic) BOOL abortIfMayNotMapDatabase;
@property (readonly, nonatomic) BOOL issueSandboxExceptionsIfMayNotMapDatabase;
@property (readonly, @dynamic) BOOL allowsUnentitledExtensionPointDeclaration;
@property (readonly, @dynamic) BOOL nsExtensionUsesLSSettingsStore;
@property (readonly) double databaseSaveInterval;
@property (readonly) double databaseSaveLatency;
@property (readonly) long long concurrentInstallOperations;
@property (readonly, @dynamic) NSArray *preferredLocalizations;
@property (readonly, @dynamic) BOOL markLocalizationsStoredInDatabase;
@property (readonly, @dynamic) BOOL alwaysUseDebugOpenWithMenus;
@property (readonly, @dynamic) BOOL regionChina;
@property (readonly) NSData *HMACSecret;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)systemContainerBaseURL;
- (id)userPreferencesURL;
- (id)databaseContainerURL;
- (id)databaseContainerURLWithUID:(unsigned int)uid;
- (id)databaseStoreFileURLWithUID:(unsigned int)uid;
- (id)systemContentDatabaseStoreFileURLWithUID:(unsigned int)uid;
- (id)classesWithNameForXCTests:(const char *)xctests;
- (BOOL)isSystemServer;
- (id)serviceNameForConnectionType:(unsigned short)type;
- (id)serviceNameForConnectionType:(unsigned short)type lightweightSystemService:(BOOL)service;
- (unsigned int)proxyUIDForUID:(unsigned int)uid;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (id)darwinNotificationNameForBaseName:(id)name optionalSessionKey:(struct LSSessionKey { unsigned int x0; BOOL x1; } *)key;
- (id)databaseUpdateNotificationNameForSessionKey:(struct LSSessionKey { unsigned int x0; BOOL x1; })key;
- (id)settingsUpdateNotificationNameForUserID:(unsigned int)id;
- (id)preferencesUpdateNotificationName;
- (id)preferencesFileChangeNotificationName;
- (BOOL)isRegionChina;
- (id)debugDescription;
- (BOOL)isInSyncBubble;
- (BOOL)isInXCTestRigInsecure;
- (BOOL)isAppleInternal;
- (BOOL)isServer;
- (BOOL)isLightweightSystemServer;
- (BOOL)isInEducationMode;
- (BOOL)isUsingEphemeralStorage;
@end

#endif /* _LSDefaults_h */
