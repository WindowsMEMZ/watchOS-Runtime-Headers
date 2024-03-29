//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKCompassView_watchos_h
#define MKCompassView_watchos_h
@import Foundation;

#include "UIView.h"
#include "MKCompassView-Protocol.h"
#include "_TickView.h"

@class NSArray, NSString, UILabel, UIVisualEffectView;

@interface MKCompassView_watchos : UIView<MKCompassView> {
  /* instance variables */
  UIVisualEffectView *_blurView;
  _TickView *_tickView;
  UILabel *_cardinalText;
  NSArray *_compassPointLocalizedAbbreviations;
  int _lastDrawnCompassDirection;
  double _size;
}

@property (nonatomic) double mapHeading;
@property (nonatomic) double yaw;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)hidden;
- (BOOL)isPointInNorthEastHalf:(struct CGPoint { double x0; double x1; })half;
- (void)_updateTextForCompassDirection:(int)direction;
- (void)_populateCompassPointLocalizedAbbreviationsArray;
- (id)stringForCompassPoint:(int)point;
- (void)setCompassViewSize:(long long)size style:(long long)style;
- (void)setCompassViewSize:(long long)size;
@end

#endif /* MKCompassView_watchos_h */
