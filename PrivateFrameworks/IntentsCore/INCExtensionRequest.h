//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INCExtensionRequest_h
#define INCExtensionRequest_h
@import Foundation;

@class INWatchdogTimer, NSArray, NSError, NSExtension, NSOperationQueue, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface INCExtensionRequest : NSObject {
  /* instance variables */
  NSUUID *_requestIdentifier;
  INWatchdogTimer *_contextTimer;
  NSObject<OS_dispatch_queue> *_queue;
  NSOperationQueue *_requestOperationQueue;
  NSExtension *_extension;
  NSError *_error;
}

@property (retain, nonatomic) NSExtension *_extension;
@property (retain, nonatomic) NSError *_error;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *extensionInputItems;
@property (nonatomic) BOOL requiresTCC;
@property (nonatomic) BOOL requiresTrustCheck;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)startRequestForIntent:(id)intent completion:(id /* block */)completion;
- (void)reset;
- (id)_requestOperationQueue;
- (id)_extensionContextHost;
- (void)_resetExtensionContextHostWithCompletion:(id /* block */)completion;
- (void)_resetContextTimer;
- (void)_scheduleContextTimer;
- (void)_setExtension:(id)extension;
- (void)_setError:(id)error;
@end

#endif /* INCExtensionRequest_h */
