//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInterfaceActionConcreteVisualStyle_h
#define UIInterfaceActionConcreteVisualStyle_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UIInterfaceActionConcreteVisualStyleImplInternal-Protocol.h"

@class NSString;

@interface UIInterfaceActionConcreteVisualStyle : NSObject<UIInterfaceActionConcreteVisualStyleImplInternal, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)defaultScreen;
- (struct CGSize { double x0; double x1; })maximumActionGroupContentSize;
- (double)contentCornerRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentMargin;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (double)horizontalImageContentSpacing;
- (double)verticalImageContentSpacing;
- (BOOL)allowsZeroSizedSectionSeparators;
- (double)actionSectionSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })actionSequenceEdgeInsets;
- (BOOL)selectByPressGestureRequired;
- (BOOL)selectionFeedbackEnabled;
- (double)actionTitleLabelMinimumScaleFactor;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)view;
- (id)newGroupBackgroundViewWithGroupViewState:(id)state;
- (id)newActionSeparatorViewForGroupViewState:(id)state;
- (id)newSectionSeparatorViewForGroupViewState:(id)state;
- (id)newActionBackgroundViewForViewState:(id)state;
- (id)actionTitleLabelFontForViewState:(id)state;
- (id)actionTitleLabelColorForViewState:(id)state;
- (id)actionTitleLabelCompositingFilterForViewState:(id)state;
- (id)actionClassificationLabelFontForViewState:(id)state;
- (id)actionClassificationLabelColorForViewState:(id)state;
- (id)actionImageViewTintColorForImageProperty:(id)property actionViewState:(id)state;
- (double)actionSpacingForGroupViewState:(id)state;
- (id)actionPropertiesAffectingLabelStyling;
- (void)configureAttributesForTitleLabel:(id)label classificationLabel:(id)label actionViewState:(id)state;
- (id)actionPropertiesAffectingImageViewStyling;
- (void)configureAttributesForImageView:(id)view imageProperty:(id)property actionViewState:(id)state;
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;
- (void)configureAttributesForActionScrollView:(id)view groupViewState:(id)state;
- (id)actionPropertiesAffectingActionRepresentationViewStyling;
- (void)configureAttributesForActionRepresentationView:(id)view actionViewState:(id)state;
- (void)configureForPresentingGroupView:(id)view alongsideTransitionCoordinator:(id)coordinator;
- (void)configureForDismissingGroupView:(id)view alongsideTransitionCoordinator:(id)coordinator;
- (id)newRepresentationViewForAction:(id)action;
@end

#endif /* UIInterfaceActionConcreteVisualStyle_h */
