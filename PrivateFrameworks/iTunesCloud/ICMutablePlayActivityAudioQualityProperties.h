//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMutablePlayActivityAudioQualityProperties_h
#define ICMutablePlayActivityAudioQualityProperties_h
@import Foundation;

#include "ICPlayActivityAudioQualityProperties.h"

@class NSString;

@interface ICMutablePlayActivityAudioQualityProperties : ICPlayActivityAudioQualityProperties

@property (@dynamic, nonatomic) long long bitRate;
@property (@dynamic, nonatomic) long long bitDepth;
@property (@dynamic, nonatomic) NSString *channelLayoutDescription;
@property (@dynamic, nonatomic) unsigned int codec;
@property (@dynamic, nonatomic) long long sampleRate;
@property (@dynamic, nonatomic) BOOL spatialized;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* ICMutablePlayActivityAudioQualityProperties_h */
