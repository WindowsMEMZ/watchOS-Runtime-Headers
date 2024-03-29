//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABSIMBadgingLabel_h
#define NCABSIMBadgingLabel_h
@import Foundation;

#include "UILabel.h"

@class NSMutableDictionary;

@interface NCABSIMBadgingLabel : UILabel

@property (retain, nonatomic) NSMutableDictionary *SIMBadgeCache;

/* instance methods */
- (id)attributedStringWithString:(id)string SIMBadgeForSenderIdentity:(id)identity;
- (id)attributedStringWithAttributedString:(id)string SIMBadgeForSenderIdentity:(id)identity;
- (id)attributedStringWithString:(id)string SIMBadgeForContact:(id)contact;
- (id)attributedStringWithAttributedString:(id)string SIMBadgeForContact:(id)contact;
- (id)_badgeString:(id)string withBadgeImageString:(id)string;
- (id)_badgeAttributedString:(id)string withBadgeImageString:(id)string;
- (id)_appendGapAndBadgeImageString:(id)string toMutableAttributedString:(id)string;
- (id)_badgeAsAttributedStringForSenderIdentity:(id)identity;
- (id)_badgeAsAttributedStringForContact:(id)contact;
- (id)_badgeAsAttributedStringWithImage:(id)image;
@end

#endif /* NCABSIMBadgingLabel_h */
