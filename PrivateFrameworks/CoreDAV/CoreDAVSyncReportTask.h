//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVSyncReportTask_h
#define CoreDAVSyncReportTask_h
@import Foundation;

#include "CoreDAVPropertyFindBaseTask.h"

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask

@property (readonly, nonatomic) NSString *previousSyncToken;
@property (readonly, nonatomic) NSString *nextSyncToken;
@property (readonly, nonatomic) BOOL moreToSync;
@property (readonly, nonatomic) BOOL wasInvalidSyncToken;

/* instance methods */
- (id)initWithPropertiesToFind:(id)find atURL:(id)url withDepth:(int)depth previousSyncToken:(id)token;
- (id)description;
- (id)httpMethod;
- (id)requestBody;
- (id)notFoundHREFs;
- (id)copyDefaultParserForContentType:(id)type;
- (BOOL)hadUnexpectedChangeOfSyncTokenWithZeroResponses;
- (void)finishCoreDAVTaskWithError:(id)error;
@end

#endif /* CoreDAVSyncReportTask_h */
