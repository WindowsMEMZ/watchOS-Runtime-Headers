//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef AVCTestMonitorInjectAudioConfig_h
#define AVCTestMonitorInjectAudioConfig_h
@import Foundation;

@class NSString;

@interface AVCTestMonitorInjectAudioConfig : NSObject

@property (nonatomic) int injectAudioConfigType;
@property (nonatomic) double amplitude;
@property (nonatomic) NSString *audioFileName;
@property (nonatomic) double startHostTime;
@property (nonatomic) double loopLength;

@end

#endif /* AVCTestMonitorInjectAudioConfig_h */
