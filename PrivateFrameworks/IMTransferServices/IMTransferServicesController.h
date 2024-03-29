//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMTransferServicesController_h
#define IMTransferServicesController_h
@import Foundation;

@interface IMTransferServicesController : NSObject
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)_sendFilePath:(id)path topic:(id)topic userInfo:(id)info transferID:(id)id sourceAppID:(id)id encryptFile:(BOOL)file retries:(int)retries progressBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)sendFilePath:(id)path topic:(id)topic transferID:(id)id encryptFile:(BOOL)file progressBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)sendFilePath:(id)path topic:(id)topic userInfo:(id)info transferID:(id)id encryptFile:(BOOL)file progressBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)sendFilePath:(id)path topic:(id)topic userInfo:(id)info transferID:(id)id sourceAppID:(id)id encryptFile:(BOOL)file progressBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)_receiveFileTransfer:(id)transfer topic:(id)topic path:(id)path requestURLString:(id)urlstring ownerID:(id)id sourceAppID:(id)id signature:(id)signature decryptionKey:(id)key retries:(int)retries fileSize:(unsigned long long)size progressBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)receiveFileTransfer:(id)transfer topic:(id)topic path:(id)path requestURLString:(id)urlstring ownerID:(id)id signature:(id)signature decryptionKey:(id)key fileSize:(unsigned long long)size progressBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)receiveFileTransfer:(id)transfer topic:(id)topic path:(id)path requestURLString:(id)urlstring ownerID:(id)id sourceAppID:(id)id signature:(id)signature decryptionKey:(id)key fileSize:(unsigned long long)size progressBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)cancelSendTransferID:(id)id;
- (void)preWarmMMCSForOwnerID:(id)id;
- (void)getNicknameWithRecordID:(id)id decryptionKey:(id)key completionBlock:(id /* block */)block;
- (void)getNicknameWithRecordID:(id)id decryptionKey:(id)key wallpaperDataTag:(id)tag wallpaperLowResDataTag:(id)tag wallpaperMetadataTag:(id)tag completionBlock:(id /* block */)block;
- (void)getNicknameWithRecordID:(id)id decryptionKey:(id)key wallpaperDataTag:(id)tag wallpaperLowResDataTag:(id)tag wallpaperMetadataTag:(id)tag isKnownSender:(BOOL)sender completionBlock:(id /* block */)block;
- (void)setPersonalNickname:(id)nickname oldRecordID:(id)id completionBlock:(id /* block */)block;
- (void)setPersonalNickname:(id)nickname oldRecordID:(id)id completionBlockWithWallpaperTags:(id /* block */)tags;
- (void)deleteAllPersonalNicknamesWithCompletion:(id /* block */)completion;
@end

#endif /* IMTransferServicesController_h */
