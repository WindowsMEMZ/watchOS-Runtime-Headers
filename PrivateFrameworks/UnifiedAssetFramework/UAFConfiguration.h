//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.4.1.0.0
//
#ifndef UAFConfiguration_h
#define UAFConfiguration_h
@import Foundation;

@interface UAFConfiguration : NSObject
/* class methods */
+ (BOOL)isValidValue:(id)value key:(id)key kind:(Class)kind required:(BOOL)required error:(id *)error;
+ (BOOL)isValid:(id)valid fileType:(id)type fileVersions:(id)versions error:(id *)error;
+ (BOOL)autoAssetFeatureEnabled:(id)enabled;
@end

#endif /* UAFConfiguration_h */
