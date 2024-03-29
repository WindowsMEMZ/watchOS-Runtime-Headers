//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFIMAPMessageDownload_h
#define MFIMAPMessageDownload_h
@import Foundation;

#include "MFIMAPCompoundDownload.h"
#include "MFCollectingDataConsumer-Protocol.h"
#include "_MFSharedBufferedDataConsumer.h"

@class MFMessage, MFMimePart;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload {
  /* instance variables */
  MFMessage *_message;
  MFMimePart *_topLevelPart;
  unsigned int x :1 _allowsPartialDownloads;
  unsigned int x :1 _usingPartialDownloads;
  unsigned int x :1 _startedFetch;
  unsigned int x :1 _fetchingMessageContents;
  unsigned int x :1 _fetchingBodyText;
  unsigned int x :1 _doneAddingSubdownloads;
  unsigned int x :1 _fetchBodyData;
  NSObject<MFCollectingDataConsumer> *_headerConsumer;
  _MFSharedBufferedDataConsumer *_textConsumer;
  unsigned long long _nextByteToFetch;
  BOOL _receivedHeaders;
  BOOL _receivedText;
}

/* instance methods */
- (id)initWithMessage:(id)message;
- (id)message;
- (BOOL)allowsPartialDownloads;
- (void)setAllowsPartialDownloads:(BOOL)downloads;
- (BOOL)partial;
- (id)topLevelPart;
- (void)setTopLevelPart:(id)part;
- (id)data;
- (BOOL)isComplete;
- (BOOL)isSuccessful;
- (void)handleFetchResult:(id)result;
- (void)processResults;
- (id)_networkConverterWithConsumer:(id)consumer didReceiveData:(id /* block */)data;
- (void)addCommandsToPipeline:(id)pipeline withCache:(id)cache;
- (void)_addSubdownloadForBodyTextWithCache:(id)cache;
- (void)setFetchBodyData:(BOOL)data;
- (BOOL)fetchBodyData;
@end

#endif /* MFIMAPMessageDownload_h */
