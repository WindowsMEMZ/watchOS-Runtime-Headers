//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CoreTelephonyClientCellularUsagePolicyDelegateInternal_Protocol_h
#define CoreTelephonyClientCellularUsagePolicyDelegateInternal_Protocol_h
@import Foundation;

@protocol CoreTelephonyClientCellularUsagePolicyDelegateInternal <NSObject>
@optional
/* instance methods */
- (void)reliableNetworkFallbackChanged:(BOOL)changed userEnabled:(BOOL)enabled;
- (void)lowDataModeChanged:(id)changed userEnabled:(BOOL)enabled;
- (void)smartDataModeChanged:(id)changed userEnabled:(BOOL)enabled;
- (void)interfaceCostExpensiveChanged:(id)changed isExpensive:(BOOL)expensive;
- (void)privacyProxyChanged:(struct { BOOL x0; BOOL x1; })changed;
@end

#endif /* CoreTelephonyClientCellularUsagePolicyDelegateInternal_Protocol_h */
