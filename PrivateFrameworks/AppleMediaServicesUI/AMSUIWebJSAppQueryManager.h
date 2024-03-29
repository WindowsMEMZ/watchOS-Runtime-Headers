//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIWebJSAppQueryManager_h
#define AMSUIWebJSAppQueryManager_h
@import Foundation;

#include "AMSUIWebJSAppQueryManagerDelegate-Protocol.h"
#include "ASDAppQueryResultsObserver-Protocol.h"

@class NSMutableDictionary, NSString;

@interface AMSUIWebJSAppQueryManager : NSObject<ASDAppQueryResultsObserver>

@property (weak, nonatomic) NSObject<AMSUIWebJSAppQueryManagerDelegate> *delegate;
@property (readonly, nonatomic) NSMutableDictionary *observingQueries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)invalidate;
- (id)queryAppsWithBundleIDs:(id)ids startObserving:(BOOL)observing;
- (id)queryAppsWithStoreItemIDs:(id)ids startObserving:(BOOL)observing;
- (void)stopObservingAllApps;
- (void)stopObservingAppsWithBundleIDs:(id)ids;
- (void)stopObservingAppsWithStoreItemIDs:(id)ids;
- (void)appQuery:(id)query resultsDidChange:(id)change;
- (id)_encodeApp:(id)app;
- (id)_executeAppQuery:(id)query;
- (void)_postMediaQueryResultsChangeEventWithApps:(id)apps;
@end

#endif /* AMSUIWebJSAppQueryManager_h */
