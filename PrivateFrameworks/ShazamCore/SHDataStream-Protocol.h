//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHDataStream_Protocol_h
#define SHDataStream_Protocol_h
@import Foundation;

@protocol SHDataStream <NSObject>

@property (retain, nonatomic) NSObject<SHDataStream> *next;

/* instance methods */
- (BOOL)processData:(id)data error:(id *)error;
- (BOOL)closeWithError:(id *)error;
@end

#endif /* SHDataStream_Protocol_h */
