//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFRowCardSection_h
#define SFRowCardSection_h
@import Foundation;

#include "SFCardSection.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFCard.h"
#include "SFColor.h"
#include "SFCommand.h"
#include "SFImage.h"
#include "SFRichText.h"
#include "SFRowCardSection-Protocol.h"
#include "SFUserReportRequest.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface SFRowCardSection : SFCardSection<SFRowCardSection, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 imageIsRightAligned; unsigned int x :1 keyNoWrap; unsigned int x :1 valueNoWrap; unsigned int x :1 cardPaddingBottom; } _has;
}

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) SFImage *image;
@property (nonatomic) BOOL imageIsRightAligned;
@property (retain, nonatomic) SFRichText *leadingText;
@property (retain, nonatomic) SFRichText *trailingText;
@property (retain, nonatomic) SFImage *attributionImage;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL keyNoWrap;
@property (copy, nonatomic) NSNumber *keyWeight;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL valueNoWrap;
@property (copy, nonatomic) NSNumber *valueWeight;
@property (nonatomic) BOOL cardPaddingBottom;
@property (retain, nonatomic) SFRichText *leadingSubtitle;
@property (retain, nonatomic) SFRichText *trailingSubtitle;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (nonatomic) BOOL shouldHideInAmbientMode;
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;
@property (retain, nonatomic) SFCommand *command;
@property (retain, nonatomic) SFCommand *previewCommand;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (retain, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) NSString *cardSectionDetail;
@property (retain, nonatomic) NSString *previewButtonItemsTitle;
@property (copy, nonatomic) NSArray *leadingSwipeButtonItems;
@property (copy, nonatomic) NSArray *trailingSwipeButtonItems;
@property (copy, nonatomic) NSArray *referencedCommands;
@property (nonatomic) BOOL forceEnable3DTouch;
@property (readonly) NSArray *embeddedCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (BOOL)hasImageIsRightAligned;
- (BOOL)hasKeyNoWrap;
- (BOOL)hasValueNoWrap;
- (BOOL)hasCardPaddingBottom;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SFRowCardSection_h */
