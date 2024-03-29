//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFlipbookComplicationDataSource_h
#define NTKFlipbookComplicationDataSource_h
@import Foundation;

#include "NTKComplicationDataSource.h"

@interface NTKFlipbookComplicationDataSource : NTKComplicationDataSource
/* class methods */
+ (BOOL)acceptsComplicationType:(unsigned long long)type forDevice:(id)device;
+ (BOOL)acceptsComplicationFamily:(long long)family forDevice:(id)device;

/* instance methods */
- (Class)richComplicationDisplayViewClassForDevice:(id)device;
- (BOOL)supportsTapAction;
- (unsigned long long)timelineAnimationBehavior;
- (id)currentSwitcherTemplate;
- (BOOL)alwaysShowIdealizedTemplateInSwitcher;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)handler;
- (void)getLaunchURLForTimelineEntryDate:(id)date timeTravelDate:(id)date withHandler:(id /* block */)handler;
- (id)complicationApplicationIdentifier;
- (id)_richCornerTemplateWithShouldDisplayIdealizeState:(BOOL)state;
@end

#endif /* NTKFlipbookComplicationDataSource_h */
