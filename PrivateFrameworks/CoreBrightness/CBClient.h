//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1603.60.7.0.0
//
#ifndef CBClient_h
#define CBClient_h
@import Foundation;

#include "CBAdaptationClient.h"
#include "CBBlueLightClient.h"

@interface CBClient : NSObject

@property (readonly) CBBlueLightClient *blueLightClient;
@property (readonly) CBAdaptationClient *adaptationClient;

/* class methods */
+ (BOOL)supportsBlueLightReduction;
+ (BOOL)supportsAdaptation;

/* instance methods */
- (id)init;
@end

#endif /* CBClient_h */
