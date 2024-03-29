//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NNCUpNextDataSource_h
#define NNCUpNextDataSource_h
@import Foundation;

#include "REElementDataSource.h"
#include "NNCompanionPreferencesNotifierDelegate-Protocol.h"

@class NNCompanionPreferencesNotifier, NSString;

@interface NNCUpNextDataSource : REElementDataSource<NNCompanionPreferencesNotifierDelegate>

@property (retain, nonatomic) NNCompanionPreferencesNotifier *preferencesNotifier;
@property BOOL fetchingElements;
@property (nonatomic) BOOL refreshingHeadlines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)_populateTextContent:(id)content withResult:(id)result;
+ (id)_elementFromResult:(id)result;
+ (id)bundleIdentifier;
+ (BOOL)wantsReloadForSignificantTimeChange;

/* instance methods */
- (id)init;
- (void)getElementsInSection:(id)section withHandler:(id /* block */)handler;
- (id)bundleIdentifier;
- (void)setState:(unsigned long long)state;
- (void)resume;
- (void)_refresh;
- (void)dealloc;
- (void)companionPreferencesNotifierDidNoticeUpdate:(id)update;
- (void)_refreshWithNotification:(id)notification;
@end

#endif /* NNCUpNextDataSource_h */
