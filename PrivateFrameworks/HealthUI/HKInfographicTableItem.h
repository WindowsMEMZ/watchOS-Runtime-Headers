//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInfographicTableItem_h
#define HKInfographicTableItem_h
@import Foundation;

#include "HKInfographicItem-Protocol.h"

@class NSAttributedString, NSString;

@interface HKInfographicTableItem : NSObject<HKInfographicItem>

@property (retain, nonatomic) NSAttributedString *titleString;
@property (retain, nonatomic) NSAttributedString *valueString;
@property (nonatomic) BOOL separatorHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTitle:(id)title value:(id)value;
- (id)initWithTitle:(id)title value:(id)value separatorHidden:(BOOL)hidden;
@end

#endif /* HKInfographicTableItem_h */
