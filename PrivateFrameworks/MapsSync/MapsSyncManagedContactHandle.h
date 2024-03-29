//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 112.42.9.28.5
//
#ifndef MapsSyncManagedContactHandle_h
#define MapsSyncManagedContactHandle_h
@import Foundation;

#include "NSManagedObject.h"
#include "MapsSyncManagedFavoriteItem.h"

@class NSString;

@interface MapsSyncManagedContactHandle : NSManagedObject // (Swift)

@property (nonatomic, @dynamic, copy) NSString *handle;
@property (nonatomic, @dynamic, retain) MapsSyncManagedFavoriteItem *favoriteItem;

/* instance methods */
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* MapsSyncManagedContactHandle_h */
