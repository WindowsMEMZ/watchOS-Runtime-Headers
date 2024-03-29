//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHBatchFetchedAssetPropertySet_h
#define PHBatchFetchedAssetPropertySet_h
@import Foundation;

#include "PHBatchFetchedPropertySet-Protocol.h"

@class NSKnownKeysDictionary, NSManagedObjectID, NSString;

@interface PHBatchFetchedAssetPropertySet : NSObject<PHBatchFetchedPropertySet>

@property (readonly, nonatomic) NSKnownKeysDictionary *knownKeysDictionary;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)fetchType;
+ (long long)batchSize;
+ (long long)cacheSize;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;
+ (id)propertiesToSortBy;

/* instance methods */
- (id)initWithObjectID:(id)id knownKeysDictionary:(id)dictionary photoLibrary:(id)library;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PHBatchFetchedAssetPropertySet_h */
