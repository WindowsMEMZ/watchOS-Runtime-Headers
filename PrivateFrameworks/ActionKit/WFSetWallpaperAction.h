//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSetWallpaperAction_h
#define WFSetWallpaperAction_h
@import Foundation;

#include "WFAction.h"

@class NSUUID;

@interface WFSetWallpaperAction : WFAction

@property (retain, nonatomic) NSUUID *createdPosterConfigurationUUID;

/* instance methods */
- (id)contentDestinationWithError:(id *)error;
- (id)smartPromptWithContentDescription:(id)description contentDestination:(id)destination workflowName:(id)name;
@end

#endif /* WFSetWallpaperAction_h */
