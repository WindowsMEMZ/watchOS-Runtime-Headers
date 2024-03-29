//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 320.100.1.0.0
//
#ifndef TPSCallForwardingController_h
#define TPSCallForwardingController_h
@import Foundation;

#include "TPSCallForwardingControllerDelegate-Protocol.h"
#include "TPSCallForwardingRequestController.h"
#include "TPSCarrierBundleController.h"
#include "TPSCarrierBundleControllerDelegate-Protocol.h"
#include "TPSRequestControllerDelegate-Protocol.h"

@class CTCallForwardingValue, CTXPCServiceSubscriptionContext, NSArray, NSDictionary, NSString;

@interface TPSCallForwardingController : NSObject<TPSCarrierBundleControllerDelegate, TPSRequestControllerDelegate>

@property (nonatomic) BOOL unloading;
@property (readonly, nonatomic) TPSCarrierBundleController *carrierBundleController;
@property (readonly, nonatomic) TPSCallForwardingRequestController *requestController;
@property (readonly, copy, nonatomic) NSDictionary *carrierBundleLocalizedStringKeys;
@property (readonly, copy, nonatomic) NSString *subscriptionISOCountryCode;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic) long long currentServiceType;
@property (nonatomic) long long pendingServiceType;
@property (readonly, nonatomic) BOOL conditionalServiceLoading;
@property (readonly, copy, nonatomic) NSArray *conditionalServiceRequests;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceBusyValue;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceUnansweredValue;
@property (retain, nonatomic) CTCallForwardingValue *conditionalServiceUnreachableValue;
@property (readonly, nonatomic) BOOL unconditionalServiceLoading;
@property (readonly, copy, nonatomic) NSArray *unconditionalServiceRequests;
@property (retain, nonatomic) CTCallForwardingValue *unconditionalServiceValue;
@property (readonly, nonatomic) BOOL loading;
@property (weak, nonatomic) NSObject<TPSCallForwardingControllerDelegate> *delegate;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) BOOL conditionalServiceAvailable;
@property (readonly, nonatomic) long long conditionalServiceState;
@property (copy, nonatomic) NSString *conditionalServiceBusyPhoneNumber;
@property (copy, nonatomic) NSString *conditionalServiceUnansweredPhoneNumber;
@property (copy, nonatomic) NSString *conditionalServiceUnreachablePhoneNumber;
@property (readonly, copy, nonatomic) NSString *localizedConditionalBusyTitle;
@property (readonly, copy, nonatomic) NSString *localizedConditionalUnansweredTitle;
@property (readonly, copy, nonatomic) NSString *localizedConditionalUnreachableTitle;
@property (readonly, nonatomic) long long unconditionalServiceState;
@property (copy, nonatomic) NSString *unconditionalServicePhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithSubscriptionContext:(id)context;
- (BOOL)isLoading;
- (void)resetPendingServiceType;
- (void)updateServiceType:(long long)type;
- (void)enableConditionalServiceIfNeeded;
- (BOOL)isConditionalServiceAvailable;
- (BOOL)isConditionalServiceLoading;
- (void)enableUnconditionalServiceIfNeeded;
- (BOOL)isUnconditionalServiceLoading;
- (id)localizedCarrierBundleStringForKey:(id)key;
- (void)sendConditionalServicesRequest;
- (void)sendUnconditionalServicesRequest;
- (void)sendServicesRequest;
- (void)sendSetAllServicesDisabledRequest;
- (void)sendSetUnconditionalServiceDisabledRequest;
- (void)sendSetRequestForValue:(id)value;
- (void)sendEnableSetRequestForValue:(id)value;
- (void)requestController:(id)controller didReceiveResponse:(id)response;
- (BOOL)isUnloading;
@end

#endif /* TPSCallForwardingController_h */
