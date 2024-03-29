//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKWifiObserver_h
#define NPKWifiObserver_h
@import Foundation;

#include "NPKWiFiObserverDelegate-Protocol.h"

@protocol OS_dispatch_queue;

@interface NPKWifiObserver : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_callbackQueue;
  atomic BOOL _wiFiEnabled;
}

@property (weak, nonatomic) NSObject<NPKWiFiObserverDelegate> *delegate;

/* instance methods */
- (id)initWithCallbackQueue:(id)queue;
- (void)dealloc;
- (void)_setupInterface;
- (void)_updateWiFiStateAndNotifiyObserver:(BOOL)observer;
- (BOOL)isWifiEnabled;
@end

#endif /* NPKWifiObserver_h */
