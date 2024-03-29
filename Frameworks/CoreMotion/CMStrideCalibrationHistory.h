//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMStrideCalibrationHistory_h
#define CMStrideCalibrationHistory_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SRSampling-Protocol.h"

@class NSArray, NSString;

@interface CMStrideCalibrationHistory : NSObject<SRSampling, NSSecureCoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *calibrationTracks;
@property (retain, nonatomic) NSArray *rawSpeedToKValueBins;
@property (retain, nonatomic) NSArray *stepCadenceToStrideLengthBins;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)representation metadata:(id)metadata timestamp:(double)timestamp;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCalibrationTracks:(id)tracks rawSpeedToKValueBins:(id)bins stepCadenceToStrideLengthBins:(id)bins;
- (void)dealloc;
@end

#endif /* CMStrideCalibrationHistory_h */
