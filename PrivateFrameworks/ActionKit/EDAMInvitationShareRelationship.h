//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMInvitationShareRelationship_h
#define EDAMInvitationShareRelationship_h
@import Foundation;

#include "FATObject.h"
#include "EDAMUserIdentity.h"

@class NSNumber, NSString;

@interface EDAMInvitationShareRelationship : FATObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) EDAMUserIdentity *recipientUserIdentity;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *sharerUserId;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMInvitationShareRelationship_h */
