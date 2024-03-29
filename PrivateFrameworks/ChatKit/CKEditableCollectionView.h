//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKEditableCollectionView_h
#define CKEditableCollectionView_h
@import Foundation;

#include "UICollectionView.h"

@interface CKEditableCollectionView : UICollectionView

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } marginInsets;
@property (nonatomic) BOOL _ck_editing;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame collectionViewLayout:(id)layout;
- (id)dequeueReusableCellWithReuseIdentifier:(id)identifier forIndexPath:(id)path;
- (void)_ck_setEditing:(BOOL)editing;
- (void)_ck_setEditing:(BOOL)editing animated:(BOOL)animated;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (BOOL)_ck_isEditing;
@end

#endif /* CKEditableCollectionView_h */
