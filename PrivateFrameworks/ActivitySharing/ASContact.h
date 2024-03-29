//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASContact_h
#define ASContact_h
@import Foundation;

#include "ASRelationship.h"
#include "NSCopying-Protocol.h"

@class CNContactStore, NSSet, NSString, NSUUID;

@interface ASContact : NSObject<NSCopying> {
  /* instance variables */
  CNContactStore *_contactStore;
}

@property (readonly, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *linkedContactStoreIdentifier;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSSet *destinations;
@property (copy, nonatomic) ASRelationship *relationship;
@property (copy, nonatomic) ASRelationship *remoteRelationship;
@property (readonly, copy, nonatomic) NSString *primaryDestinationForMessaging;
@property (readonly, nonatomic) unsigned long long cloudType;

/* class methods */
+ (id)contactWithCodableContact:(id)contact;

/* instance methods */
- (id)codableContactIncludingCloudKitFields:(BOOL)fields;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToContact:(id)contact;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)setContactStore:(id)store;
- (id)contactStore;
- (id)contactWithKeys:(id)keys;
- (id)_bestDestinationFromKnownDestinations;
- (id)_bestDestinationForContact:(id)contact;
@end

#endif /* ASContact_h */
