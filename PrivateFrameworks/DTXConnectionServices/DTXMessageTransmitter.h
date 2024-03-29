//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTXMessageTransmitter_h
#define DTXMessageTransmitter_h
@import Foundation;

@interface DTXMessageTransmitter : NSObject

@property unsigned int suggestedFragmentSize;

/* instance methods */
- (unsigned int)fragmentsForLength:(unsigned long long)length;
- (void)transmitMessage:(id)message routingInfo:(struct DTXMessageRoutingInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3 :1; unsigned int x4 :31; })info fragment:(unsigned int)fragment transmitter:(id /* block */)transmitter;
@end

#endif /* DTXMessageTransmitter_h */
