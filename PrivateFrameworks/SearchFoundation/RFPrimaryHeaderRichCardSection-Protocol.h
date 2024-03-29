//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef RFPrimaryHeaderRichCardSection_Protocol_h
#define RFPrimaryHeaderRichCardSection_Protocol_h
@import Foundation;

#include "SFCardSection.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "RFPrimaryHeaderRichCardSection-Protocol.h"
#include "RFTextProperty.h"
#include "RFVisualProperty.h"
#include "SFCard.h"
#include "SFColor.h"
#include "SFCommand.h"
#include "SFUserReportRequest.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol RFPrimaryHeaderRichCardSection <SFCardSection>

@property (retain, nonatomic) RFTextProperty *text_1;
@property (retain, nonatomic) RFTextProperty *text_2;
@property (retain, nonatomic) RFTextProperty *text_3;
@property (retain, nonatomic) RFTextProperty *text_4;
@property (retain, nonatomic) RFVisualProperty *thumbnail;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* RFPrimaryHeaderRichCardSection_Protocol_h */
