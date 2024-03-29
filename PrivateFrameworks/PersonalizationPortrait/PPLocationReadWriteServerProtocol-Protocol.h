//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPLocationReadWriteServerProtocol_Protocol_h
#define PPLocationReadWriteServerProtocol_Protocol_h
@import Foundation;

@protocol PPLocationReadWriteServerProtocol 
/* instance methods */
- (void)donateLocations:(id)locations source:(id)source contextualNamedEntities:(id)entities algorithm:(unsigned short)algorithm cloudSync:(BOOL)sync decayRate:(double)rate completion:(id /* block */)completion;
- (void)cloudSyncWithCompletion:(id /* block */)completion;
- (void)clearWithCompletion:(id /* block */)completion;
@end

#endif /* PPLocationReadWriteServerProtocol_Protocol_h */
