//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANDevice_h
#define ANDevice_h
@import Foundation;

@interface ANDevice : NSObject
/* class methods */
+ (BOOL)isAudioAccessory;
+ (BOOL)isPad;
+ (BOOL)isPhone;
+ (int)deviceClass;
@end

#endif /* ANDevice_h */
