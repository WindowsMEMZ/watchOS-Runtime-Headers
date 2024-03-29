//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKTitleSubtitleAccessoryItem_h
#define NPKTitleSubtitleAccessoryItem_h
@import Foundation;

#include "NPKTitleSubtitleItem.h"

@class UIImage;

@interface NPKTitleSubtitleAccessoryItem : NPKTitleSubtitleItem

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long type;

/* instance methods */
- (id)initWithIdentifier:(id)identifier style:(unsigned long long)style attributedTitle:(id)title titleRedactionStyle:(long long)style attributedSubtitle:(id)subtitle subtitleRedactionStyle:(long long)style accessoryImage:(id)image accessoryType:(long long)type action:(id /* block */)action;
- (id)description;
@end

#endif /* NPKTitleSubtitleAccessoryItem_h */
