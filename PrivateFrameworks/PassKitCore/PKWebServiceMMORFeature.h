//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKWebServiceMMORFeature_h
#define PKWebServiceMMORFeature_h
@import Foundation;

#include "PKWebServiceRegionFeature.h"

@class NSSet;

@interface PKWebServiceMMORFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSSet *supportedNetworks;

/* instance methods */
- (id)initWithDictionary:(id)dictionary region:(id)region;
@end

#endif /* PKWebServiceMMORFeature_h */
