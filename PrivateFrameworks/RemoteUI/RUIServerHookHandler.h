//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIServerHookHandler_h
#define RUIServerHookHandler_h
@import Foundation;

#include "RUIServerHookDelegate-Protocol.h"
#include "RemoteUIController.h"

@class NSArray, NSMutableArray, NSString;
@protocol RUIServerHookHandlerDelegate;

@interface RUIServerHookHandler : NSObject<RUIServerHookDelegate> {
  /* instance variables */
  NSMutableArray *_hookIdentifiers;
  RemoteUIController *_remoteUIController;
}

@property (copy, nonatomic) NSArray *serverHooks;
@property (weak, nonatomic) NSObject<RUIServerHookHandlerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRemoteUIController:(id)uicontroller;
- (id)initWithRemoteUIController:(id)uicontroller hooks:(id)hooks;
- (void)_rebuildServerHookHandlers;
- (void)processObjectModel:(id)model isModal:(BOOL)modal;
- (void)_handleResponseForHook:(id)hook success:(BOOL)success error:(id)error attributes:(id)attributes objectModel:(id)model completion:(id /* block */)completion;
- (void)processObjectModel:(id)model isModal:(BOOL)modal completion:(id /* block */)completion;
- (void)processServerResponse:(id)response;
- (id)currentPresenter;
- (id)presentationContextForHook:(id)hook;
- (void)dismissObjectModelsAnimated:(BOOL)animated completion:(id /* block */)completion;
- (BOOL)isUserCancelError:(id)error;
- (id)_responseDataForResult:(BOOL)result withError:(id)error;
- (void)refreshWithRequest:(id)request completion:(id /* block */)completion;
- (void)_reloadUIWithInfo:(id)info attributes:(id)attributes initiatingObjectModel:(id)model completion:(id /* block */)completion;
- (id)_refreshRequestWithInfo:(id)info initiatingObjectModel:(id)model attributes:(id)attributes;
@end

#endif /* RUIServerHookHandler_h */
