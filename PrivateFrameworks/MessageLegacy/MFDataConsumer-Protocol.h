//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFDataConsumer_Protocol_h
#define MFDataConsumer_Protocol_h
@import Foundation;

@protocol MFDataConsumer <NSObject>
/* instance methods */
- (long long)appendData:(id)data;
- (void)done;
@end

#endif /* MFDataConsumer_Protocol_h */
