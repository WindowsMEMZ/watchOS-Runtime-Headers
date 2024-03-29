//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharedPeerPaymentWebServiceArchiver_h
#define PKSharedPeerPaymentWebServiceArchiver_h
@import Foundation;

#include "PKPeerPaymentService.h"
#include "PKPeerPaymentWebServiceArchiver-Protocol.h"

@class NSString;

@interface PKSharedPeerPaymentWebServiceArchiver : NSObject<PKPeerPaymentWebServiceArchiver> {
  /* instance variables */
  PKPeerPaymentService *_peerPaymentService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPeerPaymentService:(id)service;
- (void)archiveContext:(id)context;
@end

#endif /* PKSharedPeerPaymentWebServiceArchiver_h */
