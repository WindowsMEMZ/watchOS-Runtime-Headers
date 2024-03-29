//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef NSURLDownload_h
#define NSURLDownload_h
@import Foundation;

#include "NSURLAuthenticationChallengeSender-Protocol.h"
#include "NSURLDownloadInternal.h"
#include "NSURLRequest.h"

@class NSData, NSString;

@interface NSURLDownload : NSObject<NSURLAuthenticationChallengeSender> {
  /* instance variables */
  NSURLDownloadInternal *_internal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSData *resumeData;
@property BOOL deletesFileUponFailure;

/* class methods */
+ (id)_downloadWithLoadingConnection:(id)connection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;
+ (id)_downloadWithLoadingCFURLConnection:(struct _CFURLConnection *)cfurlconnection request:(struct _CFURLRequest *)request response:(struct _CFURLResponse *)response delegate:(id)delegate proxy:(id)proxy;
+ (id)_downloadWithRequest:(id)request delegate:(id)delegate directory:(id)directory;
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)mimetype;

/* instance methods */
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)challenge;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)challenge;
- (void)cancelAuthenticationChallenge:(id)challenge;
- (id)init;
- (id)initWithRequest:(id)request delegate:(id)delegate;
- (id)_initWithLoadingConnection:(id)connection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;
- (id)_initWithLoadingCFURLConnection:(struct _CFURLConnection *)cfurlconnection request:(struct _CFURLRequest *)request response:(struct _CFURLResponse *)response delegate:(id)delegate proxy:(id)proxy;
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;
- (id)_initWithResumeInformation:(id)information delegate:(id)delegate path:(id)path;
- (id)initWithResumeData:(id)data delegate:(id)delegate path:(id)path;
- (id)_resumeInformation;
- (void)dealloc;
- (void)cancel;
- (void)setDestination:(id)destination allowOverwrite:(BOOL)overwrite;
- (void)_setDelegateQueue:(id)queue;
- (id)url;
- (id)_directoryPath;
- (void)_setDelegate:(id)delegate;
- (void)_setDirectoryPath:(id)path;
- (void)withDelegate:(id /* block */)delegate;
@end

#endif /* NSURLDownload_h */
