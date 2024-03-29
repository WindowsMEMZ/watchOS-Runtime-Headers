//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNObservableContractEnforcement_h
#define CNObservableContractEnforcement_h
@import Foundation;

#include "CNObservableContractTerminationContext.h"
#include "CNObserver-Protocol.h"

@class NSString;

@interface CNObservableContractEnforcement : NSObject<CNObserver> {
  /* instance variables */
  unsigned long long _state;
  CNObservableContractTerminationContext *_terminationContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)shouldEnforceRxProtocols;
+ (BOOL)shouldSwizzleNilResults;
+ (id)os_log;

/* instance methods */
- (void)observerDidReceiveResult:(id)result;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)error;
@end

#endif /* CNObservableContractEnforcement_h */
