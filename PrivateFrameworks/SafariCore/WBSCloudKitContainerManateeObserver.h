//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSCloudKitContainerManateeObserver_h
#define WBSCloudKitContainerManateeObserver_h
@import Foundation;

#include "WBSCloudKitContainerManateeObserving-Protocol.h"

@class CKContainer, NSMutableArray, NSString;
@protocol OS_dispatch_queue, WBSAppleAccountInformationProviding;

@interface WBSCloudKitContainerManateeObserver : NSObject<WBSCloudKitContainerManateeObserving> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  CKContainer *_container;
  BOOL _determiningManateeState;
  long long _currentState;
  NSMutableArray *_stateDeterminationCompletionBlocks;
  NSObject<WBSAppleAccountInformationProviding> *_appleAccountInformationProvider;
}

@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (copy, nonatomic) id /* block */ stateChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContainerIdentifier:(id)identifier appleAccountInformationProvider:(id)provider;
- (void)_accountChanged:(id)changed;
- (void)_determineManateeStateWithCompletion:(id /* block */)completion;
- (void)determineManateeStateWithCompletion:(id /* block */)completion;
@end

#endif /* WBSCloudKitContainerManateeObserver_h */
