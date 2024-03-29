//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationDateFormatter_h
#define NTKComplicationDateFormatter_h
@import Foundation;

@interface NTKComplicationDateFormatter : NSObject
/* class methods */
+ (void)initialize;
+ (void)_handleSignificantTimeChange:(id)change;
+ (void)_handleLocaleChange:(id)change;
+ (id)stringForDate:(id)date withStyle:(unsigned long long)style;
+ (id)dateFormatterForStyle:(unsigned long long)style;
+ (id)_localizedDayDateFormatter;
@end

#endif /* NTKComplicationDateFormatter_h */
