//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPSocialHighlightClientProtocol_Protocol_h
#define PPSocialHighlightClientProtocol_Protocol_h
@import Foundation;

@protocol PPSocialHighlightClientProtocol 
/* instance methods */
- (void)rankedHighlightsBatch:(id)batch isLast:(BOOL)last error:(id)error queryId:(unsigned long long)id completion:(id /* block */)completion;
@end

#endif /* PPSocialHighlightClientProtocol_Protocol_h */
