//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef NSNumber_CUByteCodable_h
#define NSNumber_CUByteCodable_h
@import Foundation;

@interface NSNumber (CUByteCodable) <CUByteCodable>
/* class methods */
+ (id)createWithBytesNoCopy:(void *)copy length:(unsigned long long)length error:(id *)error;

/* instance methods */
- (const char *)encodedBytesAndReturnLength:(unsigned long long *)length error:(id *)error;
- (id)encodedDataAndReturnError:(id *)error;
@end

#endif /* NSNumber_CUByteCodable_h */
