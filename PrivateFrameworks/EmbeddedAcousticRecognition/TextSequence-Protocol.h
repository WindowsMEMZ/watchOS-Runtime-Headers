//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef TextSequence_Protocol_h
#define TextSequence_Protocol_h
@import Foundation;

@protocol TextSequence <NSObject>
/* instance methods */
- (id)initWithLength:(unsigned long long)length;
- (void)addWordWithInputId:(unsigned long long)id;
- (id)sequence;
@end

#endif /* TextSequence_Protocol_h */
