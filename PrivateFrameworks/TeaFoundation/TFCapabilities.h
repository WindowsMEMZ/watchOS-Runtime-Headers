//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 930.0.0.0.0
//
#ifndef TFCapabilities_h
#define TFCapabilities_h
@import Foundation;

@interface TFCapabilities : NSObject
/* class methods */
+ (BOOL)isInternalBuild;
+ (BOOL)hasExtendedColorDisplay;
+ (BOOL)isHardwareKeyboardAttached;
+ (BOOL)isTall;
@end

#endif /* TFCapabilities_h */
