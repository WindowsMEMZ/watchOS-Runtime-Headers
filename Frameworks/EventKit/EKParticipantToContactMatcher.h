//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKParticipantToContactMatcher_h
#define EKParticipantToContactMatcher_h
@import Foundation;

@class NSArray, NSSet;

@interface EKParticipantToContactMatcher : NSObject

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSSet *contactEmailAddresses;
@property (retain, nonatomic) NSSet *contactNameComponents;
@property (retain, nonatomic) NSSet *contactCompanyNames;

/* class methods */
+ (id)_nameComponentsForContact:(id)contact reverse:(BOOL)reverse;
+ (id)_nameComponentsWithGivenName:(id)name familyName:(id)name;
+ (id)_allParticipantsOnItem:(id)item;

/* instance methods */
- (id)initWithContacts:(id)contacts;
- (void)_cacheContactData;
- (BOOL)anyContactMatchesAnyParticipantFromItem:(id)item;
- (BOOL)anyContactMatchesAnyParticipant:(id)participant;
- (id)matchingParticipantsFromItem:(id)item;
- (id)matchingParticipantsFromParticipants:(id)participants;
- (BOOL)anyContactMatchesParticipant:(id)participant;
@end

#endif /* EKParticipantToContactMatcher_h */
