//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSMutableData_EmailFoundationAdditions_h
#define NSMutableData_EmailFoundationAdditions_h
@import Foundation;

@interface NSMutableData (EmailFoundationAdditions)
/* instance methods */
- (void)ef_deleteBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)ef_deleteBytesInData:(id)data beforeOccurrencesOfData:(id)data;
- (void)ef_replaceContiguousSequencesOfBytesInData:(id)data withData:(id)data;
@end

#endif /* NSMutableData_EmailFoundationAdditions_h */
