//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLShareParticipant_h
#define PLShareParticipant_h
@import Foundation;

#include "PLManagedObject.h"
#include "PLPerson.h"
#include "PLShare.h"

@class NSPersonNameComponents, NSSet, NSString;

@interface PLShareParticipant : PLManagedObject

@property (copy, @dynamic, nonatomic) NSString *uuid;
@property (copy, @dynamic, nonatomic) NSString *emailAddress;
@property (copy, @dynamic, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, @dynamic, nonatomic) NSString *phoneNumber;
@property (copy, @dynamic, nonatomic) NSString *userIdentifier;
@property (nonatomic) long long role;
@property (nonatomic) long long acceptanceStatus;
@property (nonatomic) long long permission;
@property (@dynamic, nonatomic) short exitState;
@property (@dynamic, nonatomic) BOOL isCurrentUser;
@property (copy, @dynamic, nonatomic) PLPerson *person;
@property (copy, @dynamic, nonatomic) NSString *participantID;
@property (retain, @dynamic, nonatomic) PLShare *share;
@property (retain, @dynamic, nonatomic) NSSet *assets;
@property (retain, @dynamic, nonatomic) NSSet *assetBeingTrashedByParticipant;

/* class methods */
+ (id)insertInPhotoLibrary:(id)library;
+ (id)participantWithCPLShareParticipant:(id)participant inShare:(id)share;
+ (id)participantWithPLShareParticipant:(id)participant;
+ (id)participantsWithUUIDs:(id)uuids inPhotoLibrary:(id)library;
+ (id)participantsWithUserIdentifiers:(id)identifiers inScope:(id)scope inPhotoLibrary:(id)library;
+ (id)participantsWithScope:(id)scope inPhotoLibrary:(id)library;
+ (id)_shareParticipantsWithPredicate:(id)predicate fetchLimit:(unsigned long long)limit inManagedObjectContext:(id)context;
+ (id)entityName;
+ (BOOL)isCurrentUserInScopeChange:(id)change;

/* instance methods */
- (void)willSave;
- (void)updateWithCPLShareParticipant:(id)participant inShare:(id)share;
- (BOOL)_relationshipInInvalidState;
- (BOOL)_validateRelationshipConstraintForInsert:(BOOL)insert error:(id *)error;
- (BOOL)validateForInsert:(id *)insert;
- (BOOL)validateForUpdate:(id *)update;
- (id)shortName;
- (id)description;
@end

#endif /* PLShareParticipant_h */
