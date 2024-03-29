//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUMetadataCacheDataProvider_h
#define TUMetadataCacheDataProvider_h
@import Foundation;

#include "TUMetadataCacheDataProviderDelegate-Protocol.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TUMetadataCacheDataProvider : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *providerCache;
@property (weak, nonatomic) NSObject<TUMetadataCacheDataProviderDelegate> *delegate;
@property (readonly, nonatomic) BOOL empty;

/* class methods */
+ (id)classIdentifier;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue;
- (id)metadataForDestinationID:(id)id;
- (void)setObject:(id)object forDestinationID:(id)id;
- (void)updateCacheWithDestinationIDs:(id)ids withGroup:(id)group;
- (void)refresh;
- (void)invalidateCache;
- (void)_invalidateCache;
- (BOOL)isEmpty;
- (id)description;
@end

#endif /* TUMetadataCacheDataProvider_h */
