//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCloudSharedCommentsJob_h
#define PLCloudSharedCommentsJob_h
@import Foundation;

#include "PLCloudSharingJob.h"

@class NSArray, NSDictionary, NSString;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSArray *msASComments;
@property (retain, nonatomic) NSString *commentGUID;
@property (retain, nonatomic) NSString *assetGUID;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary;

/* class methods */
+ (void)publishCommentToServer:(id)server;
+ (void)deleteSharedCommentFromServer:(id)server;
+ (void)locallyProcessAddedComments:(id)comments assetGUID:(id)guid albumGUID:(id)guid info:(id)info;
+ (void)assetsdLocallyProcessAddedComments:(id)comments assetGUID:(id)guid albumGUID:(id)guid info:(id)info libraryServicesManager:(id)manager;
+ (void)locallyProcessDeletedComments:(id)comments info:(id)info;

/* instance methods */
- (void)encodeToXPCObject:(id)xpcobject;
- (id)initFromXPCObject:(id)xpcobject libraryServicesManager:(id)manager;
- (id)description;
- (long long)daemonOperation;
- (void)run;
- (BOOL)shouldArchiveXPCToDisk;
- (void)runDaemonSide;
- (void)executeProcessServerNotificationOfCommentChanges;
- (void)executePublishCommentToServer;
- (void)executeDeleteCommentFromServer;
@end

#endif /* PLCloudSharedCommentsJob_h */
