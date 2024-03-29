//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMNoteMemberShareRelationship_h
#define EDAMNoteMemberShareRelationship_h
@import Foundation;

#include "FATObject.h"
#include "EDAMNoteShareRelationshipRestrictions.h"

@class NSNumber, NSString;

@interface EDAMNoteMemberShareRelationship : FATObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSNumber *recipientUserId;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) EDAMNoteShareRelationshipRestrictions *restrictions;
@property (retain, nonatomic) NSNumber *sharerUserId;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMNoteMemberShareRelationship_h */
