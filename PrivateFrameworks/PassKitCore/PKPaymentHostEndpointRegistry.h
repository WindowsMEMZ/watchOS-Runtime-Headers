//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentHostEndpointRegistry_h
#define PKPaymentHostEndpointRegistry_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PKPaymentHostEndpointRegistry : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_registrySerialQueue;
  NSMutableDictionary *_hostIdentifierToEndpointMap;
  NSMutableDictionary *_processIdentifierToHostIdentifiersMap;
}

/* instance methods */
- (id)init;
- (void)addListenerEndpoint:(id)endpoint forHostIdentifier:(id)identifier processIdentifier:(int)identifier;
- (id)takeListenerEndpointForHostIdentifier:(id)identifier;
- (void)removeListenerEndpointsForProcessIdentifier:(int)identifier;
- (id)debugDescription;
@end

#endif /* PKPaymentHostEndpointRegistry_h */
