//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUIRemotePhotoFutures_h
#define CNUIRemotePhotoFutures_h
@import Foundation;

@interface CNUIRemotePhotoFutures : NSObject
/* class methods */
+ (id)photoForContact:(id)contact;
+ (id)photoForContact:(id)contact userDefaults:(id)defaults;
+ (id)localPhotoForEmailAddresses:(id)addresses;
+ (id)directoryServicesPhotoForEmailAddresses:(id)addresses;
+ (id)gravatarPhotoForEmailAddresses:(id)addresses;
@end

#endif /* CNUIRemotePhotoFutures_h */
