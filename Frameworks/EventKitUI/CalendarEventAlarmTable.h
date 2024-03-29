//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef CalendarEventAlarmTable_h
#define CalendarEventAlarmTable_h
@import Foundation;

@interface CalendarEventAlarmTable : NSObject

@property (nonatomic) BOOL useAllDayAlarms;

/* instance methods */
- (int)intervalForPresetIdentifier:(long long)identifier;
- (unsigned long long)countOfPresets;
@end

#endif /* CalendarEventAlarmTable_h */
