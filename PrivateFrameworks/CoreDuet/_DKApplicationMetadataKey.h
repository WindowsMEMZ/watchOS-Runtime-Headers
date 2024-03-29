//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKApplicationMetadataKey_h
#define _DKApplicationMetadataKey_h
@import Foundation;

@interface _DKApplicationMetadataKey : NSObject
/* class methods */
+ (id)processIdentifier;
+ (id)backboardState;
+ (id)launchReason;
+ (id)extensionHostIdentifier;
+ (id)extensionContainingBundleIdentifier;
+ (id)isNativeArchitecture;
+ (id)dyldPlatform;
+ (id)shortVersionString;
+ (id)exactBundleVersion;
@end

#endif /* _DKApplicationMetadataKey_h */
