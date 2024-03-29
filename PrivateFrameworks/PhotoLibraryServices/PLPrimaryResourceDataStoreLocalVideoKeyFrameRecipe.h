//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe_h
#define PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe_h
@import Foundation;

#include "PLResourceRecipe.h"
#include "PLLocalVideoKeyFrameJobQueue.h"

@interface PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe : PLResourceRecipe {
  /* instance variables */
  PLLocalVideoKeyFrameJobQueue *_jobQueue;
}

/* class methods */
+ (void)generateKeyFrameFromVideoURL:(id)url time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time completion:(id /* block */)completion;
+ (void)generateKeyFrameFromVideoURL:(id)url destinationURL:(id)url time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time completion:(id /* block */)completion;

/* instance methods */
- (id)initWithRecipeID:(unsigned int)id;
- (unsigned int)recipeID;
- (id)codecFourCharCodeName;
- (id)colorSpaceGivenSourceColorSpace:(id)space inContext:(id)context;
- (id)chooseIngredientsFrom:(id)from version:(unsigned int)version;
- (void)generateAndStoreForAsset:(id)asset version:(unsigned int)version imageConversionClient:(id)client videoConversionClient:(id)client conversionServiceOptions:(id)options deferredPhotoFinalizer:(id)finalizer progress:(id *)progress reason:(id)reason completion:(id /* block */)completion;
- (void)generateAndStoreForAsset:(id)asset networkAccessAllowed:(BOOL)allowed clientBundleID:(id)id progress:(id *)progress completion:(id /* block */)completion;
- (void)_handleKeyFrameGeneratedWithAsset:(id)asset destinationURL:(id)url completion:(id /* block */)completion;
- (void)_generateAndStoreForAsset:(id)asset networkAccessAllowed:(BOOL)allowed clientBundleID:(id)id progress:(id *)progress completion:(id /* block */)completion;
- (void)_handleJobFinished:(id)finished withMutatedMoc:(id)moc error:(id)error storedRecipes:(id)recipes affectedRecipes:(id)recipes sourceMetadata:(id)metadata;
- (void)_runNextJob;
@end

#endif /* PLPrimaryResourceDataStoreLocalVideoKeyFrameRecipe_h */
