//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKWatchLoginFieldsViewController_h
#define AKWatchLoginFieldsViewController_h
@import Foundation;

#include "UIViewController.h"
#include "AKLoginFieldsViewControllerProtocol-Protocol.h"
#include "PUICCollectionViewDataSource-Protocol.h"
#include "PUICListCollectionViewDelegate-Protocol.h"
#include "PUICTextFieldDelegate-Protocol.h"

@class AKAppleIDAuthenticationContext, NSIndexPath, NSString, PUICListCollectionView, PUICListCollectionViewLayout, UIView;
@protocol AKLoginFieldsDelegate;

@interface AKWatchLoginFieldsViewController : UIViewController<PUICCollectionViewDataSource, PUICListCollectionViewDelegate, PUICTextFieldDelegate, AKLoginFieldsViewControllerProtocol>

@property (weak, nonatomic) AKAppleIDAuthenticationContext *context;
@property (copy, nonatomic) NSString *collectionViewTitle;
@property (retain, nonatomic) PUICListCollectionView *listCollectionView;
@property (retain, nonatomic) PUICListCollectionViewLayout *listCollectionViewLayout;
@property (retain, nonatomic) UIView *loginOptions;
@property (retain, nonatomic) NSIndexPath *usernameIndexPath;
@property (retain, nonatomic) NSIndexPath *passwordIndexPath;
@property (retain, nonatomic) UIView *loginHeaderView;
@property (weak, nonatomic) NSObject<AKLoginFieldsDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context title:(id)title loginOptionsView:(id)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (id)usernameText;
- (id)passwordText;
- (void)clearPassword;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (id)passwordCell;
- (id)usernameCell;
- (void)textInputValueCancelled:(id)cancelled;
- (void)textField:(id)field textInputValueDidChange:(id)change;
- (void)_initializeView;
- (void)_initializePasswordCellTextField:(id)field;
- (void)_initializeUsernameCellTextField:(id)field;
- (BOOL)_shouldShowUserName;
- (id)_usernameCellForCollectionView:(id)view atIndexPath:(id)path;
- (id)_passwordCellForCollectionView:(id)view atIndexPath:(id)path;
- (id)_listColectionView;
- (id)_loginHeaderView;
@end

#endif /* AKWatchLoginFieldsViewController_h */
