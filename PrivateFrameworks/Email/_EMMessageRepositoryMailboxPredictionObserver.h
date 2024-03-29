//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EMMessageRepositoryMailboxPredictionObserver_h
#define _EMMessageRepositoryMailboxPredictionObserver_h
@import Foundation;

#include "EMMessageRepositoryMailboxPredictionObserver_xpc-Protocol.h"
#include "EMRecoverableObserver-Protocol.h"

@class EFCancelationToken, NSArray, NSString;

@interface _EMMessageRepositoryMailboxPredictionObserver : NSObject<EMMessageRepositoryMailboxPredictionObserver_xpc, EMRecoverableObserver>

@property (readonly, copy, nonatomic) NSArray *messageObjectIDs;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) EFCancelationToken *cancelationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessageObjectIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)dealloc;
- (void)cancel;
- (void)performWithRemoteConnection:(id)connection;
- (void)recoverWithRemoteConnection:(id)connection;
- (void)_performWithRemoteConnection:(id)connection forRecovery:(BOOL)recovery;
- (void)mailboxWasPredicted:(id)predicted;
@end

#endif /* _EMMessageRepositoryMailboxPredictionObserver_h */
