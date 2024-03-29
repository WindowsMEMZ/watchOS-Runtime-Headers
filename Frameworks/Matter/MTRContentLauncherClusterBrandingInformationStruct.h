//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRContentLauncherClusterBrandingInformationStruct_h
#define MTRContentLauncherClusterBrandingInformationStruct_h
@import Foundation;

#include "MTRContentLauncherClusterStyleInformationStruct.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface MTRContentLauncherClusterBrandingInformationStruct : NSObject<NSCopying>

@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *background;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *logo;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *progressBar;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *splash;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *waterMark;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* MTRContentLauncherClusterBrandingInformationStruct_h */
