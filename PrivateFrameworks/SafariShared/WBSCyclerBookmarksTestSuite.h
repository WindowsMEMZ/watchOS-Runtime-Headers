//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSCyclerBookmarksTestSuite_h
#define WBSCyclerBookmarksTestSuite_h
@import Foundation;

#include "WBSCyclerItemListRepresentation.h"
#include "WBSCyclerIterationCounter.h"
#include "WBSCyclerOperationContext.h"
#include "WBSCyclerOperationalTestSuite-Protocol.h"
#include "WBSCyclerTestSuiteBookmarkAuxiliary.h"

@class NSArray, NSString;

@interface WBSCyclerBookmarksTestSuite : NSObject<WBSCyclerOperationalTestSuite> {
  /* instance variables */
  WBSCyclerOperationContext *_operationContext;
  WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
  WBSCyclerItemListRepresentation *_expectedTopLevelBookmarksFromPreviousIteration;
}

@property (readonly, copy, nonatomic) NSArray *operations;
@property (readonly, nonatomic) BOOL finished;
@property (retain, nonatomic) WBSCyclerIterationCounter *iterationCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)setValue:(id)value forConfigurationKey:(id)key;

/* instance methods */
- (id)init;
- (id)relativeProbabilitiesForOperationsWithTopLevelItem:(id)item;
- (void)runWithTarget:(id)target completionHandler:(id /* block */)handler;
- (BOOL)canHandleRequest:(id)request;
- (void)handleRequest:(id)request withTarget:(id)target completionHandler:(id /* block */)handler;
- (void)_validateServerBookmarksWithTarget:(id)target completionHandler:(id /* block */)handler;
- (void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)target completionHandler:(id /* block */)handler;
- (void)_validateServerBookmarksWithTarget:(id)target initialBookmarks:(id)bookmarks completionHandler:(id /* block */)handler;
- (void)_validateServerBookmarksAfterClearingLocallyWithTarget:(id)target initialBookmarks:(id)bookmarks completionHandler:(id /* block */)handler;
- (void)_performFinalServerBookmarkValidationAfterClearingAndSyncingWithInitialBookmarks:(id)bookmarks completionHandler:(id /* block */)handler;
- (id)_errorWithCode:(long long)code userInfo:(id)info;
- (id)_descriptionForErrorCode:(long long)code;
@end

#endif /* WBSCyclerBookmarksTestSuite_h */
