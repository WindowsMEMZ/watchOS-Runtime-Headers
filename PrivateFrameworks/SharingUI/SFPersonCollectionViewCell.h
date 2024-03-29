//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFPersonCollectionViewCell_h
#define SFPersonCollectionViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "SFCircleProgressView.h"
#include "SFPersonCollectionViewCellDelegate-Protocol.h"
#include "SFPersonImageView.h"

@class NSArray, NSLayoutConstraint, NSProgress, NSString, SFAirDropNode, UIColor, UILabel, UIView;

@interface SFPersonCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) SFPersonImageView *imageView;
@property (retain, nonatomic) UIView *badgedContactView;
@property (retain, nonatomic) SFCircleProgressView *circleProgressView;
@property (retain, nonatomic) id progressToken;
@property (retain, nonatomic) NSArray *progressKeyPaths;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) NSArray *secondLabelVisibleConstraintsArray;
@property (retain, nonatomic) UIColor *fadedSecondLabelColor;
@property (retain, nonatomic) UILabel *labelForPositioning;
@property (retain, nonatomic) NSLayoutConstraint *secondLabelFBConstraint;
@property (retain, nonatomic) NSLayoutConstraint *cellWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *chickletToTitleSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *nameFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *largeTextNameCenterYConstraint;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) BOOL darkStyleOnLegacyApp;
@property (retain, nonatomic) SFAirDropNode *person;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) long long cellState;
@property (nonatomic) BOOL stateBeingRestored;
@property (retain, nonatomic) NSString *sessionID;
@property (weak, nonatomic) NSObject<SFPersonCollectionViewCellDelegate> *delegate;
@property (nonatomic) double activitySheetWidth;

/* class methods */
+ (struct CGSize { double x0; double x1; })_cachedPreferredItemSizeForViewWidth:(double)width sizeCategory:(id)category;
+ (struct CGSize { double x0; double x1; })_cachedPreferredItemSizeForString:(id)string viewWidth:(double)width sizeCategory:(id)category;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)setupConstraints;
- (void)setupConstraintsYukon;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)selected;
- (void)setCellState:(long long)state animated:(BOOL)animated silent:(BOOL)silent;
- (void)restoreCellStateFromFinalTransferState:(long long)state;
- (void)prepareHaptics;
- (void)prepareHapticsPreWarm:(BOOL)warm;
- (void)deactivateHaptics;
- (void)fireHapticsForState:(long long)state;
- (void)updatePersonIconView;
- (void)updateNameLabel;
- (void)setSecondLabelText:(id)text withTextColor:(id)color animated:(BOOL)animated completion:(id /* block */)completion;
- (void)resetTransferState;
- (void)userDidSelect;
- (void)userDidCancel;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)addObserverOfValuesForKeyPaths:(id)paths ofObject:(id)object;
- (void)removeObserverOfValuesForKeyPaths:(id)paths ofObject:(id)object;
- (void)triggerKVOForKeyPaths:(id)paths ofObject:(id)object;
- (void)traitCollectionDidChange:(id)change;
- (void)_updateForCurrentSizeCategory;
- (void)handleKVOUpdateForPerson:(id)person keyPath:(id)path;
- (void)handleKVOUpdateForProgress:(id)progress keyPath:(id)path;
- (struct CGSize { double x0; double x1; })calculatedContentSizeForSheetWidth:(double)width sizeCategory:(id)category;
@end

#endif /* SFPersonCollectionViewCell_h */
