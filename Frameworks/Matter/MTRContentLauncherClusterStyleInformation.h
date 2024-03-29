//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRContentLauncherClusterStyleInformation_h
#define MTRContentLauncherClusterStyleInformation_h
@import Foundation;

#include "MTRContentLauncherClusterStyleInformationStruct.h"
#include "MTRContentLauncherClusterDimensionStruct.h"

@class NSString;

@interface MTRContentLauncherClusterStyleInformation : MTRContentLauncherClusterStyleInformationStruct

@property (copy, @dynamic, nonatomic) NSString *color;
@property (copy, @dynamic, nonatomic) MTRContentLauncherClusterDimensionStruct *size;

@end

#endif /* MTRContentLauncherClusterStyleInformation_h */
