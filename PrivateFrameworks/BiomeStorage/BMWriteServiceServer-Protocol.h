//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMWriteServiceServer_Protocol_h
#define BMWriteServiceServer_Protocol_h
@import Foundation;

@protocol BMWriteServiceServer 
/* instance methods */
- (void)configureConnectionForUseCase:(id)case reply:(id /* block */)reply;
- (void)writeData:(id)data version:(unsigned int)version timestamp:(double)timestamp toStream:(id)stream asUser:(unsigned int)user reply:(id /* block */)reply;
@end

#endif /* BMWriteServiceServer_Protocol_h */
