//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFMediaAccessoryItemUpdateResponse_h
#define HFMediaAccessoryItemUpdateResponse_h
@import Foundation;

#include "HFCharacteristicValueDisplayMetadata.h"

@class NSDictionary;

@interface HFMediaAccessoryItemUpdateResponse : NSObject

@property (readonly, nonatomic) HFCharacteristicValueDisplayMetadata *displayMetadata;
@property (readonly, nonatomic) NSDictionary *standardResults;

/* instance methods */
- (id)initWithDisplayMetadata:(id)metadata standardResults:(id)results;
@end

#endif /* HFMediaAccessoryItemUpdateResponse_h */
