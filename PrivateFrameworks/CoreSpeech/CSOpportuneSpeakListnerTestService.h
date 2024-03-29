//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSOpportuneSpeakListnerTestService_h
#define CSOpportuneSpeakListnerTestService_h
@import Foundation;

#include "CSOpportuneSpeakListener.h"
#include "CSOpportuneSpeakListenerDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakListnerTestService : NSObject<CSOpportuneSpeakListenerDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  int _notifyToken;
  CSOpportuneSpeakListener *listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)start;
- (void)receiveOpportuneSpeakListenerStart;
- (void)receiveOpportuneSpeakListenerStop;
- (void)opportuneSpeakListener:(id)listener hasRemoteVADAvailable:(BOOL)vadavailable;
- (void)opportuneSpeakListener:(id)listener hasVADAvailable:(BOOL)vadavailable;
- (void)opportuneSpeakListener:(id)listener didStopUnexpectedly:(BOOL)unexpectedly;
@end

#endif /* CSOpportuneSpeakListnerTestService_h */
