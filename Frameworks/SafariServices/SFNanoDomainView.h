//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFNanoDomainView_h
#define SFNanoDomainView_h
@import Foundation;

#include "UIView.h"

@class NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol SFNanoDomainViewDelegate;

@interface SFNanoDomainView : UIView {
  /* instance variables */
  UILabel *_domainTextLabel;
  UILabel *_extendedDomainLabel;
  UIImageView *_securityIndicator;
  NSArray *_domainWithSecurityIndicatorConstraints;
  NSArray *_domainWithoutSecurityIndicatorConstraints;
  NSArray *_extendedDomainLayoutConstraints;
  NSLayoutConstraint *_domainLabelBottomConstraint;
  UITapGestureRecognizer *_tapGestureRecognizer;
  BOOL _expanded;
}

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL isSecure;
@property (readonly, nonatomic) BOOL isSensitiveInputField;
@property (weak, nonatomic) NSObject<SFNanoDomainViewDelegate> *delegate;

/* instance methods */
- (id)initWithDomain:(id)domain isSecure:(BOOL)secure isSensitiveInputField:(BOOL)field;
- (void)_setUpConstraintsForDomainWithSecurityIndicator;
- (void)_setUpConstraintsForDomainWithoutSecurityIndicator;
- (void)updateConstraints;
- (BOOL)_showsExtendedDomainLabel;
- (void)_setUpExtentedDomainLabelIfNeeded;
- (long long)_searchBreakToFillSecondLineForString:(id)string width:(double)width;
- (id)_textLinesForString:(id)string compactMode:(BOOL)mode shouldTruncate:(BOOL *)truncate;
- (BOOL)_setUpDomainLabelsInCompactMode:(BOOL)mode;
- (id)_domainTextColor;
- (BOOL)_showsSecurityIndicator;
- (void)_setUpSecurityIndicator;
- (void)_tapped;
@end

#endif /* SFNanoDomainView_h */
