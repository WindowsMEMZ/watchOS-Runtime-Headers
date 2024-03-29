//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTextFieldCollectionViewListCell_h
#define PKTextFieldCollectionViewListCell_h
@import Foundation;

#include "UICollectionViewListCell.h"
#include "PKListTextFieldContentViewDelegate-Protocol.h"
#include "PKTextFieldCollectionViewListCellDelegate-Protocol.h"

@class NSString;

@interface PKTextFieldCollectionViewListCell : UICollectionViewListCell<PKListTextFieldContentViewDelegate>

@property (retain, nonatomic) NSObject<PKTextFieldCollectionViewListCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)updateConfigurationUsingState:(id)state;
- (void)prepareForReuse;
- (id)textFieldText;
- (void)beginEditing;
- (void)endEditing;
- (void)resetTextFieldTextFromLabel;
- (void)setToolbarItems:(id)items;
- (id)_textFieldContentView;
- (BOOL)textFieldShouldReturn:(id)return forContentView:(id)view;
- (void)textFieldDidBeginEditing:(id)editing forContentView:(id)view;
- (void)textFieldDidEndEditing:(id)editing forContentView:(id)view;
- (void)textFieldDidChangeSelection:(id)selection forContentView:(id)view;
@end

#endif /* PKTextFieldCollectionViewListCell_h */
