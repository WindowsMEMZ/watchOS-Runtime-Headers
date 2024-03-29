//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUICompositeAlertAttributeDomainProvider_h
#define WNUICompositeAlertAttributeDomainProvider_h
@import Foundation;

#include "WNUIAlertAttributeDomainProvider-Protocol.h"

@class NSArray, NSString;

@interface WNUICompositeAlertAttributeDomainProvider : NSObject<WNUIAlertAttributeDomainProvider>

@property (readonly, nonatomic) NSArray *providers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultAlertsDomainProvider;

/* instance methods */
- (id)init;
- (id)initWithProviders:(id)providers;
- (id)alertAttributesForDomain:(id)domain;
@end

#endif /* WNUICompositeAlertAttributeDomainProvider_h */
