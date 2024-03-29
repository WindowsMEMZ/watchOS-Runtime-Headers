//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef NSString__PASDistilledString_h
#define NSString__PASDistilledString_h
@import Foundation;

@interface NSString (_PASDistilledString) <_PASDistilledString>
/* class methods */
+ (id)_pas_stringWithDataNoCopy:(id)copy encoding:(unsigned long long)encoding nullTerminated:(BOOL)terminated isExternalRepresentation:(BOOL)representation;
+ (id)_pas_stringWithDataNoCopy:(id)copy encoding:(unsigned long long)encoding nullTerminated:(BOOL)terminated;
+ (id)_pas_proxyStringByConcatenatingStrings:(id)strings;
+ (id)_pas_distilledStringClasses;

/* instance methods */
- (id)_pas_proxyArrayOfSubstringsWithRanges:(id)ranges;
- (id)_pas_stringBackedByUTF8CString;
- (void)_pas_setRetainsConmingledBackingStore:(BOOL)store;
- (BOOL)_pas_retainsConmingledBackingStore;
- (const char *)_pas_fastUTF8StringPtrWithOptions:(unsigned long long)options encodedLength:(unsigned long long *)length;
- (id)_pas_distilledString;
- (id)_pas_revivedString;
@end

#endif /* NSString__PASDistilledString_h */
