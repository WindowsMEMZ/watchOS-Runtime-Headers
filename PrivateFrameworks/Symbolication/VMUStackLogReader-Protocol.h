//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUStackLogReader_Protocol_h
#define VMUStackLogReader_Protocol_h
@import Foundation;

@protocol VMUStackLogReader <NSObject>

@property (readonly) unsigned int task;
@property (readonly) BOOL is64bit;
@property (readonly) BOOL inspectingLiveProcess;
@property (readonly) BOOL usesLiteMode;
@property (readonly) BOOL usesCoreFile;
@property (readonly) BOOL coldestFrameIsNotThreadId;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (readonly) struct _CSTypeRef { unsigned long long x0; unsigned long long x1; } symbolicator;
@property (retain, nonatomic) NSSet *excludedFrames;
@property (readonly) unsigned long long nodesInUniquingTable;

/* instance methods */
- (int)enumerateMSLRecordsAndPayloads:(id /* block */)payloads;
- (long long)getFramesForNode:(unsigned int)node inLiteZone:(BOOL)zone stackFramesBuffer:(unsigned long long *)buffer;
- (long long)getFramesForAddress:(unsigned long long)address size:(unsigned long long)size inLiteZone:(BOOL)zone stackFramesBuffer:(unsigned long long *)buffer;
- (long long)getFramesForStackID:(unsigned long long)id stackFramesBuffer:(unsigned long long *)buffer;
- (id)binaryImagePathForPCaddress:(unsigned long long)pcaddress;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })binaryImageRangeForPCaddress:(unsigned long long)pcaddress;
- (id)functionNameForPCaddress:(unsigned long long)pcaddress;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })functionRangeContainingPCaddress:(unsigned long long)pcaddress;
- (id)sourcePathForPCaddress:(unsigned long long)pcaddress;
- (id)sourceFileNameForPCaddress:(unsigned long long)pcaddress;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)pcaddress;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)pcaddress fullPath:(BOOL)path;
- (id)vmuVMRegionForAddress:(unsigned long long)address;
- (id)symbolicatedBacktraceForNode:(unsigned int)node nodeDetails:(struct { unsigned long long x0; unsigned int x1 :60; unsigned int x2 :4; id x3; })details isLiteZone:(BOOL)zone options:(unsigned long long)options;
- (id)symbolicatedBacktraceForStackID:(unsigned long long)id options:(unsigned long long)options;
- (id)symbolicatedBacktraceForFrames:(unsigned long long *)frames frameCount:(long long)count options:(unsigned long long)options;
@optional
/* instance methods */
- (unsigned long long)stackIDForNode:(unsigned int)node;
- (unsigned long long)timestampForNode:(unsigned int)node;
- (struct { unsigned long long x0; })liteMSLPayloadforMallocAddress:(unsigned long long)address size:(unsigned long long)size;
- (struct { unsigned long long x0; })liteMSLPayloadforVMregionAddress:(unsigned long long)address;
- (void)streamFullStackLogsToBlock:(id /* block */)block;
- (void)identifyNonObjectsUsingStackBacktraces:(id)backtraces classInfoMap:(id)map classInfoSetterBlock:(id /* block */)block;
@end

#endif /* VMUStackLogReader_Protocol_h */
