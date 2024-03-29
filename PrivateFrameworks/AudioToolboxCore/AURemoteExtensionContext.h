//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1387.3.4.0.0
//
#ifndef AURemoteExtensionContext_h
#define AURemoteExtensionContext_h
@import Foundation;

#include "NSExtensionContext.h"
#include "AURemoteHost.h"

@class AUAudioUnitViewService;

@interface AURemoteExtensionContext : NSExtensionContext {
  /* instance variables */
  AURemoteHost *_host;
  BOOL _isUIExtension;
  BOOL _isRunningInProcess;
}

@property (nonatomic) AUAudioUnitViewService *viewService;

/* class methods */
+ (BOOL)conformsToProtocol:(id)protocol;
+ (BOOL)instancesRespondToSelector:(SEL)selector;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

/* instance methods */
- (id)forwardingTargetForSelector:(SEL)selector;
- (id)initWithInputItems:(id)items listenerEndpoint:(id)endpoint contextUUID:(id)uuid;
- (id)iOSViewController;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)handler;
- (void)open:(id /* block */)open;
@end

#endif /* AURemoteExtensionContext_h */
