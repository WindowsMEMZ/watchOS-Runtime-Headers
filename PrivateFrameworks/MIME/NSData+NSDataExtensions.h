//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSData_NSDataExtensions_h
#define NSData_NSDataExtensions_h
@import Foundation;

@interface NSData (NSDataExtensions)
/* instance methods */
- (id)mf_decodeUuencoded;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })mf_rangeOfRFC822HeaderData;
- (id)mf_subdataToIndex:(unsigned long long)index;
- (id)mf_subdataFromIndex:(unsigned long long)index;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })mf_rangeOfData:(id)data options:(unsigned long long)options range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })mf_rangeOfCString:(const char *)cstring;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })mf_rangeOfCString:(const char *)cstring options:(unsigned long long)options;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })mf_rangeOfCString:(const char *)cstring options:(unsigned long long)options range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (id)mf_decodeQuotedPrintableForText:(BOOL)text;
- (id)mf_decodeBase64;
- (id)mf_decodeBase64InRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range;
- (id)mf_decodeModifiedBase64;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_encodeBase64;
- (id)mf_encodeModifiedBase64;
- (id)mf_encodeBase64HeaderData;
- (id)mf_subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)mf_immutable;
@end

#endif /* NSData_NSDataExtensions_h */
