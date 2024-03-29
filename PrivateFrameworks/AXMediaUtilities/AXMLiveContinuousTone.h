//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMLiveContinuousTone_h
#define AXMLiveContinuousTone_h
@import Foundation;

#include "AXMTone.h"

@interface AXMLiveContinuousTone : AXMTone

@property (readonly, nonatomic) double phase;
@property (nonatomic) unsigned long long framesRendered;
@property (nonatomic) BOOL releasing;
@property (nonatomic) unsigned long long releaseFrame;
@property (nonatomic) BOOL muted;

/* instance methods */
- (void)setFrequency:(double)frequency;
- (void)resetRelease;
- (void)startRelease;
- (id)initWithSampleRate:(double)rate envelope:(id)envelope;
- (void)renderInBuffer:(void *)buffer atFrame:(unsigned long long)frame numSamples:(unsigned long long)samples;
@end

#endif /* AXMLiveContinuousTone_h */
