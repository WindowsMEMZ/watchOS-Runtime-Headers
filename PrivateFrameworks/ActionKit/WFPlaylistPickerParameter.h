//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFPlaylistPickerParameter_h
#define WFPlaylistPickerParameter_h
@import Foundation;

#include "WFEnumerationParameter.h"
#include "WFAppleMusicAccessResource.h"
#include "WFPlaylistSubstitutableState.h"

@class NSArray;

@interface WFPlaylistPickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) BOOL showLibrary;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (retain, nonatomic) WFPlaylistSubstitutableState *entireLibraryState;
@property (nonatomic) BOOL generatingNotifications;
@property (retain, nonatomic) WFAppleMusicAccessResource *appleMusicAccessResource;

/* class methods */
+ (BOOL)hasPlaylistAccess;
+ (id)referencedActionResourceClasses;

/* instance methods */
- (Class)singleStateClass;
- (id)initWithDefinition:(id)definition;
- (void)setActionResources:(id)resources;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)authorizationStatusDidChange;
- (void)updateChangeNotificationRegistration;
- (void)possibleStatesDidChange;
- (id)localizedLabelForPossibleState:(id)state;
- (id)defaultSerializedRepresentation;
@end

#endif /* WFPlaylistPickerParameter_h */
