//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.200.0.0.0
//
#ifndef EMFStringUtilities_h
#define EMFStringUtilities_h
@import Foundation;

@interface EMFStringUtilities : NSObject
/* class methods */
+ (id)_stringWithUnichar:(unsigned int)unichar;
+ (id)_preferenceIndexString:(id)string;
+ (unsigned int)_firstLongCharacterOfString:(id)string;
+ (id)_baseFirstCharacterString:(id)string;
+ (BOOL)_emojiString:(id)string containsSubstring:(id)substring;
+ (BOOL)_genderEmojiBaseStringNeedVariantSelector:(id)selector;
+ (id)professionSkinToneEmojiBaseKey:(id)key;
+ (id)_baseStringForEmojiString:(id)string;
+ (BOOL)_hasSkinToneVariantsForString:(id)string;
+ (id)skinToneSpecifierTypeFromEmojiFitzpatrickModifier:(int)modifier;
+ (int)_skinToneModifierFromSpecifierType:(id)type;
+ (id)_skinToneSuffixFromSpecifierType:(id)type;
+ (int)_skinToneForString:(id)string;
+ (id)_tokenizedMultiPersonFromString:(id)string;
+ (id)_tokenizedHandshakeFromString:(id)string;
+ (id)_skinToneSpecifiersForString:(id)string;
+ (long long)multiPersonTypeForString:(id)string;
+ (id)_joiningStringForCoupleString:(id)string;
+ (id)_skinToneChooserVariantsForHandHoldingCoupleType:(long long)type;
+ (id)_skinToneChooserArraysForCoupleType:(long long)type joiner:(id)joiner;
+ (id)_skinToneChooserVariantsForString:(id)string usesSilhouetteSpecifiers:(BOOL)specifiers;
+ (id)_coupleSkinToneChooserVariantsForString:(id)string;
+ (id)_skinToneChooserVariantsForString:(id)string;
+ (id)_coupleStringWithLeftPerson:(id)person leftVariant:(id)variant joiningString:(id)string rightPerson:(id)person rightVariant:(id)variant;
+ (id)_skinToneVariantsForMultiPersonType:(long long)type;
+ (id)_skinToneVariantsForCouple:(long long)couple joiner:(id)joiner;
+ (id)_skinToneVariantsForString:(id)string;
+ (id)_multiPersonStringForString:(id)string skinToneVariantSpecifier:(id)specifier;
+ (id)_normalizeMultiPersonGroupToShortFormEncoding:(id)encoding;
+ (id)_normalizeMultiPersonGroupToLongFormEncoding:(id)encoding;
@end

#endif /* EMFStringUtilities_h */
