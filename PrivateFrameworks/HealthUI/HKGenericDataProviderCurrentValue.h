//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKGenericDataProviderCurrentValue_h
#define HKGenericDataProviderCurrentValue_h
@import Foundation;

#include "HKDataProviderValue-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface HKGenericDataProviderCurrentValue : NSObject<HKDataProviderValue> {
  /* instance variables */
  NSNumber *_value;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithValue:(id)value;
- (id)attributedStringWithDisplayType:(id)type unitController:(id)controller valueFont:(id)font unitFont:(id)font dateCache:(id)cache;
- (id)lastUpdatedDescriptionWithDateCache:(id)cache;
@end

#endif /* HKGenericDataProviderCurrentValue_h */
