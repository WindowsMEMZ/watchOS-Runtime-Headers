//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKHeartRateComplicationDataSource_h
#define NTKHeartRateComplicationDataSource_h
@import Foundation;

#include "NTKComplicationDataSource.h"
#include "NTKHeartRateModel.h"
#include "NTKHeartRateModelDelegate-Protocol.h"

@class NSString, NSTimer;

@interface NTKHeartRateComplicationDataSource : NTKComplicationDataSource<NTKHeartRateModelDelegate> {
  /* instance variables */
  BOOL _showingNowForRelativeTime;
}

@property (retain, nonatomic) NSTimer *invalidationTimer;
@property (retain, nonatomic) NTKHeartRateModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)acceptsComplicationType:(unsigned long long)type forDevice:(id)device;
+ (BOOL)acceptsComplicationFamily:(long long)family forDevice:(id)device;
+ (long long)tritiumUpdatePriority;

/* instance methods */
- (id)initWithComplication:(id)complication family:(long long)family forDevice:(id)device;
- (void)dealloc;
- (Class)richComplicationDisplayViewClassForDevice:(id)device;
- (void)resume;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)date timeTravelDate:(id)date withHandler:(id /* block */)handler;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)handler;
- (void)getTimelineEndDateWithHandler:(id /* block */)handler;
- (void)getTimelineEntriesAfterDate:(id)date limit:(unsigned long long)limit withHandler:(id /* block */)handler;
- (id)currentSwitcherTemplate;
- (id)privacyTemplate;
- (id)lockedTemplate;
- (id)_currentTimelineEntry;
- (id)_currentEntryModel;
- (void)_invalidate;
- (void)_startLessThanMinuteInvalidationTimerIfNecessary:(BOOL *)necessary;
- (void)_startInvalidationTimerWithTimeInterval:(double)interval;
- (void)model:(id)model updatedSample:(id)sample;
- (void)model:(id)model updatedSummary:(id)summary;
- (void)_localeChanged:(id)changed;
- (void)_timeChanged:(id)changed;
@end

#endif /* NTKHeartRateComplicationDataSource_h */
