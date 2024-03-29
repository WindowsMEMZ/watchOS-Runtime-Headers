//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUCallFilterController_h
#define TUCallFilterController_h
@import Foundation;

#include "TUCallFilterControllerActions-Protocol.h"

@protocol OS_dispatch_queue;

@interface TUCallFilterController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) NSObject<TUCallFilterControllerActions> *actionsDelegate;
@property (readonly, nonatomic) BOOL silenceUnknownCallersEnabled;
@property (readonly, nonatomic) BOOL silenceUnknownFaceTimeCallersEnabled;

/* instance methods */
- (id)initWithActionsDelegate:(id)delegate serialQueue:(id)queue;
- (BOOL)isUnknownHandle:(id)handle;
- (BOOL)shouldRestrictDialRequest:(id)request;
- (BOOL)shouldRestrictDialRequest:(id)request performSynchronously:(BOOL)synchronously;
- (unsigned long long)callFilterStatusForDialRequest:(id)request;
- (id)restrictedContacts:(id)contacts callProvider:(id)provider;
- (id)policyForAddresses:(id)addresses forBundleIdentifier:(id)identifier;
- (BOOL)containsRestrictedHandle:(id)handle forBundleIdentifier:(id)identifier;
- (id)addressesToCheckForRestrictionsInConversation:(id)conversation;
- (BOOL)shouldRestrictConversation:(id)conversation performSynchronously:(BOOL)synchronously;
- (BOOL)shouldRestrictAddresses:(id)addresses performSynchronously:(BOOL)synchronously;
- (BOOL)containsRestrictedHandle:(id)handle forBundleIdentifier:(id)identifier performSynchronously:(BOOL)synchronously;
- (BOOL)shouldRestrictJoinConversationRequest:(id)request performSynchronously:(BOOL)synchronously;
- (BOOL)shouldRestrictAddresses:(id)addresses forBundleIdentifier:(id)identifier performSynchronously:(BOOL)synchronously;
- (BOOL)shouldRestrictAddresses:(id)addresses forBundleIdentifier:(id)identifier;
- (BOOL)willRestrictAddresses:(id)addresses forBundleIdentifier:(id)identifier;
- (BOOL)isUnknownAddress:(id)address normalizedAddress:(id)address forBundleIdentifier:(id)identifier;
- (id)bundleIdentifierForCallProvider:(id)provider;
@end

#endif /* TUCallFilterController_h */
