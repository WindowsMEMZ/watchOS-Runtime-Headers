//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef _TtC9StocksKit30StockServiceURLSessionDelegate_h
#define _TtC9StocksKit30StockServiceURLSessionDelegate_h
@import Foundation;

#include "NSURLSessionDelegate-Protocol.h"

@interface StocksKit.StockServiceURLSessionDelegate : NSObject<NSURLSessionDelegate> { // (Swift)
  /* instance variables */
   sessionDidFinishObservers;
}

/* instance methods */
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)urlsession;
- (id)init;
@end

#endif /* _TtC9StocksKit30StockServiceURLSessionDelegate_h */
