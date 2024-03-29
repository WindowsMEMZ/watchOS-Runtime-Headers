//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNLSApplicationWorkspace_h
#define CNLSApplicationWorkspace_h
@import Foundation;

#include "CNLSApplicationWorkspace-Protocol.h"

@class NSString;
@protocol CNSchedulerProvider;

@interface CNLSApplicationWorkspace : NSObject<CNLSApplicationWorkspace>

@property (retain, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)launchServices;
+ (id)inProcessLaunchServices;
+ (id)remoteAdapter;

/* instance methods */
- (id)init;
- (id)initWithSchedulerProvider:(id)provider;
- (id)observableForApplicationsChangedWithSchedulerProvider:(id)provider;
- (id)applicationsAvailableForHandlingURLScheme:(id)urlscheme;
- (id)applicationsForUserActivityType:(id)type;
- (id)applicationForBundleIdentifier:(id)identifier;
- (void)openUserActivity:(id)activity inApplication:(id)application options:(id)options completionHandler:(id /* block */)handler;
- (void)openSensitiveURLInBackground:(id)background withOptions:(id)options;
- (void)openSensitiveURLInBackground:(id)background withOptions:(id)options completionHandler:(id /* block */)handler;
@end

#endif /* CNLSApplicationWorkspace_h */
