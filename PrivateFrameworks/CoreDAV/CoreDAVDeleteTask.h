//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVDeleteTask_h
#define CoreDAVDeleteTask_h
@import Foundation;

#include "CoreDAVActionBackedTask.h"
#include "CoreDAVTaskDelegate-Protocol.h"

@class NSString;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask

@property (weak, @dynamic, nonatomic) NSObject<CoreDAVTaskDelegate> *delegate;
@property (retain, nonatomic) NSString *previousETag;

/* instance methods */
- (id)description;
- (id)httpMethod;
- (id)additionalHeaderValues;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)error;
@end

#endif /* CoreDAVDeleteTask_h */
