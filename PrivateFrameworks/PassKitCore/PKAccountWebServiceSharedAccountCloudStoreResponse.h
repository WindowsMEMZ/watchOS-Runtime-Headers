//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountWebServiceSharedAccountCloudStoreResponse_h
#define PKAccountWebServiceSharedAccountCloudStoreResponse_h
@import Foundation;

#include "PKAccountWebServiceResponse.h"
#include "PKSharedAccountCloudStore.h"

@interface PKAccountWebServiceSharedAccountCloudStoreResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKSharedAccountCloudStore *sharedAccountCloudStore;

/* instance methods */
- (id)initWithData:(id)data;
@end

#endif /* PKAccountWebServiceSharedAccountCloudStoreResponse_h */
