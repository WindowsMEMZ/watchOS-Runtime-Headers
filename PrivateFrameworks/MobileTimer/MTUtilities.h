//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTUtilities_h
#define MTUtilities_h
@import Foundation;

@interface MTUtilities : NSObject
/* class methods */
+ (id)dayAndTimeZoneOffsetStringFromDate:(id)date withTimeZoneOffset:(long long)offset timeZoneAbbreviation:(id)abbreviation spaceBeforeTimeDesignator:(BOOL)designator hoursOnly:(BOOL)only numericOnly:(BOOL)only;
+ (id)widgetURL;
+ (id)widgetOverrideDate;
+ (id)mtCityFromWorldClockCity:(id)city;
+ (BOOL)mtSBUIIsSystemApertureEnabled;
@end

#endif /* MTUtilities_h */
