//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOBusinessInfoModuleConfiguration_h
#define GEOBusinessInfoModuleConfiguration_h
@import Foundation;

#include "GEOPDBusinessInfosModuleConfiguration.h"

@class NSArray;

@interface GEOBusinessInfoModuleConfiguration : NSObject {
  /* instance variables */
  GEOPDBusinessInfosModuleConfiguration *_businessInfosModuleConfig;
}

@property (readonly, nonatomic) NSArray *factoidItemIndexes;

/* instance methods */
- (id)initWithBusinessInfoModuleConfiguration:(id)configuration;
@end

#endif /* GEOBusinessInfoModuleConfiguration_h */
