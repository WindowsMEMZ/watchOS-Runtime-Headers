//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaKitContentReporter_h
#define MPMediaKitContentReporter_h
@import Foundation;

@class NSDictionary, NSOperation, NSOperationQueue, NSString;

@interface MPMediaKitContentReporter : NSObject {
  /* instance variables */
  NSOperationQueue *_operationQueue;
  NSDictionary *_reportConcernBagDictionary;
  NSString *contentReportKindStringForType;
  NSString *contentReportTypeStringForType;
  NSOperation *contentReporterURLOperation;
}

/* class methods */
+ (id)sharedReporter;

/* instance methods */
- (id)init;
- (void)submitReport:(id)report completion:(id /* block */)completion;
- (void)_performWithBag:(id /* block */)bag;
- (id)reportsForType:(long long)type contentID:(id)id commentText:(id)text concernParentItemID:(id)id concernParentItemType:(id)type;
- (id)_dictionariesForType:(long long)type;
- (id)_reportConcernBagDictionary;
- (id)contentReportKindStringForType:(long long)type;
- (id)contentReportTypeStringForType:(long long)type;
- (id)contentReporterURLOperation:(id)urloperation dictionary:(id)dictionary withCompletion:(id /* block */)completion;
- (id)urlLoadRequestWithRequest:(id)request requestContext:(id)context;
@end

#endif /* MPMediaKitContentReporter_h */
