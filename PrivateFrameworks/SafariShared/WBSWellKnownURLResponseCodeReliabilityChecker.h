//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSWellKnownURLResponseCodeReliabilityChecker_h
#define WBSWellKnownURLResponseCodeReliabilityChecker_h
@import Foundation;

@class NSOperationQueue, NSURL, NSURLSession;

@interface WBSWellKnownURLResponseCodeReliabilityChecker : NSObject {
  /* instance variables */
  NSURL *_url;
  NSOperationQueue *_fetchOperationQueue;
  NSURLSession *_session;
  id /* block */ _completion;
}

/* instance methods */
- (id)initWithURL:(id)url;
- (void)checkReliabilityWithCompletion:(id /* block */)completion;
- (void)cancel;
@end

#endif /* WBSWellKnownURLResponseCodeReliabilityChecker_h */
