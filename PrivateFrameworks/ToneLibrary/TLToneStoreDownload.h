//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TLToneStoreDownload_h
#define TLToneStoreDownload_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue;

@interface TLToneStoreDownload : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  NSString *_accessQueueLabel;
  BOOL _isRingtone;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *albumTitle;
@property (copy, nonatomic) NSString *artistName;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *genreName;
@property (nonatomic) BOOL ringtone;
@property (nonatomic) unsigned long long storeItemIdentifier;
@property (nonatomic) float downloadProgress;
@property (copy, nonatomic) NSString *toneIdentifier;
@property (readonly, nonatomic) NSString *identifier;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_setName:(id)name;
- (void)_setAlbumTitle:(id)title;
- (void)_setArtistName:(id)name;
- (void)_setDuration:(double)duration;
- (void)_setGenreName:(id)name;
- (BOOL)isRingtone;
- (void)_setRingtone:(BOOL)ringtone;
- (void)_setStoreItemIdentifier:(unsigned long long)identifier;
- (void)_setDownloadProgress:(float)progress;
- (void)_setToneIdentifier:(id)identifier;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* TLToneStoreDownload_h */
