//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 112.42.9.28.5
//
#ifndef MapsSyncManagedSharedTripBlockedItem_h
#define MapsSyncManagedSharedTripBlockedItem_h
@import Foundation;

#include "NSManagedObject.h"

@class NSDate, NSString, NSUUID;

@interface MapsSyncManagedSharedTripBlockedItem : NSManagedObject // (Swift)

@property (nonatomic, @dynamic, copy) NSDate *createTime;
@property (nonatomic, @dynamic, copy) NSUUID *identifier;
@property (nonatomic, @dynamic, copy) NSDate *modificationTime;
@property (nonatomic, @dynamic, copy) NSString *sharedTripIdentifier;
@property (nonatomic, @dynamic) long long expiryTime;

/* class methods */
+ (Class)wrapperClass;

/* instance methods */
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* MapsSyncManagedSharedTripBlockedItem_h */
