//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef NSData_KCJoiningMessages_h
#define NSData_KCJoiningMessages_h
@import Foundation;

@interface NSData (KCJoiningMessages)
/* class methods */
+ (id)dataWithEncodedString:(id)string error:(id *)error;
+ (id)dataWithEncodedSequenceData:(id)data data:(id)data error:(id *)error;
+ (id)dataWithEncodedSequenceString:(id)string data:(id)data error:(id *)error;

/* instance methods */
- (BOOL)decodeSequenceData:(id *)data data:(id *)data error:(id *)error;
- (BOOL)decodeSequenceString:(id *)string data:(id *)data error:(id *)error;
@end

#endif /* NSData_KCJoiningMessages_h */
