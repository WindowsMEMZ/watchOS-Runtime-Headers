//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDWatchConfiguration_h
#define HMDWatchConfiguration_h
@import Foundation;

#include "HMFObject.h"

@class NSDictionary, NSString, NSUUID;

@interface HMDWatchConfiguration : HMFObject

@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSDictionary *metadataConfig;
@property (retain, nonatomic) NSDictionary *homeConfig;
@property (retain, nonatomic) NSUUID *primaryHome;

/* instance methods */
- (id)initWithUniqueID:(id)id;
- (id)description;
- (void)setHomeConfiguration:(id)configuration;
- (void)setConfigVersion:(id)version forHome:(id)home;
@end

#endif /* HMDWatchConfiguration_h */
