//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLocationParameter_h
#define WFLocationParameter_h
@import Foundation;

#include "WFParameter.h"

@interface WFLocationParameter : WFParameter

@property (readonly, nonatomic) BOOL defaultToCurrentLocation;
@property (readonly, nonatomic) BOOL allowsTextOnlyLocations;
@property (readonly, nonatomic) BOOL allowsCurrentLocation;
@property (readonly, nonatomic) BOOL skipsProcessingCurrentLocation;
@property (readonly, nonatomic) double currentLocationAccuracy;

/* instance methods */
- (Class)singleStateClass;
- (id)initWithDefinition:(id)definition;
- (id)defaultSerializedRepresentation;
@end

#endif /* WFLocationParameter_h */
