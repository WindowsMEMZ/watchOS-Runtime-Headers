//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKUIEventNotificationRepresentation_h
#define EKUIEventNotificationRepresentation_h
@import Foundation;

#include "EKUITextAndHeaderItem.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface EKUIEventNotificationRepresentation : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) EKUITextAndHeaderItem *titleItem;
@property (retain, nonatomic) EKUITextAndHeaderItem *subtitleItem;
@property (retain, nonatomic) NSArray *supplementaryItems;
@property (retain, nonatomic) NSDictionary *userActivityUserInfo;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL allDay;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSString *externalURLString;
@property (retain, nonatomic) NSArray *potentialConflictDates;
@property (retain, nonatomic) NSString *notes;
@property (readonly, nonatomic) NSDictionary *organizerContactDictionary;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

/* class methods */
+ (id)defaultEventNotificationRepresentationWithTitle:(id)title message:(id)message notes:(id)notes;
+ (id)upcomingEventNotificationRepresentationWithEvent:(id)event date:(id)date displayTimeZone:(id)zone;
+ (id)invitationNotificationRepresentationWithNotification:(id)notification event:(id)event date:(id)date endDate:(id)date timeZone:(id)zone;
+ (id)_invitationUpdatedTitleLocalizedString;
+ (id)_whenLocalizedString;
+ (id)_whereLocalizedString;
+ (id)_fromLocalizedString;
+ (BOOL)_invitationNotificationHasResourceChanges:(id)changes changesString:(id *)string;
+ (id)responseNotificationWithTitle:(id)title message:(id)message;
+ (id)resourceChangeNotificationWithNotification:(id)notification message:(id)message date:(id)date endDate:(id)date timeZone:(id)zone;
+ (id)timeToLeaveNotificationRepresentationWithHypothesisMessage:(id)message event:(id)event date:(id)date displayTimeZone:(id)zone;
+ (id)previewForNotes:(id)notes;

/* instance methods */
- (void)updateUpcomingEventNotificationWithHypothesisMessage:(id)message;
- (id)initWithDictionary:(id)dictionary;
- (id)dictionaryRepresentationsOfSupplementaryItems;
- (void)setOrganizerForContactDictionary:(id)dictionary;
- (void)_setOwnerForContactDictionary:(id)dictionary;
- (id)description;
- (BOOL)isAllDay;
@end

#endif /* EKUIEventNotificationRepresentation_h */
