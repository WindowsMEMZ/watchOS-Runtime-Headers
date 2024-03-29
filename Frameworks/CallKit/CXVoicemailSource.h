//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXVoicemailSource_h
#define CXVoicemailSource_h
@import Foundation;

#include "CXVoicemailProviderHostProtocol-Protocol.h"
#include "CXVoicemailProviderVendorProtocol-Protocol.h"

@class NSString, NSURL;
@protocol CXVoicemailSourceDelegate, OS_dispatch_queue;

@interface CXVoicemailSource : NSObject<CXVoicemailProviderHostProtocol, CXVoicemailProviderVendorProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<CXVoicemailProviderVendorProtocol> *vendorProtocolDelegate;
@property (nonatomic) BOOL connected;
@property (weak, nonatomic) NSObject<CXVoicemailSourceDelegate> *delegate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) BOOL permittedToUsePrivateAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)bundle;
- (BOOL)isPermittedToUsePrivateAPI;
- (void)beginWithCompletionHandler:(id /* block */)handler;
- (void)registerWithConfiguration:(id)configuration;
- (void)requestTransaction:(id)transaction completionHandler:(id /* block */)handler;
- (void)reportNewVoicemailsWithUpdates:(id)updates;
- (void)reportVoicemailsUpdated:(id)updated;
- (void)reportVoicemailsRemovedWithUUIDs:(id)uuids;
- (void)actionCompleted:(id)completed completionHandler:(id /* block */)handler;
- (void)commitTransaction:(id)transaction;
- (void)handleActionTimeout:(id)timeout;
- (BOOL)isConnected;
@end

#endif /* CXVoicemailSource_h */
