//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2041.0.0.0.0
//
#ifndef CertUIUtilities_h
#define CertUIUtilities_h
@import Foundation;

@interface CertUIUtilities : NSObject
/* class methods */
+ (id)bundleIDFromAuditToken:(struct { unsigned int x0[8] } *)token;
+ (id)localizedAppTitleForBundleID:(id)id;
+ (id)_certUIBundle;
@end

#endif /* CertUIUtilities_h */
