//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoReplyListCollectionViewCell_h
#define CKNanoReplyListCollectionViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"

@class PUICButton;

@interface CKNanoReplyListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) PUICButton *button;
@property (copy, nonatomic) id /* block */ replyButtonTapped;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setReply:(id)reply isRTL:(BOOL)rtl;
- (void)buttonTapped:(id)tapped;
@end

#endif /* CKNanoReplyListCollectionViewCell_h */
