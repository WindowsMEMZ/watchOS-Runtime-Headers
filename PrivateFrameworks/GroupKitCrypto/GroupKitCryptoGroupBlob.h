//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 26.0.0.0.0
//
#ifndef GroupKitCryptoGroupBlob_h
#define GroupKitCryptoGroupBlob_h
@import Foundation;

#include "NSManagedObject.h"

@class NSData, NSString, NSUUID;

@interface GroupKitCryptoGroupBlob : NSManagedObject // (Swift)

@property (nonatomic, @dynamic, copy) NSData *blobData;
@property (nonatomic, @dynamic, copy) NSUUID *dedupeID;
@property (nonatomic, @dynamic, copy) NSUUID *groupID;
@property (nonatomic, @dynamic) long long groupVersion;
@property (nonatomic, @dynamic, copy) NSString *userID;

/* instance methods */
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* GroupKitCryptoGroupBlob_h */
