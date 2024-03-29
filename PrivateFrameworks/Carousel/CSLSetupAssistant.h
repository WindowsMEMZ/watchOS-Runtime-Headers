//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSetupAssistant_h
#define CSLSetupAssistant_h
@import Foundation;

#include "CSLSetupStatusProviding-Protocol.h"
#include "CUISSOSValidator-Protocol.h"
#include "IOSSHLApplication.h"

@class CSLPRFConcurrentObserverStore, NSString;
@protocol OS_dispatch_queue;

@interface CSLSetupAssistant : NSObject<CUISSOSValidator, CSLSetupStatusProviding> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_dispatch_queue> *_queue;
  CSLPRFConcurrentObserverStore *_observers;
}

@property (readonly, nonatomic) BOOL inSetup;
@property (readonly, nonatomic) IOSSHLApplication *setupApplication;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long setupStatus;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)setupCompleted;
- (BOOL)isInSetup;
- (void)isInSetupAsync:(id /* block */)async;
- (BOOL)isInSetup_uncached;
- (BOOL)_queue_isInSetup_uncached;
- (void)applicationDidFinishLaunching;
- (BOOL)isOrShouldBeRunning;
- (BOOL)shouldBeginSOSCountdown:(id *)soscountdown;
- (BOOL)shouldBeginSirenCountdown:(id *)countdown;
@end

#endif /* CSLSetupAssistant_h */
