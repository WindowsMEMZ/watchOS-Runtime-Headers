//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharingMessageDisplayInformationManager_h
#define PKSharingMessageDisplayInformationManager_h
@import Foundation;

@interface PKSharingMessageDisplayInformationManager : NSObject
/* class methods */
+ (id)displayInformationForAccessPass:(id)pass share:(id)share;
+ (id)displayInformationForAccessPass:(id)pass webService:(id)service;
+ (id)displayInformationForAccessPassType:(long long)type pass:(id)pass webService:(id)service;
@end

#endif /* PKSharingMessageDisplayInformationManager_h */
