//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 112.42.9.28.5
//
#ifndef MapsSyncManagedCollectionTransitItem_h
#define MapsSyncManagedCollectionTransitItem_h
@import Foundation;

#include "MapsSyncManagedCollectionItem.h"

@class NSData;

@interface MapsSyncManagedCollectionTransitItem : MapsSyncManagedCollectionItem // (Swift)

@property (nonatomic, @dynamic) long long muid;
@property (nonatomic, @dynamic, copy) NSData *transitLineStorage;

/* class methods */
+ (Class)wrapperClass;

/* instance methods */
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* MapsSyncManagedCollectionTransitItem_h */
