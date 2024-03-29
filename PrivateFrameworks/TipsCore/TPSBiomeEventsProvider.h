//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSBiomeEventsProvider_h
#define TPSBiomeEventsProvider_h
@import Foundation;

#include "TPSEventsProvider.h"

@interface TPSBiomeEventsProvider : TPSEventsProvider
/* class methods */
+ (unsigned long long)_limitForContextualBiomeEvent:(id)event;
+ (id)_eventSinceDateForContextualEvent:(id)event;

/* instance methods */
- (void)queryEvents:(id)events;
- (void)_processProviderResults:(id)results bookmark:(id)bookmark forEvent:(id)event;
- (void)registerEventsForCallback:(id)callback;
- (void)registerEventsForWakingCallback:(id)callback clientIdentifier:(id)identifier;
- (void)deregisterEventsForCallback:(id)callback;
@end

#endif /* TPSBiomeEventsProvider_h */
