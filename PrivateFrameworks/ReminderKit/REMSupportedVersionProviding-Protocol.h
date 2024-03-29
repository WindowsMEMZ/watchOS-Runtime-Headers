//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMSupportedVersionProviding_Protocol_h
#define REMSupportedVersionProviding_Protocol_h
@import Foundation;

@protocol REMSupportedVersionProviding 

@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

/* instance methods */
- (BOOL)isUnsupported;
@end

#endif /* REMSupportedVersionProviding_Protocol_h */
