//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSWebProcessPlugIn_h
#define WBSWebProcessPlugIn_h
@import Foundation;

#include "WBSSearchProvider.h"
#include "WKWebProcessPlugIn-Protocol.h"

@class NSArray, NSMapTable, NSString, WKWebProcessPlugInController;

@interface WBSWebProcessPlugIn : NSObject<WKWebProcessPlugIn> {
  /* instance variables */
  NSMapTable *_browserContextControllersToWebProcessPlugInPageControllers;
}

@property (readonly, nonatomic) WKWebProcessPlugInController *plugInController;
@property (readonly, nonatomic) NSArray *searchEnginesForRedirectToSafeSearch;
@property (readonly, nonatomic) WBSSearchProvider *defaultSearchProvider;
@property (readonly, nonatomic) BOOL abTestingEnabled;
@property (readonly, nonatomic) unsigned long long abGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)isABTestingEnabled;
- (id)pageControllerWithBrowserContextController:(id)controller;
- (void)webProcessPlugIn:(id)in initializeWithObject:(id)object;
- (void)webProcessPlugIn:(id)in didCreateBrowserContextController:(id)controller;
- (void)webProcessPlugIn:(id)in willDestroyBrowserContextController:(id)controller;
- (void)didCreatePageController:(id)controller forBrowserContextController:(id)controller;
- (void)willDestroyPageController:(id)controller forBrowserContextController:(id)controller;
@end

#endif /* WBSWebProcessPlugIn_h */
