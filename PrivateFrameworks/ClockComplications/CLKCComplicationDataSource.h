//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKCComplicationDataSource_h
#define CLKCComplicationDataSource_h
@import Foundation;

#include "CLKCComplication.h"
#include "CLKCComplicationDataSourceContext.h"

@class CLKDevice;
@protocol CLKCComplicationDataSourceDelegate;

@interface CLKCComplicationDataSource : NSObject

@property (readonly, nonatomic) CLKCComplication *complication;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) CLKCComplicationDataSourceContext *context;
@property (weak, nonatomic) NSObject<CLKCComplicationDataSourceDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long timelineAnimationBehavior;
@property (readonly, nonatomic) BOOL supportsTapAction;

/* class methods */
+ (long long)tritiumUpdatePriority;
+ (BOOL)hasSensitiveUI;
+ (BOOL)acceptsComplicationFamily:(long long)family forDevice:(id)device;
+ (BOOL)wantsToSkipPauseWhenEnteringTritium;

/* instance methods */
- (id)init;
- (id)initWithComplication:(id)complication family:(long long)family forDevice:(id)device;
- (id)initWithComplication:(id)complication family:(long long)family forDevice:(id)device context:(id)context;
- (void)becomeActive;
- (void)becomeInactive;
- (void)pause;
- (void)resume;
- (void)pauseAnimations;
- (void)resumeAnimations;
- (void)getLaunchURLForTimelineEntryDate:(id)date timeTravelDate:(id)date withHandler:(id /* block */)handler;
- (void)didTouchDownInView:(id)view;
- (void)didTouchUpInsideView:(id)view;
- (BOOL)alwaysShowIdealizedTemplateInSwitcher;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (id)sampleTemplate;
- (id)lockedTemplate;
- (id)privacyTemplate;
- (id)alwaysOnTemplate;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)handler;
- (void)getTimelineStartDateWithHandler:(id /* block */)handler;
- (void)getTimelineEndDateWithHandler:(id /* block */)handler;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)handler;
- (void)getTimelineEntriesBeforeDate:(id)date limit:(unsigned long long)limit withHandler:(id /* block */)handler;
- (void)getTimelineEntriesAfterDate:(id)date limit:(unsigned long long)limit withHandler:(id /* block */)handler;
- (void)getDesiredUpdateIntervalWithHandler:(id /* block */)handler;
@end

#endif /* CLKCComplicationDataSource_h */
