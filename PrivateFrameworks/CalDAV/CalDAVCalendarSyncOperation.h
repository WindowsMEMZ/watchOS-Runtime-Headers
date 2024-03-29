//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVCalendarSyncOperation_h
#define CalDAVCalendarSyncOperation_h
@import Foundation;

#include "CalDAVOperation.h"
#include "CalDAVCalendar-Protocol.h"

@class NSError, NSString;
@protocol CalDAVCalendarSyncDelegate;

@interface CalDAVCalendarSyncOperation : CalDAVOperation {
  /* instance variables */
  NSError *_savedError;
  NSString *_nextCtag;
  NSString *_nextSyncToken;
  NSObject<CalDAVCalendar> *_calendar;
  NSError *_reportJunkError;
  unsigned long long _currentStage;
}

@property (@dynamic, nonatomic) NSObject<CalDAVCalendarSyncDelegate> *delegate;
@property (nonatomic) BOOL getScheduleTags;
@property (nonatomic) BOOL getScheduleChanges;

/* instance methods */
- (id)initWithPrincipal:(id)principal calendar:(id)calendar nextCtag:(id)ctag nextSyncToken:(id)token;
- (void)_finishWithError:(id)error;
- (id)_distantFutureEndDate;
- (void)syncCalendar;
- (void)_advanceStage;
- (void)_performNextStage;
- (void)_reportJunk:(id)junk;
- (void)_splitRecurrences;
- (void)_syncCalendar;
- (void)_processAddedOrModified:(id)modified removed:(id)removed;
- (void)_syncEventsForMerge;
- (id)copyLocalETagsForURLs:(id)urls inFolderWithURL:(id)url;
- (id)copyAllLocalURLsInFolderWithURL:(id)url;
- (BOOL)setLocalETag:(id)etag forItemWithURL:(id)url inFolderWithURL:(id)url;
- (BOOL)setLocalScheduleTag:(id)tag forItemWithURL:(id)url inFolderWithURL:(id)url;
- (BOOL)syncPutTask:(id)task completedWithNewETag:(id)etag error:(id)error;
- (BOOL)syncDeleteTask:(id)task error:(id)error;
- (void)containerSyncTask:(id)task retrievedAddedOrModifiedActions:(id)actions removed:(id)removed;
- (void)containerSyncTask:(id)task completedWithNewCTag:(id)ctag newSyncToken:(id)token addedOrModified:(id)modified removed:(id)removed error:(id)error;
- (void)reportJunkAction:(id)action completedWithError:(id)error;
- (void)recurrenceSplitAction:(id)action completedWithUpdatedETag:(id)etag updatedScheduleTag:(id)tag createdURL:(id)url createdETag:(id)etag createdScheduleTag:(id)tag;
- (void)recurrenceSplitAction:(id)action failedWithError:(id)error;
@end

#endif /* CalDAVCalendarSyncOperation_h */
