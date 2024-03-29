//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 648.2.0.0.0
//
#ifndef NCSCalendarIconFactory_h
#define NCSCalendarIconFactory_h
@import Foundation;

@interface NCSCalendarIconFactory : NSObject
/* class methods */
+ (id)sharedIconLayoutItemCache;
+ (id)calendarIconForQuickLookWithDate:(id)date;
+ (id)calendarIconForLongLookWithDate:(id)date;
+ (double)longLookIconDiameter;
+ (double)quickLookIconDiameter;
+ (id)calendarIconOfDiameter:(double)diameter date:(id)date;
@end

#endif /* NCSCalendarIconFactory_h */
