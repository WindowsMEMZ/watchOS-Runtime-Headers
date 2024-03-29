//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDRapportMessenger_h
#define HDRapportMessenger_h
@import Foundation;

@class NSMutableDictionary, RPCompanionLinkClient;

@interface HDRapportMessenger : NSObject {
  /* instance variables */
  RPCompanionLinkClient *_rapportClient;
  NSMutableDictionary *_observersBySchemaIdentifier;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

/* instance methods */
- (id)initForCompanionDevice;
- (id)newRapportClient;
- (void)sendRequest:(id)request data:(id)data completion:(id /* block */)completion;
- (void)addObserver:(id)observer forSchemaIdentifier:(long long)identifier;
- (void)removeObserver:(id)observer forSchemaIdentifier:(long long)identifier;
- (void)removeObserver:(id)observer;
- (void)_handleIncomingRequest:(id)request responseHandler:(id /* block */)handler;
@end

#endif /* HDRapportMessenger_h */
