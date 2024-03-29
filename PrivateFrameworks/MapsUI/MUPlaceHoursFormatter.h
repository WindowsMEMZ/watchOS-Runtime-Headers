//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef MUPlaceHoursFormatter_h
#define MUPlaceHoursFormatter_h
@import Foundation;

@class NSArray, NSString;

@interface MUPlaceHoursFormatter : NSObject {
  /* instance variables */
  BOOL _formatAMPM;
}

@property (readonly, nonatomic) NSString *hoursString;
@property (readonly, nonatomic) NSArray *AMPMSymbols;

/* class methods */
+ (id)hoursFormatterFromHoursStringComponents:(id)components AMPMSymbols:(id)ampmsymbols;
+ (id)_hoursMonospacedFont;
+ (id)_AMPMFont;

/* instance methods */
- (id)initWithHoursString:(id)string AMPMSymbols:(id)ampmsymbols;
- (id)buildAttributedHourStringWithHourFont:(id)font AMPMFont:(id)ampmfont hourColor:(id)color;
- (id)buildDefaultPlacecardHoursString;
@end

#endif /* MUPlaceHoursFormatter_h */
