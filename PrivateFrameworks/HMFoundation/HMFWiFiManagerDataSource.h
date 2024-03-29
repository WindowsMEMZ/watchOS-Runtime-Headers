//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFWiFiManagerDataSource_h
#define HMFWiFiManagerDataSource_h
@import Foundation;

#include "HMFObject.h"
#include "HMFWiFiManagerDataSource-Protocol.h"
#include "HMFWiFiManagerDataSourceDelegate-Protocol.h"
#include "HMFWifiNetworkAssociation.h"

@class NSNumber, NSString;

@interface HMFWiFiManagerDataSource : HMFObject<HMFWiFiManagerDataSource>

@property (weak, nonatomic) NSObject<HMFWiFiManagerDataSourceDelegate> *delegate;
@property (readonly) BOOL assertionActive;
@property (readonly) unsigned long long assertionOptions;
@property (nonatomic) BOOL wowAsserted;
@property (readonly, copy) HMFWifiNetworkAssociation *currentNetworkAssociation;
@property (readonly, copy, nonatomic) NSNumber *currentNetworkRSSI;
@property (readonly, nonatomic) BOOL captive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)MACAddressString;

/* instance methods */
- (id)initWithWorkQueue:(id)queue;
- (BOOL)isAssertionActive;
- (void)activateWithOptions:(unsigned long long)options;
- (void)deactivate;
- (BOOL)isWoWAsserted;
- (void)setWoWAsserted:(BOOL)wasserted;
- (BOOL)isCaptive;
- (void)performBlockAfterWoWReassertionDelay:(id /* block */)delay;
@end

#endif /* HMFWiFiManagerDataSource_h */
