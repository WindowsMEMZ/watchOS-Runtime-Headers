//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _TtCC14NanoHomeScreen33StackCollectionViewTriPlatterCell13ContainerView_h
#define _TtCC14NanoHomeScreen33StackCollectionViewTriPlatterCell13ContainerView_h
@import Foundation;

#include "UIView.h"
#include "NTKComplicationViewControllerDelegate-Protocol.h"

@interface NanoHomeScreen.StackCollectionViewTriPlatterCell.ContainerView : UIView<NTKComplicationViewControllerDelegate> { // (Swift)
  /* instance variables */
   complicationEditingButton;
   complicationOffButton;
   complicationViewController;
   platterView;
   scaleDownPercentage;
   scaleUpPercentage;
   editingButtonBlock;
   offButtonBlock;
   isEditing;
   configuration;
   visibility;
   canAddComplications;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtCC14NanoHomeScreen33StackCollectionViewTriPlatterCell13ContainerView_h */
