//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentProvisioningTracker_h
#define PKPaymentProvisioningTracker_h
@import Foundation;

#include "PKCancelable-Protocol.h"
#include "PKPaymentProvisioningController.h"

@class NSString;

@interface PKPaymentProvisioningTracker : NSObject<PKCancelable> {
  /* instance variables */
  PKPaymentProvisioningController *_controller;
}

@property (readonly, nonatomic) BOOL canceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPaymentProvisioningController:(id)controller;
- (void)dealloc;
- (void)cancel;
- (BOOL)isCanceled;
@end

#endif /* PKPaymentProvisioningTracker_h */
