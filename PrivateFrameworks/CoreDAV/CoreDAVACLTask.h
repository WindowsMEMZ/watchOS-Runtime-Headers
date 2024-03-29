//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVACLTask_h
#define CoreDAVACLTask_h
@import Foundation;

#include "CoreDAVTask.h"
#include "CoreDAVACLTaskDelegate-Protocol.h"

@class NSArray;

@interface CoreDAVACLTask : CoreDAVTask

@property (retain, nonatomic) NSArray *accessControlEntities;
@property (weak, @dynamic, nonatomic) NSObject<CoreDAVACLTaskDelegate> *delegate;

/* instance methods */
- (id)initWithURL:(id)url;
- (id)initWithAccessControlEntities:(id)entities atURL:(id)url;
- (id)description;
- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)error;
@end

#endif /* CoreDAVACLTask_h */
