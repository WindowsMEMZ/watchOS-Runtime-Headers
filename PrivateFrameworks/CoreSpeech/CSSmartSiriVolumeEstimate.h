//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSmartSiriVolumeEstimate_h
#define CSSmartSiriVolumeEstimate_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CSSmartSiriVolumeEstimate : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *debugLogPath;
@property (readonly, nonatomic) float volumeEstimate;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithVolumeEstimate:(float)estimate debugLogFile:(id)file;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CSSmartSiriVolumeEstimate_h */
