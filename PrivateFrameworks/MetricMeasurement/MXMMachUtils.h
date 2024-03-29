//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 250.60.2.0.0
//
#ifndef MXMMachUtils_h
#define MXMMachUtils_h
@import Foundation;

@interface MXMMachUtils : NSObject
/* class methods */
+ (struct mach_timebase_info { unsigned int x0; unsigned int x1; } *)_timebase;
+ (double)_nanosecondsWithAbsoluteTime:(unsigned long long)time;
+ (double)_nanosecondsWithContinuousTime:(unsigned long long)time;
+ (unsigned long long)_absoluteTimeWithNanoseconds:(double)nanoseconds;
+ (id)_processNameWithBundleIdentifier:(id)identifier;
@end

#endif /* MXMMachUtils_h */
