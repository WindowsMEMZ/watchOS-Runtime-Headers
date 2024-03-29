//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVTimeFormatterInternal_h
#define AVTimeFormatterInternal_h
@import Foundation;

@class NSLocale, NSNumberFormatter, NSString;

@interface AVTimeFormatterInternal : NSObject {
  /* instance variables */
  long long style;
  double formatTemplate;
  BOOL isFullWidth;
  NSLocale *locale;
  BOOL isRightToLeft;
  NSString *cachedDateFormatterFormat;
  NSString *cachedDateFormatterTemplate;
  NSNumberFormatter *numberFormatterWithOneMinimumIntegerDigits;
  NSNumberFormatter *numberFormatterWithTwoMinimumIntegerDigits;
}

@end

#endif /* AVTimeFormatterInternal_h */
