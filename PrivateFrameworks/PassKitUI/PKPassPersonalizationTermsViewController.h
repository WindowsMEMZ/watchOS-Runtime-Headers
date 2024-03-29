//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassPersonalizationTermsViewController_h
#define PKPassPersonalizationTermsViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKPassPersonalizationTermsViewControllerDelegate-Protocol.h"

@class NSString, UITextView;

@interface PKPassPersonalizationTermsViewController : UIViewController {
  /* instance variables */
  UITextView *_textView;
}

@property (retain, nonatomic) NSString *termsAndConditions;
@property (weak, nonatomic) NSObject<PKPassPersonalizationTermsViewControllerDelegate> *delegate;

/* instance methods */
- (id)initWithTermsAndConditions:(id)conditions;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)_applyTermsAndConditions;
- (void)_declineButtonPressed:(id)pressed;
- (void)_acceptButtonPressed:(id)pressed;
@end

#endif /* PKPassPersonalizationTermsViewController_h */
