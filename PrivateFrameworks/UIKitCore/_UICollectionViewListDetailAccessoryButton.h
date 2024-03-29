//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionViewListDetailAccessoryButton_h
#define _UICollectionViewListDetailAccessoryButton_h
@import Foundation;

#include "UIButton.h"
#include "UIColor.h"
#include "UITableConstants-Protocol.h"
#include "_UICollectionViewListDetailAccessoryView-Protocol.h"

@interface _UICollectionViewListDetailAccessoryButton : UIButton<_UICollectionViewListDetailAccessoryView>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSObject<UITableConstants> *constants;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (retain, nonatomic) UIColor *accessoryBackgroundColor;
@property (copy, nonatomic) id /* block */ actionHandler;

/* instance methods */
- (id)init;
- (void)_executeActionHandler;
- (id)_renderedImage;
@end

#endif /* _UICollectionViewListDetailAccessoryButton_h */
