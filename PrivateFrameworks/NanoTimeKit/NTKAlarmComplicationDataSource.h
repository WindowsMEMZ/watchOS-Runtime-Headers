//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKAlarmComplicationDataSource_h
#define NTKAlarmComplicationDataSource_h
@import Foundation;

#include "NTKBaseAlarmComplicationDataSource.h"

@interface NTKAlarmComplicationDataSource : NTKBaseAlarmComplicationDataSource
/* instance methods */
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)handler;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)date timeTravelDate:(id)date withHandler:(id /* block */)handler;
- (id)emptyEntryModel;
- (id)_noAlarmEntry;
- (id)_activeAlarmEntryForNextAlarm:(id)alarm date:(id)date;
- (id)_offAlarmEntry;
- (id)_alarmComplicationFutureWithDate:(id)date;
- (id)_getNextAlarmFuture:(id)future;
@end

#endif /* NTKAlarmComplicationDataSource_h */
