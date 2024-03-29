//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSInteractionPredictor_h
#define _PSInteractionPredictor_h
@import Foundation;

#include "_PSKNNModelConfiguration.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSURL, _CDInteractionStore;

@interface _PSInteractionPredictor : NSObject

@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) NSDictionary *currentClusterDictionary;
@property (retain, nonatomic) NSDate *currentArchiveDate;
@property (retain, nonatomic) NSMutableDictionary *conversationIDMap;
@property (retain, nonatomic) _PSKNNModelConfiguration *modelConfiguration;
@property (retain, nonatomic) NSURL *compiledModelURL;

/* class methods */
+ (id)defaultClustersArchiveDirectory;
+ (id)clustersArchiveFileForDate:(id)date modelName:(id)name;
+ (id)getModelURLfromName:(id)name;
+ (id)getIntermediateModelURLForModelName:(id)name;
+ (id)loadModelFromUrl:(id)url;
+ (BOOL)removeMlmodelcFolderAtPath:(id)path;
+ (BOOL)cloneAdaptableModelURL:(id)url toFilePathURL:(id)url;
+ (void)deleteArchiveFileAtDate:(id)date modelName:(id)name;
+ (void)deleteArchiveFiles;

/* instance methods */
- (id)getConversationIDFromInteraction:(id)interaction;
- (id)findLatestArchiveDateBefore:(id)before modelName:(id)name;
- (id)initWithInteractionStore:(id)store atDate:(id)date withModelName:(id)name modelConfiguration:(id)configuration;
- (id)getDateNumDays:(int)days AfterDate:(id)date;
- (id)getTrainArrayToDate:(id)date withStartDateAnchor:(id)anchor;
- (id)getConversationIDLogFromTrainArray:(id)array;
- (id)convertLogToClusterPointArray:(id)array;
- (id)getClusterDictionaryFromTrainArray:(id)array usingDBSCANParamsMinPts:(int)pts andEps:(double)eps;
- (double)getMinDistanceForPt:(id)pt toClusters:(id)clusters;
- (double)timeSinceLastContactTo:(id)to FromDate:(id)date inTrainArray:(id)array;
- (id)getLastContactedDictionaryFromTrainArray:(id)array;
- (void)writeArchive:(id)archive toFilePath:(id)path;
- (void)writeClusterArchiveFromClusterDict:(id)dict withDate:(id)date;
- (id)getDictionaryFromClustersArchiveAtPath:(id)path;
- (id)getOrMakeClusterDictionaryAtDate:(id)date;
- (id)getRecencyResultsShowingNumValues:(int)values fromTrainArray:(id)array;
- (id)getClusteringResultsForPoint:(id)point usingClusterDictionary:(id)dictionary;
- (id)createMLArrayProviderFromTrainArray:(id)array;
- (void)printModelWeights:(id)weights;
- (void)trainAtDate:(id)date usingCompiledModelURL:(id)url andSaveToURL:(id)url;
- (id)predictAtDate:(id)date usingModelAtURL:(id)url showNumSuggestions:(int)suggestions;
- (id)rankedZkwSuggestionsFromPredictionArray:(id)array forBundleID:(id)id;
@end

#endif /* _PSInteractionPredictor_h */
