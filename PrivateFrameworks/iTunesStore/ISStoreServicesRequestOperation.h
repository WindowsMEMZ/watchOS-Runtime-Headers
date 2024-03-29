//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISStoreServicesRequestOperation_h
#define ISStoreServicesRequestOperation_h
@import Foundation;

#include "ISOperation.h"

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation

@property (readonly) SSRequest *request;

/* instance methods */
- (id)initWithRequest:(id)request;
- (void)dealloc;
- (void)cancel;
- (void)run;
@end

#endif /* ISStoreServicesRequestOperation_h */
