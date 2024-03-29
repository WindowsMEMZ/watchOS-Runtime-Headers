//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKConvenienceConfiguration_h
#define CKConvenienceConfiguration_h
@import Foundation;

#include "CKOperationConfiguration.h"
#include "CKOperationGroup.h"

@protocol CKConvenienceCallbackWrapperProtocol;

@interface CKConvenienceConfiguration : NSObject

@property (readonly, nonatomic) CKOperationConfiguration *configuration;
@property (readonly, nonatomic) CKOperationGroup *group;
@property (readonly, nonatomic) NSObject<CKConvenienceCallbackWrapperProtocol> *convenienceCallbacks;

/* instance methods */
- (id)initWithConfiguration:(id)configuration group:(id)group;
- (id)initWithConfiguration:(id)configuration group:(id)group convenienceCallbackWrapper:(id)wrapper;
@end

#endif /* CKConvenienceConfiguration_h */
