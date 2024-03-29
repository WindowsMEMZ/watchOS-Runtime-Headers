//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABContactEditTextFieldCell_h
#define NCABContactEditTextFieldCell_h
@import Foundation;

#include "PUICListDetailPlatterCell.h"
#include "NCABContactEditTextFieldCellDelegate-Protocol.h"
#include "PUICTextFieldDelegate-Protocol.h"

@class NSString, PUICTextField;

@interface NCABContactEditTextFieldCell : PUICListDetailPlatterCell<PUICTextFieldDelegate>

@property (retain, nonatomic) PUICTextField *textField;
@property (retain, nonatomic) NSString *propertyKey;
@property (retain, nonatomic) NSString *labeledValueIdentifier;
@property (weak, nonatomic) NSObject<NCABContactEditTextFieldCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)textInputValueCancelled:(id)cancelled;
- (void)textField:(id)field textInputValueDidChange:(id)change;
@end

#endif /* NCABContactEditTextFieldCell_h */
