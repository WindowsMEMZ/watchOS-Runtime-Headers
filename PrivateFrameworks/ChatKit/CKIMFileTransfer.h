//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKIMFileTransfer_h
#define CKIMFileTransfer_h
@import Foundation;

#include "CKFileTransfer-Protocol.h"

@class IMMessage, NSDictionary, NSError, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CKIMFileTransfer : NSObject<CKFileTransfer> {
  /* instance variables */
  int _mediaObjectCount;
  IMMessage *_imMessage;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (copy, nonatomic) NSURL *linkFileURL;
@property (nonatomic) long long transferState;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (copy, nonatomic) NSURL *animatedImageCacheURL;
@property (nonatomic) BOOL fileIsAnimated;
@property (nonatomic) BOOL hasFinalizedAnimatedFlag;
@property (nonatomic) long long updateReason;
@property (retain, nonatomic) IMMessage *IMMessage;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSDictionary *transcoderUserInfo;
@property (readonly, copy, nonatomic) NSDictionary *stickerUserInfo;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long currentBytes;
@property (readonly, nonatomic) unsigned long long totalBytes;
@property (readonly, nonatomic) BOOL isSticker;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) BOOL hideAttachment;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) long long commSafetySensitive;
@property (readonly, nonatomic) BOOL fileURLFinalized;
@property (readonly, nonatomic) BOOL fileDataReady;
@property (readonly, nonatomic) BOOL rejected;
@property (readonly, nonatomic) BOOL downloadable;
@property (readonly, nonatomic) BOOL downloading;
@property (readonly, nonatomic) BOOL restoring;
@property (readonly, nonatomic) BOOL isFromMomentShare;
@property (readonly, copy, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) NSString *audioTranscriptionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithTransferGUID:(id)guid imMessage:(id)message;
- (id)initWithFileURL:(id)url transcoderUserInfo:(id)info attributionInfo:(id)info hideAttachment:(BOOL)attachment;
- (id)initWithFileURL:(id)url transcoderUserInfo:(id)info attributionInfo:(id)info hideAttachment:(BOOL)attachment isScreenshot:(BOOL)screenshot;
- (id)initWithStickerFileURL:(id)url transferUserInfo:(id)info attributionInfo:(id)info animatedImageCacheURL:(id)url;
- (BOOL)isFileURLFinalized;
- (BOOL)isRejected;
- (BOOL)isFileDataReady;
- (BOOL)isRestoring;
- (BOOL)isDownloadable;
- (BOOL)isDownloading;
- (void)mediaObjectAdded;
- (void)mediaObjectRemoved;
- (void)_faultInAnimatedFlagImmediately;
- (id)imFileTransferCenter;
- (id)notificationCenter;
- (id)fileManager;
- (id)linkFileURLWithFilename:(id)filename;
- (void)_reloadTransferAndDetermineIfUpdated:(inout BOOL *)updated;
- (void)reloadTransfer;
- (void)transferUpdated:(id)updated;
- (void)fetchHighQualityFile:(id /* block */)file;
@end

#endif /* CKIMFileTransfer_h */
