//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 629.3.4.0.0
//
#ifndef AVAudioDeviceTestResult_h
#define AVAudioDeviceTestResult_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData;

@interface AVAudioDeviceTestResult : NSObject<NSSecureCoding>

@property (nonatomic) long long outputID;
@property (nonatomic) long long inputID;
@property (nonatomic) double sampleRate;
@property (nonatomic) double correlationValue;
@property (readonly, nonatomic) NSData *data;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithData:(id)data inputID:(long long)id outputID:(long long)id sampleRate:(double)rate correlationValue:(double)value;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* AVAudioDeviceTestResult_h */
