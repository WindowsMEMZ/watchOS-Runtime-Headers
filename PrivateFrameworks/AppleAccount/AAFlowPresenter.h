//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAFlowPresenter_h
#define AAFlowPresenter_h
@import Foundation;

#include "AAFlowPresenterHostProtocol-Protocol.h"
#include "AAFlowPresenterProtocol-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface AAFlowPresenter : NSObject<NSXPCListenerDelegate, AAFlowPresenterProtocol, AAFlowPresenterHostProtocol>

@property (retain, nonatomic) NSXPCListener *remoteListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ presentationCompletion;

/* instance methods */
- (void)launchProcessWithUserInfo:(id)info;
- (void)flowFinishedWithError:(id)error completion:(id /* block */)completion;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)_callCompletionBlockWithError:(id)error;
- (void)dealloc;
@end

#endif /* AAFlowPresenter_h */
