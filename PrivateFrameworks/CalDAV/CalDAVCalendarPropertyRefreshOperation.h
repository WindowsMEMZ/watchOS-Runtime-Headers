//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVCalendarPropertyRefreshOperation_h
#define CalDAVCalendarPropertyRefreshOperation_h
@import Foundation;

#include "CalDAVOperation.h"
#include "CoreDAVContainerInfoSyncProvider-Protocol.h"
#include "CoreDAVContainerInfoTaskGroupDelegate-Protocol.h"
#include "CoreDAVPropPatchTaskDelegate-Protocol.h"
#include "CoreDAVTaskGroupDelegate-Protocol.h"

@class NSError, NSMutableDictionary, NSMutableSet, NSString;
@protocol CalDAVCalendarPropertyRefreshDelegate, OS_dispatch_group;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation<CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {
  /* instance variables */
  NSError *_savedError;
  NSMutableDictionary *_ctags;
  NSMutableDictionary *_syncTokens;
  NSMutableDictionary *_pathToLocalCalendar;
  NSMutableSet *_localCalendarsWithNoPath;
  NSMutableSet *_updatedCalendars;
  BOOL _didFinish;
  BOOL _didMakeCalendars;
  BOOL _isSecondRefresh;
  int _nextCalendarOrder;
}

@property (retain, nonatomic) NSString *calendarHomeSyncToken;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *outstandingTasksGroup;
@property (nonatomic) BOOL forceClearCalendarHomeSyncToken;
@property (@dynamic, nonatomic) NSObject<CalDAVCalendarPropertyRefreshDelegate> *delegate;
@property (nonatomic) BOOL useCalendarHomeSyncReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPrincipal:(id)principal;
- (void)_finishRefresh;
- (void)_reallyRefreshCalendarProperties;
- (void)_sendDeletesForCalendars;
- (void)_sendAddsForCalendars;
- (void)continueRefreshFromSendingDeletes;
- (void)_handleCalendarPublish;
- (void)_prepareCalendarsBeforeRefresh;
- (void)_sendShareActionTasks;
- (void)refreshCalendarProperties;
- (int)_sharingStatusForContainer:(id)container;
- (id)_getSetPropertyStringTask:(id)task forName:(id)name andNamespace:(id)namespace forCalendar:(id)calendar atURL:(id)url;
- (id)_getSetPropertyStringTask:(id)task forName:(id)name andNamespace:(id)namespace forCalendar:(id)calendar atURL:(id)url ignoreErrors:(BOOL)errors;
- (id)_getIsAffectingAvailabilityCoreDAVItem:(id)davitem;
- (id)_getSetIsAffectingAvailabilityTask:(BOOL)task forCalendar:(id)calendar atURL:(id)url;
- (id)_getSetPropertyTaskWithCoreDAVItem:(id)davitem forCalendar:(id)calendar atURL:(id)url;
- (id)_getSetPropertyTaskWithCoreDAVItem:(id)davitem forCalendar:(id)calendar atURL:(id)url ignoreErrors:(BOOL)errors;
- (id)_getSetPropertiesTaskWithItemsToSet:(id)set itemsToRemove:(id)remove atURL:(id)url;
- (id)_generateTimeZoneString:(id)string;
- (id)_getMkcalendarTaskGroupForCalendar:(id)calendar;
- (BOOL)_handleMkCalTaskGroupError:(id)error forCalendar:(id)calendar;
- (void)_retryMkCalForCalendar:(id)calendar;
- (void)_initializePrincipalCalendarCache;
- (BOOL)_handleUpdateForCalendar:(id)calendar;
- (void)_updateDefaultSchedulingCalendarIfNeededForInboxCalendar:(id)calendar withContainer:(id)container;
- (void)_continueHandleContainerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;
- (id)_getDefaultMkCalendarForPrincipalTaskGroup:(id)group isEventCalendar:(BOOL)calendar;
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)principal;
- (void)containerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;
- (void)containerInfoSyncTask:(id)task retrievedAddedOrModifiedContainers:(id)containers removedContainerURLs:(id)urls;
- (void)containerInfoSyncTask:(id)task completedWithNewSyncToken:(id)token error:(id)error;
@end

#endif /* CalDAVCalendarPropertyRefreshOperation_h */
