//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 660.60.3.0.0
//
#ifndef CacheManagementAsset_h
#define CacheManagementAsset_h
@import Foundation;

@class NSData, NSString;

@interface CacheManagementAsset : NSObject

@property (readonly) unsigned int assetVersion;
@property double expiration_date;
@property double consumed_date;
@property double download_start_date;
@property double download_completion_date;
@property double last_viewed_date;
@property (retain) NSString *absolutePath;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *relativePath;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSData *metadata;
@property (retain, nonatomic) NSData *thumbnailData;
@property int priority;

/* class methods */
+ (id)assetWithRelativePath:(id)path identifier:(id)identifier expirationDate:(id)date contentType:(id)type metadata:(id)metadata priority:(int)priority;
+ (id)assetFromData:(id)data;
+ (id)assetFromFile:(id)file withIdentifier:(id)identifier;
+ (id)assetFromPath:(id)path withIdentifier:(id)identifier createIfAbsent:(BOOL)absent;
+ (id)assetFromPath:(id)path withIdentifier:(id)identifier;

/* instance methods */
- (id)initWithRelativePath:(id)path identifier:(id)identifier expirationDate:(id)date contentType:(id)type metadata:(id)metadata priority:(int)priority;
- (id)initWithFlattenedAsset:(struct { unsigned int x0; double x1; double x2; double x3; double x4; double x5; int x6; BOOL x7; long long x8; long long x9; long long x10; long long x11; long long x12; char x13[0] } *)asset;
- (struct { unsigned int x0; double x1; double x2; double x3; double x4; double x5; int x6; BOOL x7; long long x8; long long x9; long long x10; long long x11; long long x12; char x13[0] } *)createFlattenedAsset:(long long *)asset;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)setExpirationDate:(id)date;
- (id)expirationDate;
- (void)setConsumedDate:(id)date;
- (id)consumedDate;
- (void)setDownloadStartDate:(id)date;
- (id)downloadStartDate;
- (void)setDownloadCompletionDate:(id)date;
- (id)downloadCompletionDate;
- (void)setLastViewedDate:(id)date;
- (id)lastViewedDate;
- (id)fullPath;
- (void)commit;
- (int)purgeabilityScoreAtUrgency:(int)urgency;
- (long long)size;
- (long long)sizeCached:(BOOL)cached;
- (id)description;
@end

#endif /* CacheManagementAsset_h */
