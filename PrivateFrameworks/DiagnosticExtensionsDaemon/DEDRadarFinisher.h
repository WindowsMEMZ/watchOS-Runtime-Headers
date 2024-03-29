//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDRadarFinisher_h
#define DEDRadarFinisher_h
@import Foundation;

#include "DEDBugSession.h"
#include "DEDBugSessionConfiguration.h"
#include "DEDFinisher-Protocol.h"
#include "DEDSecureArchiving-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "NSURLSessionDataDelegate-Protocol.h"

@class NSMutableSet, NSString, NSURLSession;
@protocol OS_os_log;

@interface DEDRadarFinisher : NSObject<NSURLSessionDataDelegate, DEDFinisher, NSSecureCoding, DEDSecureArchiving>

@property (weak) DEDBugSession *session;
@property (weak) DEDBugSessionConfiguration *configuration;
@property (retain) NSObject<OS_os_log> *log;
@property float percentComplete;
@property int retryAttemptCount;
@property (retain) NSMutableSet *uploadItems;
@property (retain) NSURLSession *urlSession;
@property (retain) NSMutableSet *verificationTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)archivedClasses;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithConfiguration:(id)configuration session:(id)session;
- (void)finishSession:(id)session withConfiguration:(id)configuration;
- (id)createUploadTaskForAttachment:(id)attachment atRadarURL:(id)url;
- (id)folderNameForAttachmentGroup:(id)group;
- (id)getUploadItemForTask:(id)task;
- (BOOL)allUploadsComplete;
- (id)getVerificationTaskForDataTask:(id)task;
- (BOOL)allVerificationTasksComplete;
- (void)startAttachmentVerificationTasks;
- (void)processVerifyTaskResults;
- (void)finishRadarUploadSession;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
@end

#endif /* DEDRadarFinisher_h */
