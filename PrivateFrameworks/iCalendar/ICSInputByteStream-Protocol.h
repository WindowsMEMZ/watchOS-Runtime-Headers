//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef ICSInputByteStream_Protocol_h
#define ICSInputByteStream_Protocol_h
@import Foundation;

@protocol ICSInputByteStream <NSObject>
/* instance methods */
- (char)read;
- (BOOL)eos;
@end

#endif /* ICSInputByteStream_Protocol_h */
