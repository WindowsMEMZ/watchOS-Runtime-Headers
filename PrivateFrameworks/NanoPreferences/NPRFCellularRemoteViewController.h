//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1108.10.0.0.0
//
#ifndef NPRFCellularRemoteViewController_h
#define NPRFCellularRemoteViewController_h
@import Foundation;

#include "_UIRemoteViewController.h"
#include "NPRFCellularSettingsViewServiceExportedInterface-Protocol.h"
#include "NPRFSettingsAlertRemoteViewControllerProtocol-Protocol.h"

@class NSString;

@interface NPRFCellularRemoteViewController : _UIRemoteViewController<NPRFSettingsAlertRemoteViewControllerProtocol, NPRFCellularSettingsViewServiceExportedInterface>

@property (copy, nonatomic) id /* block */ terminationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)handler;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

/* instance methods */
- (void)viewServiceDidTerminateWithError:(id)error;
- (void)dismissCellularSettings;
@end

#endif /* NPRFCellularRemoteViewController_h */
