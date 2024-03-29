//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRPassFailIssueResponder_h
#define XRPassFailIssueResponder_h
@import Foundation;

#include "XRIssueResponder-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface XRPassFailIssueResponder : NSObject<XRIssueResponder> {
  /* instance variables */
  NSObject<XRIssueResponder> *_nextResponder;
  NSMutableArray *_uniqueErrors;
  NSObject<OS_dispatch_queue> *_uniqueErrorsQueue;
}

@property (readonly) BOOL failureOccurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNextResponder:(id)responder;
- (id)init;
- (void)handleIssue:(id)issue type:(short)type from:(id)from;
- (id)failures;
@end

#endif /* XRPassFailIssueResponder_h */
