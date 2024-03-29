//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIBacklightRemote_h
#define CSLUIBacklightRemote_h
@import Foundation;

#include "BLSAssertionObserving-Protocol.h"
#include "CSLUIBacklightRemoteDelegate-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class BLSAssertion, NSPointerArray, NSString, NSXPCListener;

@interface CSLUIBacklightRemote : NSObject<NSXPCListenerDelegate, CSLUIBacklightRemoteDelegate, BLSAssertionObserving>

@property (retain, nonatomic) NSPointerArray *clients;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) BLSAssertion *blsAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)carouselSetBacklight:(BOOL)backlight isWakeGesture:(BOOL)gesture timeoutSeconds:(double)seconds completion:(id /* block */)completion;
- (void)carouselCoverGestureWithCompletion:(id /* block */)completion;
- (void)assertion:(id)assertion didCancelWithError:(id)error;
@end

#endif /* CSLUIBacklightRemote_h */
