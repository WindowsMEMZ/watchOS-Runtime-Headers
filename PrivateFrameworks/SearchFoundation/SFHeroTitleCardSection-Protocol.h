//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFHeroTitleCardSection_Protocol_h
#define SFHeroTitleCardSection_Protocol_h
@import Foundation;

#include "SFCardSection.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFCard.h"
#include "SFColor.h"
#include "SFCommand.h"
#include "SFHeroTitleCardSection-Protocol.h"
#include "SFRichText.h"
#include "SFUserReportRequest.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFHeroTitleCardSection <SFCardSection>

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) SFRichText *title;
@property (retain, nonatomic) SFRichText *subtitle;
@property (copy, nonatomic) NSArray *buttonItems;
@property (nonatomic) unsigned long long maxVisibleButtonItems;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFHeroTitleCardSection_Protocol_h */
