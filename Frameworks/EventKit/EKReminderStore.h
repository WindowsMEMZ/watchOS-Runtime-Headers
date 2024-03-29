//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKReminderStore_h
#define EKReminderStore_h
@import Foundation;

#include "EKEventStore.h"
#include "EKUpdatedReminderBackingObjectProvider-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, REMStore;
@protocol OS_dispatch_queue;

@interface EKReminderStore : NSObject<EKUpdatedReminderBackingObjectProvider> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableDictionary *_cachedConstraints;
  NSArray *_lists;
  NSMutableSet *_newObjectsIDs;
  NSMutableDictionary *_updatedObjects;
  NSMutableSet *_objectIDsToCommit;
  NSMutableDictionary *_deletedObjects;
  NSMutableArray *_objectsToReset;
  NSMutableArray *_remindersNeedingMove;
  NSMutableDictionary *_movedRemindersIDMap;
  NSObject<OS_dispatch_queue> *_queryQueue;
  NSMutableDictionary *queryCompletionHandlers;
}

@property (readonly, nonatomic) REMStore *remStore;
@property (readonly, weak) EKEventStore *eventStore;
@property (readonly) NSArray *sources;
@property (readonly) NSArray *calendars;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (Class)frozenClassForReminderClass:(Class)class;
+ (id)uniqueIdentifierForREMObject:(id)remobject;
+ (BOOL)isNotFoundError:(id)error;

/* instance methods */
- (id)initWithEventStore:(id)store token:(id)token;
- (void)remindersChanged;
- (void)_loadAccountsIfNeeded;
- (void)_loadAccounts;
- (id)sourceWithIdentifier:(id)identifier;
- (id)cachedConstraintsForSource:(id)source;
- (id)_fetchAndCacheConstraintsForFrozenSource:(id)source;
- (BOOL)isSourceManaged:(id)managed;
- (void)_loadListsIfNeeded;
- (void)_loadLists;
- (id)_allLists;
- (id)calendarWithIdentifier:(id)identifier;
- (id)backingCalendarWithIdentifier:(id)identifier;
- (id)createNewReminderCalendar;
- (id)frozenCalendarFromCalendar:(id)calendar error:(id *)error;
- (BOOL)saveCalendar:(id)calendar error:(id *)error;
- (BOOL)removeCalendar:(id)calendar error:(id *)error;
- (id)defaultCalendarForNewReminders;
- (id)reminderWithUniqueId:(id)id;
- (id)reminderWithIdentifier:(id)identifier;
- (id)remindersWithExternalIdentifier:(id)identifier;
- (id)backingReminderWithIdentifier:(id)identifier;
- (id)createNewReminder;
- (BOOL)saveReminder:(id)reminder error:(id *)error;
- (BOOL)removeReminder:(id)reminder error:(id *)error;
- (id)resetBackingAlarmWithBackingAlarm:(id)alarm;
- (id)resetBackingLocationWithBackingLocation:(id)location;
- (BOOL)saveObject:(id)object withFrozenObject:(id)object error:(id *)error;
- (void)fillInPath:(id)path usingParents:(id)parents;
- (BOOL)commit:(id *)commit;
- (BOOL)_commit:(id *)_commit error:(id *)error;
- (id)_moveRemindersToNewLists:(id)lists error:(id *)error;
- (void)reset;
- (id)predicateForRemindersInCalendars:(id)calendars;
- (id)predicateForCalendarStoreForRemindersInCalendars:(id)calendars;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)starting ending:(id)ending calendars:(id)calendars;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)starting ending:(id)ending calendars:(id)calendars;
- (void)_checkPredicate:(id)predicate;
- (id)fetchRemindersMatchingPredicate:(id)predicate completion:(id /* block */)completion;
- (id /* block */)completionBlockForFetchRequestToken:(id)token remove:(BOOL)remove;
- (id)remindersMatchingPredicate:(id)predicate;
- (id)frozenObjectForReminderObject:(id)object;
- (id)frozenAlarmForREMAlarms:(id)remalarms;
- (id)newFrozenObjectForReminderObject:(id)object withChanges:(id)changes;
- (void)_reminderCopiedToNewList:(id)list;
- (id)existingUpdatedObject:(id)object;
@end

#endif /* EKReminderStore_h */
