//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICEmojiCollectionViewCell_h
#define PUICEmojiCollectionViewCell_h
@import Foundation;

#include "PUICPlatterCell.h"

@class NSArray, NSString, UIFont, UIImage, UIImageView, UILabel;

@interface PUICEmojiCollectionViewCell : PUICPlatterCell

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSArray *imageViewConstraints;
@property (retain, nonatomic) NSArray *textViewConstraints;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL fullBleed;
@property (nonatomic) double fontSize;
@property (nonatomic) NSString *identifier;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_updateConstraints;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRect;
- (id)description;
@end

#endif /* PUICEmojiCollectionViewCell_h */
