//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFWebProcessPlugInPageExtensionController_h
#define SFWebProcessPlugInPageExtensionController_h
@import Foundation;

@class NSMutableDictionary, WKWebProcessPlugInBrowserContextController, _WKRemoteObjectInterface;

@interface SFWebProcessPlugInPageExtensionController : NSObject {
  /* instance variables */
  WKWebProcessPlugInBrowserContextController *_browserContextController;
  _WKRemoteObjectInterface *_extensionControllerInterface;
  NSMutableDictionary *_extensionToScriptWorldMap;
}

/* instance methods */
- (id)initWithBrowserContextController:(id)controller;
- (void)dealloc;
- (void)_setUpExtensionControllerInterface;
- (void)_clearExtensionControllerInterface;
- (void)prepareJavaScriptWorldForSharingExtension:(id)extension javaScript:(id)script;
- (void)evaluateJavaScriptForSharingExtension:(id)extension extraArguments:(id)arguments completionHandler:(id /* block */)handler;
- (void)finalizeJavaScriptForSharingExtension:(id)extension arguments:(id)arguments;
- (void)clearExtensionScriptWorlds;
@end

#endif /* SFWebProcessPlugInPageExtensionController_h */
