//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 250.60.2.0.0
//
#ifndef MXMDiskMetric_h
#define MXMDiskMetric_h
@import Foundation;

#include "MXMMetric.h"
#include "MXMInstrument.h"

@class NSNumber, NSString;

@interface MXMDiskMetric : MXMMetric

@property (readonly, copy, nonatomic) NSString *processName;
@property (readonly, copy, nonatomic) NSNumber *processIdentifier;
@property (readonly, copy, @dynamic, nonatomic) MXMInstrument *instrument;

/* class methods */
+ (id)currentProcess;

/* instance methods */
- (id)initWithProcessIdentifier:(int)identifier;
- (id)initWithProcessName:(id)name;
- (id)initWithBundleIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)identifier filter:(id)filter;
- (BOOL)_shouldConstructProbe;
- (id)_constructProbe;
@end

#endif /* MXMDiskMetric_h */
