//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKNanoEditMedicalIDContactCell_h
#define HKNanoEditMedicalIDContactCell_h
@import Foundation;

#include "PUICListDetailPlatterCell.h"
#include "HKNanoEditMedicalIDEmergencyContactModel.h"

@class UILabel;

@interface HKNanoEditMedicalIDContactCell : PUICListDetailPlatterCell

@property (retain, nonatomic) UILabel *phoneNumberLabel;
@property (retain, nonatomic) HKNanoEditMedicalIDEmergencyContactModel *contactModel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* HKNanoEditMedicalIDContactCell_h */
