//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef ENGroup_h
#define ENGroup_h
@import Foundation;

#include "ENCypher-Protocol.h"
#include "ENGroupID.h"
#include "NSSecureCoding-Protocol.h"
#include "_ENGroupInfo.h"

@class NSArray, NSData, NSSet;

@interface ENGroup : NSObject<NSSecureCoding>

@property (retain, nonatomic) _ENGroupInfo *groupInfo;
@property (retain, nonatomic) NSObject<ENCypher> *cypher;
@property (readonly, nonatomic) ENGroupID *groupID;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSData *sharedApplicationData;
@property (readonly, nonatomic) NSSet *destinations;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)sortedGroupsFromGroups:(id)groups;

/* instance methods */
- (id)initWithGroupInfo:(id)info groupID:(id)id cypher:(id)cypher;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)signAndConcealData:(id)data cypherIdentifier:(id *)identifier error:(id *)error;
- (id)verifyAndRevealData:(id)data sendingDevice:(id)device cypherIdentifier:(id)identifier error:(id *)error;
- (id)description;
- (id)accountIdentity;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* ENGroup_h */
