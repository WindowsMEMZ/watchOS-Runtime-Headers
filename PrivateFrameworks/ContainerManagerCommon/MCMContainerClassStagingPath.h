//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMContainerClassStagingPath_h
#define MCMContainerClassStagingPath_h
@import Foundation;

#include "MCMContainerClassPath.h"

@interface MCMContainerClassStagingPath : MCMContainerClassPath
/* class methods */
+ (id)containerPathForUserIdentity:(id)identity containerClass:(unsigned long long)class;
+ (id)stagingGlobalURL;
+ (id)stagingURLWithUserIdentity:(id)identity;
+ (id)_globalStagingComponent;
+ (id)_stagingComponent;
@end

#endif /* MCMContainerClassStagingPath_h */
