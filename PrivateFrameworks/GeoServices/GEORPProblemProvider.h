//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORPProblemProvider_h
#define GEORPProblemProvider_h
@import Foundation;

#include "GEOProtobufSession.h"
#include "GEOProtobufSessionTask.h"
#include "GEOProtobufSessionTaskDelegate-Protocol.h"

@class NSString;

@interface GEORPProblemProvider : NSObject<GEOProtobufSessionTaskDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEOProtobufSession *protobufSession;
@property (retain, nonatomic) GEOProtobufSessionTask *submissionTask;
@property (retain, nonatomic) GEOProtobufSessionTask *statusTask;
@property (copy, nonatomic) id /* block */ submissionErrorHandler;
@property (copy, nonatomic) id /* block */ submissionFinishedHandler;
@property (copy, nonatomic) id /* block */ statusErrorHandler;
@property (copy, nonatomic) id /* block */ statusFinishedHandler;

/* instance methods */
- (void)protobufSession:(id)session didCompleteTask:(id)task;
- (void)didCompleteSubmissionTask;
- (void)didCompleteStatusTask;
- (id)cancelError;
- (id)init;
- (void)startSubmissionRequest:(id)request finished:(id /* block */)finished error:(id /* block */)error;
- (void)startStatusRequest:(id)request finished:(id /* block */)finished error:(id /* block */)error;
- (void)cancelRequest;
@end

#endif /* GEORPProblemProvider_h */
