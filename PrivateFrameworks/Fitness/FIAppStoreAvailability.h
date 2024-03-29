//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIAppStoreAvailability_h
#define FIAppStoreAvailability_h
@import Foundation;

@interface FIAppStoreAvailability : NSObject
/* class methods */
+ (void)fetchIsFitnessAvailableForDeviceWithCompletion:(id /* block */)completion;
+ (BOOL)_isDeviceTablet;
+ (void)isFitnessPlusStorefrontContentAvailableWithCompletion:(id /* block */)completion;
+ (void)_isSupportedDeviceAvailableWithCompletion:(id /* block */)completion;
@end

#endif /* FIAppStoreAvailability_h */
