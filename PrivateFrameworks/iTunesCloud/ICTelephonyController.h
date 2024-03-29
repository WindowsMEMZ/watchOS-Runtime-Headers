//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICTelephonyController_h
#define ICTelephonyController_h
@import Foundation;

#include "CoreTelephonyClientDelegate-Protocol.h"
#include "CoreTelephonyClientSuppServicesDelegate-Protocol.h"

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;
@protocol OS_dispatch_queue;

@interface ICTelephonyController : NSObject<CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;
  CoreTelephonyClient *_telephonyClient;
  CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;
}

@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *providerName;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberCountryCode;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberNetworkCode;
@property (readonly, copy, nonatomic) NSString *IMEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedController;

/* instance methods */
- (id)_init;
- (void)dealloc;
- (BOOL)sendSMSWithText:(id)text toPhoneNumber:(id)number error:(id *)error;
- (void)activeSubscriptionsDidChange;
- (void)phoneNumberAvailable:(id)available;
- (void)phoneNumberChanged:(id)changed;
- (BOOL)_ensureTelephonyHandlesAreReady;
- (void)_handleActiveSubscriptionsDidChange;
- (id)_telephonyClient;
- (id)_telephonySubscriptionContext;
- (void)_updatePhoneNumberAllowingDidChangeNotification:(BOOL)notification;
@end

#endif /* ICTelephonyController_h */
