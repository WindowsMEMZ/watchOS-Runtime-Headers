//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSRestrictions_h
#define AMSRestrictions_h
@import Foundation;

@interface AMSRestrictions : NSObject
/* class methods */
+ (BOOL)allowAccountModifications;
+ (BOOL)allowActiveAccountModifications;
+ (BOOL)eroticaAllowed;
+ (BOOL)explicitContentAllowed;
+ (BOOL)inAppPurchaseAllowed;
+ (BOOL)isParentalControlEnabled;
+ (long long)maximumMediaRank;
+ (BOOL)onDeviceDiagnosticsAllowed;
+ (BOOL)requirePasswordImmediately;
+ (long long)explicitContentSettingForBundleID:(id)id;
+ (id)rankForMediaType:(unsigned long long)type;
+ (id)_featureNameForMediaType:(unsigned long long)type;
@end

#endif /* AMSRestrictions_h */
