//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetActivitiesManager_h
#define SHSheetActivitiesManager_h
@import Foundation;

#include "SHSheetActivitiesManagerDelegate-Protocol.h"
#include "_UIActivityHelper.h"
#include "_UIActivityHelperDelegate-Protocol.h"
#include "_UIActivityMatchingContext.h"
#include "_UIActivityMatchingResults.h"

@class NSArray, NSMutableDictionary, NSString;

@interface SHSheetActivitiesManager : NSObject<_UIActivityHelperDelegate>

@property (retain, nonatomic) _UIActivityHelper *activityHelper;
@property (retain, nonatomic) NSMutableDictionary *internalActivitiesByUUID;
@property (copy, nonatomic) NSArray *hiddenActivities;
@property (retain, nonatomic) NSArray *orderedActivities;
@property (retain, nonatomic) NSArray *excludedActivityTypes;
@property (retain, nonatomic) _UIActivityMatchingContext *currentContext;
@property (retain, nonatomic) _UIActivityMatchingResults *currentResults;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSArray *applicationActivities;
@property (readonly, copy, nonatomic) NSArray *applicationActivityTypes;
@property (weak, nonatomic) NSObject<SHSheetActivitiesManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSessionIdentifier:(id)identifier applicationActivities:(id)activities;
- (id)activitiesByUUID;
- (void)updateActivitiesWithContext:(id)context;
- (id)activityForIdentifier:(id)identifier;
- (id)activityForActivityType:(id)type;
- (void)_addActivities:(id)activities;
- (void)addActivity:(id)activity;
- (void)removeActivity:(id)activity;
- (void)preheatActivitiesIfNeeded;
- (BOOL)activityHelper:(id)helper matchingWithContext:(id)context shouldIncludeSystemActivityType:(id)type sessionID:(id)id;
@end

#endif /* SHSheetActivitiesManager_h */
