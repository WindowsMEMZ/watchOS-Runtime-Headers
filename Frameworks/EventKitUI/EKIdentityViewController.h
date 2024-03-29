//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKIdentityViewController_h
#define EKIdentityViewController_h
@import Foundation;

#include "UIViewController.h"
#include "EKEditItemViewControllerDelegate-Protocol.h"
#include "EKEditItemViewControllerProtocol-Protocol.h"

@class CNContactStore, CNContactViewController;
@protocol EKIdentityProtocol;

@interface EKIdentityViewController : UIViewController<EKEditItemViewControllerProtocol> {
  /* instance variables */
  NSObject<EKIdentityProtocol> *_identity;
  CNContactViewController *_personViewController;
  CNContactStore *_store;
}

@property (weak, nonatomic) NSObject<EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

/* class methods */
+ (id)_CNLabelWork;
+ (Class)_CNContactStoreClass;
+ (Class)_CNContactStoreConfigurationClass;
+ (Class)_CNContactClass;
+ (Class)_CNMutableContactClass;
+ (Class)_CNLabeledValueClass;
+ (id)_createContactStore;
+ (id)contactForIdentity:(id)identity keysToFetch:(id)fetch;
+ (id)_fetchContactForIdentity:(id)identity store:(id)store keysToFetch:(id)fetch;
+ (id)_createContactForIdentity:(id)identity;

/* instance methods */
- (id)CNContactEmailAddressesKey;
- (id)CNContactPhoneNumbersKey;
- (Class)_CNContactViewControllerClass;
- (id)initWithIdentity:(id)identity;
- (void)_updateControllerWithContact:(id)contact isNew:(BOOL)new;
- (void)loadView;
- (void)_setIdentity:(id)identity;
- (id)EKUI_oopContentBackgroundColor;
@end

#endif /* EKIdentityViewController_h */
