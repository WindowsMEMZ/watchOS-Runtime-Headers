//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKNanoMedicalIDEmergencyContactCell_h
#define HKNanoMedicalIDEmergencyContactCell_h
@import Foundation;

#include "PUICListPlatterCell.h"
#include "HKNanoMedicalIDCell-Protocol.h"

@class NSLayoutConstraint, NSString, UILabel;

@interface HKNanoMedicalIDEmergencyContactCell : PUICListPlatterCell<HKNanoMedicalIDCell> {
  /* instance variables */
  UILabel *_nameLabel;
  UILabel *_relationshipHeaderLabel;
  UILabel *_phoneNumberLabel;
  NSLayoutConstraint *_relationshipHeaderLabelBaselineConstraint;
  NSLayoutConstraint *_phoneNumberLabelBaselineConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identifier;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)emergencyContactTapped:(id)tapped;
- (void)_addNameLabelConstraints;
- (void)_addRelationshipHeaderLabelConstraints;
- (void)_addPhoneNumberLabelConstraints;
- (void)setData:(id)data;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* HKNanoMedicalIDEmergencyContactCell_h */
