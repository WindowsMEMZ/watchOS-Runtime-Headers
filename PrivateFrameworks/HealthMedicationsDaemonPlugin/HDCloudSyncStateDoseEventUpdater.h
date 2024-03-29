//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncStateDoseEventUpdater_h
#define HDCloudSyncStateDoseEventUpdater_h
@import Foundation;

@class NSDateInterval, NSString;

@interface HDCloudSyncStateDoseEventUpdater : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *key;
@property (nonatomic) struct { int x0; int x1; } supportedSyncVersionRange;
@property (retain, nonatomic) NSDateInterval *timeWindow;

/* class methods */
+ (id)_codableSyncStateFromExistingSyncState:(id)state forDomain:(id)domain key:(id)key;
+ (BOOL)_persistSampleOriginsFromCodableCollection:(id)collection profile:(id)profile error:(id *)error;
+ (id)_sampleUUIDsFromCodableCollection:(id)collection;
+ (BOOL)_fetchPersistedDeletedSamples:(id *)samples withSampleUUIDs:(id)uuids transaction:(id)transaction timeWindow:(id)window error:(id *)error;
+ (BOOL)_fetchPersistedDoseEvents:(id *)events transaction:(id)transaction timeWindow:(id)window error:(id *)error;
+ (id)_flattenCodableCollectionByProvenance:(id)provenance;
+ (BOOL)_generateSyncCodableDevices:(id *)devices fromCollectionByProvenance:(id)provenance transaction:(id)transaction error:(id *)error;
+ (BOOL)_generateSyncCodableContributors:(id *)contributors fromCollectionByProvenance:(id)provenance transaction:(id)transaction error:(id *)error;
+ (id)_sampleType;

/* instance methods */
- (id)initWithDomain:(id)domain key:(id)key timeWindow:(id)window;
- (BOOL)updateDataWithStateStorage:(id)storage transaction:(id)transaction error:(id *)error;
- (long long)_decodeData:(id)data forKey:(id)key decodedCodableSyncState:(id *)state error:(id *)error;
- (long long)_decodeCloudData:(id)data ofClass:(Class)class forKey:(id)key version:(long long)version codableSyncState:(id *)state codableCollection:(id *)collection error:(id *)error;
- (id)_orderCollectionsByOldestCreationDate:(id)date;
- (id)_orderDeletedCollectionsByOldestCreationDate:(id)date;
- (id)_healthObjectUUIDsFromMergedStateSyncCollection:(id)collection;
@end

#endif /* HDCloudSyncStateDoseEventUpdater_h */
