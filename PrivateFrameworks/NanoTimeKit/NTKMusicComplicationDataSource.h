//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKMusicComplicationDataSource_h
#define NTKMusicComplicationDataSource_h
@import Foundation;

#include "NTKComplicationDataSource.h"
#include "NTKMediaComplicationController.h"
#include "NTKMediaComplicationControllerDelegate-Protocol.h"

@class CLKComplicationTemplate, CLKComplicationTimelineEntry, NSNumber;
@protocol OS_dispatch_queue;

@interface NTKMusicComplicationDataSource : NTKComplicationDataSource<NTKMediaComplicationControllerDelegate> {
  /* instance variables */
  NTKMediaComplicationController *_controller;
  CLKComplicationTimelineEntry *_musicEntry;
  NSNumber *_activeOriginIdentifier;
  BOOL _needsInvalidation;
  NSObject<OS_dispatch_queue> *_queue;
  CLKComplicationTemplate *_currentSwitcherTemplate;
  BOOL _isPaused;
  BOOL _needsInvalidate;
}

/* class methods */
+ (BOOL)wantsToSkipPauseWhenEnteringTritium;
+ (BOOL)acceptsComplicationType:(unsigned long long)type forDevice:(id)device;
+ (BOOL)acceptsComplicationFamily:(long long)family forDevice:(id)device;
+ (long long)tritiumUpdatePriority;
+ (BOOL)_shouldUseFallbackImagesForDevice:(id)device;

/* instance methods */
- (id)initWithComplication:(id)complication family:(long long)family forDevice:(id)device;
- (id)description;
- (BOOL)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;
- (id)currentSwitcherTemplate;
- (id)_defaultTimelineEntry;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)handler;
- (void)resume;
- (void)pause;
- (void)getLaunchURLForTimelineEntryDate:(id)date timeTravelDate:(id)date withHandler:(id /* block */)handler;
- (id)complicationApplicationIdentifier;
- (void)_invalidateIfNeeded;
- (id)controller:(id)controller requestPlayerPathWithRoute:(id)route;
- (void)controller:(id)controller didReplaceResponse:(id)response;
@end

#endif /* NTKMusicComplicationDataSource_h */
