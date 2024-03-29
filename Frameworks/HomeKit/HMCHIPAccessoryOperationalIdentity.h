//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMCHIPAccessoryOperationalIdentity_h
#define HMCHIPAccessoryOperationalIdentity_h
@import Foundation;

#include "HMFObject-Protocol.h"

@class NSArray, NSData, NSNumber, NSString;

@interface HMCHIPAccessoryOperationalIdentity : NSObject<HMFObject>

@property (readonly, copy) NSData *rootPublicKey;
@property (readonly, copy) NSNumber *nodeID;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)shortDescription;

/* instance methods */
- (id)initWithRootPublicKey:(id)key nodeID:(id)id;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HMCHIPAccessoryOperationalIdentity_h */
