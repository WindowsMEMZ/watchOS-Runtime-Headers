//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWorkflowStatusPresenter_h
#define WFWorkflowStatusPresenter_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "WFDialogAlertPresenter-Protocol.h"
#include "WFDialogAlertPresenterDelegate-Protocol.h"
#include "WFWorkflowStatusPresenterDelegate-Protocol.h"

@class NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface WFWorkflowStatusPresenter : NSObject<NSXPCListenerDelegate, WFDialogAlertPresenter>

@property (nonatomic) BOOL launching;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *activeConnection;
@property (weak, nonatomic) NSObject<WFDialogAlertPresenterDelegate> *delegate;
@property (weak, nonatomic) NSObject<WFWorkflowStatusPresenterDelegate> *statusPresenterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL alertIsActive;

/* instance methods */
- (id)init;
- (BOOL)alertIsLaunching;
- (void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(id)identifier;
- (void)deactivateAlert;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (BOOL)isLaunching;
@end

#endif /* WFWorkflowStatusPresenter_h */
