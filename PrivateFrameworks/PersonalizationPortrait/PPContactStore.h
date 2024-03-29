//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPContactStore_h
#define PPContactStore_h
@import Foundation;

#include "PPClientFeedbackHelper.h"
#include "PPClientStore-Protocol.h"
#include "PPFeedbackAccepting-Protocol.h"
#include "PPRecordMonitoringHelper.h"

@class NSString;

@interface PPContactStore : NSObject<PPFeedbackAccepting, PPClientStore> {
  /* instance variables */
  PPRecordMonitoringHelper *_monitoringHelper;
  PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, @dynamic, nonatomic) NSString *clientIdentifier;

/* instance methods */
- (id)init;
- (BOOL)iterRankedContactsWithQuery:(id)query error:(id *)error block:(id /* block */)block;
- (BOOL)iterContactNameRecordsForClient:(id)client error:(id *)error block:(id /* block */)block;
- (id)upcomingRelevantContactsForQuery:(id)query error:(id *)error;
- (id)contactHandlesForTopics:(id)topics error:(id *)error;
- (id)contactHandlesForSource:(id)source error:(id *)error;
- (void)registerFeedback:(id)feedback completion:(id /* block */)completion;
- (id)forwardingTargetForSelector:(SEL)selector;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)identifiers chosenContactIdentifier:(id)identifier completion:(id /* block */)completion;
- (id /* block */)_recordGenerator;
- (void)_sendChangesToDelegates;
- (void)_loadContactNameRecordsWithDelegate:(id)delegate;
- (BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)delegate error:(id *)error;
@end

#endif /* PPContactStore_h */
