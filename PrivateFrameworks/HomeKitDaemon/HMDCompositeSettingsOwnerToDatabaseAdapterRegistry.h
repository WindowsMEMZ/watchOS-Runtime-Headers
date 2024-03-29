//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCompositeSettingsOwnerToDatabaseAdapterRegistry_h
#define HMDCompositeSettingsOwnerToDatabaseAdapterRegistry_h
@import Foundation;

@class NSMapTable;

@interface HMDCompositeSettingsOwnerToDatabaseAdapterRegistry : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSMapTable *_settingOwnerToDatabaseAdapterTable;
}

/* instance methods */
- (id)init;
- (id)databaseAdapterForUUID:(id)uuid;
- (void)createDatabaseAdapterIfNotExistForUUID:(id)uuid homeUUID:(id)uuid accessory:(id)accessory workQueue:(id)queue zoneName:(id)name;
- (void)removeZoneWithZoneName:(id)name uuid:(id)uuid workQueue:(id)queue;
@end

#endif /* HMDCompositeSettingsOwnerToDatabaseAdapterRegistry_h */
