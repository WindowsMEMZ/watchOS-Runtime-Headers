//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFSelectedUserCollection_h
#define HFSelectedUserCollection_h
@import Foundation;

#include "NAIdentifiable-Protocol.h"

@class NSSet, NSString;

@interface HFSelectedUserCollection : NSObject<NAIdentifiable>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSSet *specificUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)allUsersCollection;
+ (id)currentUserCollection;
+ (id)collectionWithSpecificUsers:(id)users;
+ (id)na_identity;
+ (id)collectionWithResolvedUsers:(id)users inHome:(id)home;

/* instance methods */
- (id)init;
- (id)initWithType:(unsigned long long)type specificUsers:(id)users;
- (BOOL)isEqual:(id)equal;
- (id)resolveSelectedUsersWithHome:(id)home;
@end

#endif /* HFSelectedUserCollection_h */
