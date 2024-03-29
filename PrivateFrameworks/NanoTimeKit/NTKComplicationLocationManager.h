//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationLocationManager_h
#define NTKComplicationLocationManager_h
@import Foundation;

#include "CLKComplicationObserver-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface NTKComplicationLocationManager : NSObject<CLKComplicationObserver> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  BOOL _isActive;
  NSMutableSet *_pendingBundleIds;
  NSMutableDictionary *_activeInUseAssertions;
  id /* block */ _callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifiersDidUpdateCallback:(id /* block */)callback;
- (void)dealloc;
- (void)reloadIdentifiers;
- (void)_updateActiveComplicationIdentifiers:(id)identifiers;
- (void)_setupNotificationObservers;
- (void)_tearDownNotificationObservers;
- (BOOL)_canBecomeActive;
- (void)_queue_resumeInUseAssertions;
- (void)_queue_pauseInUseAssertions;
- (void)_didReceiveDeviceLockStateDidChangeNotification;
- (void)complicationListDidChange;
@end

#endif /* NTKComplicationLocationManager_h */
