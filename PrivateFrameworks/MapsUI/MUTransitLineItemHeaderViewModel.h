//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef MUTransitLineItemHeaderViewModel_h
#define MUTransitLineItemHeaderViewModel_h
@import Foundation;

#include "MULabeledTokenViewModel.h"
#include "MUPlaceHeaderViewModel-Protocol.h"

@class NSArray, NSAttributedString, NSString, UIColor;
@protocol GEOTransitLineItem;

@interface MUTransitLineItemHeaderViewModel : NSObject<MUPlaceHeaderViewModel> {
  /* instance variables */
  NSObject<GEOTransitLineItem> *_lineItem;
}

@property (readonly, nonatomic) BOOL hasHeroImage;
@property (readonly, nonatomic) BOOL verified;
@property (readonly, nonatomic) BOOL claimed;
@property (readonly, nonatomic) BOOL hasInitialData;
@property (readonly, nonatomic) NSString *placeName;
@property (readonly, nonatomic) NSString *placeSecondaryName;
@property (readonly, nonatomic) NSAttributedString *addressDescriptionForContact;
@property (readonly, nonatomic) BOOL hasEnclosingPlace;
@property (readonly, nonatomic) MULabeledTokenViewModel *enclosingPlaceViewModel;
@property (readonly, nonatomic) NSArray *transitLabelItems;
@property (readonly, nonatomic) BOOL supportsEnhancedBusinessHeader;
@property (readonly, nonatomic) BOOL supportsLogo;
@property (readonly, nonatomic) UIColor *coverPhotoBackgroundColor;
@property (readonly, nonatomic) UIColor *logoBackgroundColor;
@property (readonly, nonatomic) BOOL supportsContactAddressDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTransitLineItem:(id)item;
- (void)refineEnclosingMapItemWithCompletion:(id /* block */)completion;
- (id)enclosingPlaceAttributedStringWithFont:(id)font labelColor:(id)color tokenColor:(id)color;
- (void)loadHeroImageWithSize:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
- (BOOL)isVerified;
- (BOOL)isClaimed;
- (BOOL)hasVerifiedHeaderStyle;
- (void)loadCoverPhotoWithSize:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
- (void)loadVerifiedLogoImageWithSize:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
@end

#endif /* MUTransitLineItemHeaderViewModel_h */
