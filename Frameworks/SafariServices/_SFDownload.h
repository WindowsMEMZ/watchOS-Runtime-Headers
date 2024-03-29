//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFDownload_h
#define _SFDownload_h
@import Foundation;

#include "SFDownloadFile.h"
#include "SFDownloadFileDelegate-Protocol.h"
#include "WBSFluidProgressStateSource-Protocol.h"
#include "_SFDownloadDelegate-Protocol.h"
#include "_WKDownloadDelegate-Protocol.h"

@class NSData, NSDate, NSDictionary, NSString, NSTimer, NSURL, NSURLRequest, NSURLResponse, NSUUID, SFQuickLookDocument, WBSFluidProgressController, WBSFluidProgressState, WKWebView, _WKDownload, _WKUserInitiatedAction;
@protocol _SFDownloadPlaceholderImporter;

@interface _SFDownload : NSObject<SFDownloadFileDelegate, _WKDownloadDelegate, WBSFluidProgressStateSource> {
  /* instance variables */
  _WKDownload *_download;
  BOOL _wasCanceled;
  WBSFluidProgressState *_fluidProgressState;
  double _timeLastProgressNotificationWasSent;
  long long _cachedFileType;
  NSTimer *_reportUpdatedProgressTimer;
  WKWebView *_originatingWebView;
  NSData *_resumeData;
  SFDownloadFile *_placeholderFile;
  SFDownloadFile *_completedFile;
  NSString *_suggestedFilename;
  NSURLRequest *_request;
}

@property (retain, nonatomic) SFQuickLookDocument *quickLookDocument;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSString *fileDownloadPath;
@property (readonly, nonatomic) long long fileType;
@property (readonly, nonatomic) _WKUserInitiatedAction *userInitiatedAction;
@property (readonly, copy, nonatomic) NSString *uti;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) _WKDownload *wkDownload;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *filenameWithoutExtension;
@property (readonly, nonatomic) NSURL *completedFileURL;
@property (readonly, nonatomic) long long dataOwner;
@property (nonatomic) BOOL explicitlySaved;
@property (nonatomic) BOOL suppressesPrompt;
@property (readonly, nonatomic) long long bytesExpected;
@property (readonly, nonatomic) unsigned long long bytesLoaded;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL idle;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (readonly, nonatomic) NSDate *dateFinished;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL canResume;
@property (readonly, nonatomic) BOOL canReveal;
@property (weak, nonatomic) WBSFluidProgressController *fluidProgressController;
@property (weak, nonatomic) NSObject<_SFDownloadDelegate> *delegate;
@property (weak, nonatomic) NSObject<_SFDownloadPlaceholderImporter> *placeholderImporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)provisionalDownloadWithMIMEType:(id)mimetype request:(id)request response:(id)response filename:(id)filename uti:(id)uti userInitiatedAction:(id)action;
+ (id)_sharedQueue;
+ (id)downloadDestinationPathWithFilename:(id)filename;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_cancelReportUpdatedProgressTimer;
- (void)_reportUpdatedProgressSoon;
- (void)_reportUpdatedProgressTimerFired:(id)fired;
- (void)_reportUpdatedProgressNow;
- (BOOL)isIdle;
- (void)removeFromDisk;
- (void)removeDataAndPlaceholderFromDisk;
- (void)cancel;
- (id)initWithDictionaryRepresentation:(id)representation didUpdateRepresentation:(BOOL *)representation;
- (id)completedFileURL:(BOOL *)url;
- (void)_validateSandboxAccessToURL:(id)url;
- (void)resumeInProcessPool:(id)pool;
- (void)_importPlaceholderIfNeeded:(id /* block */)needed;
- (void)_didImportPlaceholderAtURL:(id)url completionHandler:(id /* block */)handler;
- (void)_importCompleteDownloadIfNeeded;
- (void)_didImportFileAtURL:(id)url completionHandler:(id /* block */)handler;
- (void)reveal;
- (id)_createResumeData;
- (void)_notifyDelegateOfFinishedDownload;
- (void)downloadFileContentsDidChange:(id)change;
- (void)downloadFileWillBeDeleted:(id)deleted;
- (void)downloadFileDidChangeURL:(id)url;
- (void)_downloadDidStart:(id)start;
- (void)_download:(id)_download didReceiveResponse:(id)response;
- (void)_download:(id)_download didWriteData:(unsigned long long)data totalBytesWritten:(unsigned long long)written totalBytesExpectedToWrite:(unsigned long long)write;
- (void)_didUpdateBytesLoaded;
- (void)_download:(id)_download decideDestinationWithSuggestedFilename:(id)filename completionHandler:(id /* block */)handler;
- (void)_continueAfterDownloadConfirmation:(BOOL)confirmation destinationCompletionHandler:(id /* block */)handler;
- (void)_continueAfterDecidingFileDownloadPath:(id /* block */)path;
- (void)_downloadDidFinish:(id)finish;
- (void)_download:(id)_download didFailWithError:(id)error;
- (void)_downloadDidCancel:(id)cancel;
- (void)_downloadProcessDidCrash:(id)crash;
- (BOOL)createFluidProgressState;
- (void)clearFluidProgressState;
- (id)progressState;
- (id)expectedOrCurrentURL;
- (double)estimatedProgress;
- (BOOL)hasFailedURL;
@end

#endif /* _SFDownload_h */
