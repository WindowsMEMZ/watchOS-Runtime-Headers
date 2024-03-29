//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef _SUICEditScriptData_Protocol_h
#define _SUICEditScriptData_Protocol_h
@import Foundation;

@protocol _SUICEditScriptData <NSObject>
/* class methods */
+ (id)EditScriptDataWithString:(id)string chunkSize:(long long)size;
+ (id)EditScriptDataWithArray:(id)array;
/* instance methods */
- (long long)length;
- (id)stringAtIndex:(long long)index;
- (id)stringValue;
- (long long)lengthOfItem:(long long)item;
- (long long)characterIndexForItem:(long long)item;
- (long long)indexOfFirstDifferenceWithOtherData:(id)data shouldReverseIterate:(BOOL)iterate fallsOnWordBoundary:(BOOL *)boundary;
@end

#endif /* _SUICEditScriptData_Protocol_h */
