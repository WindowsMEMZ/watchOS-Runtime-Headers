//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBBackgroundView_h
#define UIKBBackgroundView_h
@import Foundation;

#include "UIKBSplitImageView.h"
#include "UIKBCacheableView-Protocol.h"
#include "UIKBRenderConfig.h"
#include "UIKBScreenTraits.h"
#include "UIKBTree.h"
#include "UITextInputTraits.h"

@class NSObject, NSString;

@interface UIKBBackgroundView : UIKBSplitImageView<UIKBCacheableView> {
  /* instance variables */
  UIKBTree *_keyplane;
  UITextInputTraits *_inputTraits;
  int _visualStyle;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _splitLeftRect;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _splitLeftCacheRect;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _splitRightRect;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _splitRightCacheRect;
  unsigned long long _topCorners;
  BOOL _isSplit;
  BOOL _centerFilled;
  BOOL _hasCandidateKeys;
}

@property (retain, nonatomic) NSObject *geometryCacheKey;
@property (retain, nonatomic) UIKBScreenTraits *screenTraits;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) BOOL cacheDeferable;
@property (readonly, nonatomic) double cachedWidth;
@property (readonly, nonatomic) BOOL keepNonPersistent;
@property (readonly, nonatomic) long long assetIdiom;
@property (readonly, nonatomic) long long cacheDeferPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)refreshStyleForKeyplane:(id)keyplane inputTraits:(id)traits;
- (BOOL)_canDrawContent;
- (void)drawContentsOfRenderers:(id)renderers;
- (id)cacheKeysForRenderFlags:(id)flags;
- (void)displayLayer:(id)layer;
@end

#endif /* UIKBBackgroundView_h */
