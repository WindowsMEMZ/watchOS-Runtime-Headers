//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableQSSVersionInfo_h
#define FTMutableQSSVersionInfo_h
@import Foundation;

#include "FTQSSVersionInfo.h"

@class NSString;

@interface FTMutableQSSVersionInfo : FTQSSVersionInfo

@property (copy, nonatomic) NSString *qss_version_server;
@property (copy, nonatomic) NSString *qss_version_brane;
@property (copy, nonatomic) NSString *qss_version_serverkit;
@property (copy, nonatomic) NSString *qss_version_siritts;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableQSSVersionInfo_h */
