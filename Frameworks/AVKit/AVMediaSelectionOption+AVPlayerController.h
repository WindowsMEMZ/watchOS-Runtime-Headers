//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1088.10.0.0.0
//
#ifndef AVMediaSelectionOption_AVPlayerController_h
#define AVMediaSelectionOption_AVPlayerController_h
@import Foundation;

#include "AVObservationController.h"
#include "AVValueTiming.h"

@class AVAsset, AVAssetTrack, AVCoordinatedPlaybackSuspension, AVMediaSelectionOption, AVPlayer, AVPlayerItemPhotosensitivityMetadataHandler, BSSimpleAssertion, NSArray, NSDate, NSDictionary, NSError, NSNumber, NSString, NSTimer;
@protocol AVPlayerControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AVMediaSelectionOption (AVPlayerController)
/* class methods */
+ (id)avkit_offOption;
+ (id)avkit_autoOption;

/* instance methods */
- (id)avkit_displayName;
- (id)localizedDisplayName;
- (id)shortLocalizedDisplayName;
- (id)mediaRemoteIdentifier;
- (id)avkit_title;
- (id)avkit_persistentIdentifier;
- (BOOL)isAC3Only;
- (BOOL)isMain;
- (BOOL)isSDH;
- (BOOL)isCC;
- (BOOL)isEasyReader;
- (BOOL)isAuxiliary;
- (long long)languageCompare:(id)compare currentLanguageCode:(id)code currentLanguageIdentifier:(id)identifier;
@end

#endif /* AVMediaSelectionOption_AVPlayerController_h */
