//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFStorageServicePickerParameter_h
#define WFStorageServicePickerParameter_h
@import Foundation;

#include "WFEnumerationParameter.h"
#include "WFiCloudDriveAccessResource.h"

@class NSArray;

@interface WFStorageServicePickerParameter : WFEnumerationParameter {
  /* instance variables */
  NSArray *_possibleStates;
}

@property (retain, nonatomic) WFiCloudDriveAccessResource *iCloudDriveAccessResource;

/* class methods */
+ (id)referencedActionResourceClasses;

/* instance methods */
- (void)setActionResources:(id)resources;
- (id)accessoryImageForPossibleState:(id)state;
- (BOOL)isHidden;
- (id)possibleStates;
- (id)defaultSupportedVariableTypes;
- (id)localizedLabelForPossibleState:(id)state;
- (id)defaultSerializedRepresentation;
@end

#endif /* WFStorageServicePickerParameter_h */
