//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDWorkoutSessionEntity_h
#define HDWorkoutSessionEntity_h
@import Foundation;

#include "HDHealthEntity.h"

@interface HDWorkoutSessionEntity : HDHealthEntity
/* class methods */
+ (id)lookupSessionWithIdentifier:(id)identifier profile:(id)profile error:(id *)error;
+ (id)createSessionWithIdentifier:(id)identifier source:(id)source configuration:(id)configuration state:(long long)state profile:(id)profile error:(id *)error;
+ (id)sessionsForSource:(id)source profile:(id)profile error:(id *)error;
+ (id)sessionsExcludingIdentifiers:(id)identifiers profile:(id)profile error:(id *)error;
+ (id)sessionIdentifierForRecoveryInProfile:(id)profile expirationInterval:(double)interval error:(id *)error;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)privateSubEntities;

/* instance methods */
- (id)sessionIdentifierWithTransaction:(id)transaction error:(id *)error;
- (id)workoutConfigurationWithTransaction:(id)transaction error:(id *)error;
- (BOOL)setWorkoutConfiguration:(id)configuration transaction:(id)transaction error:(id *)error;
- (id)currentActivityWithTransaction:(id)transaction error:(id *)error;
- (BOOL)setCurrentActivity:(id)activity transaction:(id)transaction error:(id *)error;
- (id)activityConfigurationsWithTransaction:(id)transaction error:(id *)error;
- (BOOL)setActivityConfigurations:(id)configurations transaction:(id)transaction error:(id *)error;
- (id)firstActivityConfigurationWithTransaction:(id)transaction error:(id *)error;
- (BOOL)setFirstActivityConfiguration:(id)configuration transaction:(id)transaction error:(id *)error;
- (id)isMirroringInTransaction:(id)transaction error:(id *)error;
- (BOOL)setIsMirroring:(BOOL)mirroring transaction:(id)transaction error:(id *)error;
- (id)requestedStartDateInTransaction:(id)transaction error:(id *)error;
- (BOOL)setRequestedStartDate:(id)date transaction:(id)transaction error:(id *)error;
- (id)startDateInTransaction:(id)transaction error:(id *)error;
- (BOOL)setStartDate:(id)date transaction:(id)transaction error:(id *)error;
- (id)requestedEndDateInTransaction:(id)transaction error:(id *)error;
- (BOOL)setRequestedEndDate:(id)date transaction:(id)transaction error:(id *)error;
- (id)endDateInTransaction:(id)transaction error:(id *)error;
- (BOOL)setEndDate:(id)date transaction:(id)transaction error:(id *)error;
- (id)hasFailedInTransaction:(id)transaction error:(id *)error;
- (BOOL)setHasFailed:(BOOL)failed transaction:(id)transaction error:(id *)error;
- (id)clientBundleIdentifier:(id)identifier error:(id *)error;
- (BOOL)setClientBundleIdentifier:(id)identifier transaction:(id)transaction error:(id *)error;
- (id)clientApplicationIdentifier:(id)identifier error:(id *)error;
- (BOOL)setClientApplicationIdentifier:(id)identifier transaction:(id)transaction error:(id *)error;
- (id)sourceWithTransaction:(id)transaction error:(id *)error;
- (BOOL)setSource:(id)source transaction:(id)transaction error:(id *)error;
- (id)associatedBuilderWithTransaction:(id)transaction error:(id *)error;
- (BOOL)setAssociatedBuilder:(id)builder transaction:(id)transaction error:(id *)error;
- (id)stateWithTransaction:(id)transaction error:(id *)error;
- (BOOL)setState:(long long)state transaction:(id)transaction error:(id *)error;
- (id)requestedTargetStateWithTransaction:(id)transaction error:(id *)error;
- (BOOL)setRequestedTargetState:(long long)state transaction:(id)transaction error:(id *)error;
- (BOOL)insertWorkoutEvent:(id)event transaction:(id)transaction error:(id *)error;
- (id)workoutEventsInTransaction:(id)transaction error:(id *)error;
- (BOOL)finishWithTransaction:(id)transaction error:(id *)error;
- (id)latestActivityDateInTransaction:(id)transaction error:(id *)error;
- (BOOL)updateLatestActivityDateWithTransaction:(id)transaction error:(id *)error;
- (BOOL)updateLatestActivityDate:(id)date transaction:(id)transaction error:(id *)error;
@end

#endif /* HDWorkoutSessionEntity_h */
