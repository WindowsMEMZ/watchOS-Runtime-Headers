//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABContactActionCell_h
#define NCABContactActionCell_h
@import Foundation;

#include "PUICListBodyPlatterCell.h"

@class PUICButton;

@interface NCABContactActionCell : PUICListBodyPlatterCell

@property (nonatomic) BOOL destructive;
@property (retain, nonatomic) PUICButton *destructiveButton;
@property (nonatomic) long long action;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
@end

#endif /* NCABContactActionCell_h */
