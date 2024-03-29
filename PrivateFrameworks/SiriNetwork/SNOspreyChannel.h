//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.2.1.0.0
//
#ifndef SNOspreyChannel_h
#define SNOspreyChannel_h
@import Foundation;

#include "OspreyChannel.h"

@interface SNOspreyChannel : OspreyChannel { // (Swift)
  /* instance variables */
   connectionConfiguration;
   ospreyClientStreamingContext;
   ospreyRequestBuilder;
}

/* instance methods */
- (id)bidirectionalStreamingRequestWithMethodName:(id)name requestBuilder:(id /* block */)builder streamingResponseHandler:(id /* block */)handler completion:(id /* block */)completion;
- (id)initWithURL:(id)url configuration:(id)configuration;
- (id)initWithURL:(id)url configuration:(id)configuration useCache:(BOOL)cache;
- (id)init;
@end

#endif /* SNOspreyChannel_h */
