//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIBurstImageSetInternal_h
#define CIBurstImageSetInternal_h
@import Foundation;

#include "CIBurstActionClassifier.h"
#include "CIBurstImageFaceAnalysisContext.h"
#include "CIBurstYUVImage.h"

@class NSArray, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CIBurstImageSetInternal : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *dq;
  NSObject<OS_dispatch_queue> *dq_yuvdump;
  NSObject<OS_dispatch_semaphore> *sem;
  BOOL isAction;
  BOOL isPortrait;
  CIBurstImageFaceAnalysisContext *faceAnalysisContext;
  CIBurstYUVImage *overrideImage;
  NSDictionary *overrideProps;
  struct __sFILE { char * x0; int x1; int x2; short x3; short x4; struct __sbuf { char * x0; int x1; } x5; int x6; void * x7; undefined * x8; undefined * x9; undefined * x10; undefined * x11; struct __sbuf { char * x0; int x1; } x12; struct __sFILEX * x13; int x14; unsigned char x15[3] unsigned char x16[1] struct __sbuf { char * x0; int x1; } x17; int x18; long long x19; } * burstLogFileHandle;
  int curClusterIndexToProcess;
}

@property NSMutableArray *clusterArray;
@property int temporalOrder;
@property NSCountedSet *faceIDCounts;
@property NSMutableArray *allImageIdentifiers;
@property NSMutableDictionary *statsByImageIdentifier;
@property NSMutableDictionary *clusterByImageIdentifier;
@property NSString *burstLogFileName;
@property CIBurstActionClassifier *actionClassifier;
@property int maxNumPendingFrames;
@property BOOL enableAnalysis;
@property int dummyAnalysisCount;
@property BOOL enableFaceCore;
@property BOOL enableDumpYUV;
@property NSString *burstCoverSelection;
@property (retain, nonatomic) NSString *burstId;
@property NSArray *bestImageIdentifiersArray;
@property NSString *versionString;
@property int version;

/* class methods */
+ (id)defaultVersionString;

/* instance methods */
- (id)burstDocumentDirectory;
- (id)initWithOptions:(id)options;
- (void)dealloc;
- (float)computeActionSelectionThreshold;
- (void)processClusters:(BOOL)clusters;
- (void)addYUVImage:(id)yuvimage properties:(id)properties identifier:(id)identifier imageProps:(id)props completionBlock:(id /* block */)block;
- (void)addImageFromIOSurface:(struct __IOSurface *)iosurface properties:(id)properties identifier:(id)identifier completionBlock:(id /* block */)block;
- (int)computeEmotion:(id)emotion;
- (void)performEmotionalRejectionOnCluster:(id)cluster;
- (float)computeCameraTravelDistance;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (void)computeAllImageScores;
- (id)findBestImage:(id)image useActionScores:(BOOL)scores;
- (void)selectCoverPhotoFromMultiple:(id)multiple burstSize:(int)size;
- (id)bestImageIdentifiers;
- (id)imageClusterForIdentifier:(id)identifier;
- (BOOL)isFaceDetectionForced;
- (BOOL)isPortrait;
- (BOOL)isAction;
@end

#endif /* CIBurstImageSetInternal_h */
