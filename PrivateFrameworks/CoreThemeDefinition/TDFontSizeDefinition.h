//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 581.0.0.0.0
//
#ifndef TDFontSizeDefinition_h
#define TDFontSizeDefinition_h
@import Foundation;

#include "NSManagedObject.h"
#include "TDMetafontSizeSelector.h"

@class NSDate, NSNumber;

@interface TDFontSizeDefinition : NSManagedObject

@property (retain, @dynamic, nonatomic) NSDate *dateOfLastChange;
@property (retain, @dynamic, nonatomic) NSNumber *pointSize;
@property (retain, @dynamic, nonatomic) TDMetafontSizeSelector *selector;

@end

#endif /* TDFontSizeDefinition_h */
