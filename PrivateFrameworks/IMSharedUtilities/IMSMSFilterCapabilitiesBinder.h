//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMSMSFilterCapabilitiesBinder_h
#define IMSMSFilterCapabilitiesBinder_h
@import Foundation;

@interface IMSMSFilterCapabilitiesBinder : NSObject
/* class methods */
+ (long long)localizeSubAction:(long long)action;
+ (long long)deLocalizeSubAction:(long long)action action:(long long)action;
+ (BOOL)isValidSubAction:(long long)action subAction:(long long)action;
+ (void)executeCompletionBlockForFilterParamsUpdate:(id)update promo:(id)promo;
+ (BOOL)firstPartyFilterExtensionActive;
+ (void)IMMetricsCollectorForSMSSubClassification:(unsigned long long)classification;
+ (int)updateFilterParamsBindings:(id)bindings promotionalSubActions:(id)actions;
+ (void)handleSubClassificationFilterChange;
+ (void)handleSMSFilterCapabilitiesOptionsChange;
@end

#endif /* IMSMSFilterCapabilitiesBinder_h */
