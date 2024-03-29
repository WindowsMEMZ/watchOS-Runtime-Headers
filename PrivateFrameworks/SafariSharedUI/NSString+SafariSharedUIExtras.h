//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef NSString_SafariSharedUIExtras_h
#define NSString_SafariSharedUIExtras_h
@import Foundation;

@interface NSString (SafariSharedUIExtras)
/* instance methods */
- (id)safari_urlStringVariantsForFaviconDatabase;
- (id)safari_domainFaviconURLStringVariantsForFaviconDatabase;
- (id)safari_domainURLStringPrefixVariantsForFaviconDatabase;
- (id)safari_urlStringVariantsForIconControllerDatabase;
- (id)safari_stringByFormattingForFaviconDatabase;
- (id)safari_stringByFormattingForIconControllerDatabase;
- (id)_safari_variantsOfURLStringInFaviconFormat:(BOOL)format;
- (id)safari_stringWithFont:(id)font forWidth:(double)width lineBreakMode:(long long)mode;
- (BOOL)safari_stringHasLeadingEmoji:(BOOL)emoji;
@end

#endif /* NSString_SafariSharedUIExtras_h */
