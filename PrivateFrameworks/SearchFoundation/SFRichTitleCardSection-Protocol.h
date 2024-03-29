//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFRichTitleCardSection_Protocol_h
#define SFRichTitleCardSection_Protocol_h
@import Foundation;

#include "SFTitleCardSection.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFActionItem.h"
#include "SFCard.h"
#include "SFColor.h"
#include "SFCommand.h"
#include "SFImage.h"
#include "SFRichText.h"
#include "SFRichTitleCardSection-Protocol.h"
#include "SFUserReportRequest.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol SFRichTitleCardSection <SFTitleCardSection>

@property (copy, nonatomic) NSString *contentAdvisory;
@property (retain, nonatomic) SFImage *titleImage;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSNumber *rating;
@property (copy, nonatomic) NSString *ratingText;
@property (retain, nonatomic) SFImage *reviewGlyph;
@property (copy, nonatomic) NSString *reviewText;
@property (nonatomic) BOOL reviewNewLine;
@property (copy, nonatomic) NSArray *moreGlyphs;
@property (copy, nonatomic) NSString *auxiliaryTopText;
@property (copy, nonatomic) NSString *auxiliaryMiddleText;
@property (copy, nonatomic) NSString *auxiliaryBottomText;
@property (nonatomic) int auxiliaryBottomTextColor;
@property (copy, nonatomic) NSNumber *auxiliaryAlignment;
@property (nonatomic) BOOL hideVerticalDivider;
@property (nonatomic) int titleAlign;
@property (copy, nonatomic) NSNumber *titleWeight;
@property (nonatomic) BOOL titleNoWrap;
@property (nonatomic) BOOL thumbnailCropCircle;
@property (retain, nonatomic) SFImage *imageOverlay;
@property (retain, nonatomic) SFActionItem *playAction;
@property (nonatomic) int playActionAlign;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) NSString *footnote;
@property (retain, nonatomic) SFRichText *richSubtitle;
@property (nonatomic) BOOL subtitleIsEmphasized;
@property (copy, nonatomic) NSArray *buttonItems;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFRichTitleCardSection_Protocol_h */
