//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSString_FormatFlowedSupportInternal_h
#define NSString_FormatFlowedSupportInternal_h
@import Foundation;

@interface NSString (FormatFlowedSupportInternal)
/* class methods */
+ (id)mf_messageIDStringWithDomainHint:(id)hint;
+ (id)mf_stringRepresentationForBytes:(long long)bytes;
+ (id)mf_stringWithAttachmentCharacter;
+ (id)mf_stringForMimeTypeFromFileName:(id)name;
+ (id)mf_stringFromMimeRichTextString:(id)string asHTML:(BOOL)html;
+ (id)mf_stringFromMimeEnrichedString:(id)string asHTML:(BOOL)html;

/* instance methods */
- (id)mf_stringByReallyAbbreviatingSharedResourcesDirectoryWithTildeInPath;
- (id)mf_betterStringByResolvingSymlinksInPath;
- (id)mf_canonicalizedAbsolutePath;
- (id)mf_stringByExpandingTildeWithSharedResourcesDirectoryInPath;
- (id)mf_stringByAbbreviatingSharedResourcesDirectoryWithTildeInPath;
- (BOOL)mf_makeDirectoryWithMode:(int)mode;
- (BOOL)mf_isSubdirectoryOfPath:(id)path;
- (id)mf_fileSystemString;
- (id)mf_stringWithNoExtraSpaces;
- (id)mf_uniqueFilenameWithRespectToFilenames:(id)filenames;
- (id)mf_stringByEscapingHTMLCodes;
- (BOOL)mf_containsSubstring:(id)substring options:(unsigned long long)options;
- (BOOL)mf_containsSubstring:(id)substring;
- (id)mf_stringByTrimmingWhitespaceAndNewlineCharacters;
- (id)mf_prefixToString:(id)string;
- (id)mf_encodedIMAPMailboxName;
- (id)mf_decodedIMAPMailboxName;
- (id)mf_convertFromFlowedText:(unsigned int)text visuallyEmpty:(BOOL *)empty;
- (unsigned long long)mf_lineBreakBeforeIndex:(unsigned long long)index withinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)mf_nextWordFromIndex:(unsigned long long)index forward:(BOOL)forward;
@end

#endif /* NSString_FormatFlowedSupportInternal_h */
