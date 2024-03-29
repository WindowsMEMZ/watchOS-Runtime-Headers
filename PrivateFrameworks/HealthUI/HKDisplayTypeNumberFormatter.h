//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKDisplayTypeNumberFormatter_h
#define HKDisplayTypeNumberFormatter_h
@import Foundation;

#include "HKDisplayType.h"
#include "HKDisplayTypeValueFormatter.h"
#include "HKNumberFormatter-Protocol.h"
#include "HKUnitPreferenceController.h"

@class NSString;

@interface HKDisplayTypeNumberFormatter : NSObject<HKNumberFormatter> {
  /* instance variables */
  HKDisplayType *_displayType;
  HKUnitPreferenceController *_unitController;
  HKDisplayTypeValueFormatter *_valueFormatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDisplayType:(id)type unitController:(id)controller;
- (BOOL)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)number displayType:(id)type unitController:(id)controller;
@end

#endif /* HKDisplayTypeNumberFormatter_h */
