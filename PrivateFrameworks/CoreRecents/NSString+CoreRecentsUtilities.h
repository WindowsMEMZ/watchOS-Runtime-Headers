//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1211.0.0.0.0
//
#ifndef NSString_CoreRecentsUtilities_h
#define NSString_CoreRecentsUtilities_h
@import Foundation;

@interface NSString (CoreRecentsUtilities)
/* instance methods */
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })cr_rangeOfAddressDomain;
- (id)cr_copyStringByDecodingIDNAInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)cr_copyStringByEncodingIDNAInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)cr_copyIDNADecodedEmailAddress;
- (id)cr_copyIDNAEncodedEmailAddress;
- (id)cr_uniqueFilenameWithRespectToFilenames:(id)filenames;
- (id)cr_lowercaseStringWithStandardLocale;
@end

#endif /* NSString_CoreRecentsUtilities_h */
