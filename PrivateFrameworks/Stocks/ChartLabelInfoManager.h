//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef ChartLabelInfoManager_h
#define ChartLabelInfoManager_h
@import Foundation;

#include "ChartLabelInfo.h"

@class NSMutableArray;

@interface ChartLabelInfoManager : NSObject {
  /* instance variables */
  ChartLabelInfo *_yAxisLabelInfo;
  NSMutableArray *_monthLabelInfoArrays;
  NSMutableArray *_integerLabelInfoArray;
  BOOL _use24hrTime;
}

/* class methods */
+ (id)sharedLabelInfoManager;
+ (void)clearSharedManager;
+ (id)chartLabelFont;
+ (struct __CFString *)_CFDateFormatterPropertyForMonthLabelLength:(long long)length;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)labelInfoWithString:(id)string;
- (id)labelInfoForYAxis;
- (id)labelInfoWithUnsignedInteger:(unsigned long long)integer;
- (BOOL)use24hrTime;
- (id)monthLabelInfoArrayForLabelLength:(long long)length;
- (void)resetLocale;
@end

#endif /* ChartLabelInfoManager_h */
