//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSModalAppXPCClient_h
#define CSLSModalAppXPCClient_h
@import Foundation;

#include "CSLSModalAppXPCClientDelegate-Protocol.h"
#include "CSLSModalAppXPCClientInterface-Protocol.h"
#include "CSLSModalAppXPCServerInterface-Protocol.h"

@class NSString, NSXPCConnection;

@interface CSLSModalAppXPCClient : NSObject<CSLSModalAppXPCClientInterface, CSLSModalAppXPCServerInterface> {
  /* instance variables */
  NSXPCConnection *_connection;
}

@property (readonly, nonatomic) BOOL active;
@property (weak, nonatomic) NSObject<CSLSModalAppXPCClientDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_handleInterruption;
- (void)updateSessionWithConfiguration:(id)configuration active:(BOOL)active;
- (id)_serviceWithErrorHandler:(id /* block */)handler;
- (void)startSessionWithConfiguration:(id)configuration options:(id)options completion:(id /* block */)completion;
- (void)endSessionWithConfiguration:(id)configuration completion:(id /* block */)completion;
@end

#endif /* CSLSModalAppXPCClient_h */
