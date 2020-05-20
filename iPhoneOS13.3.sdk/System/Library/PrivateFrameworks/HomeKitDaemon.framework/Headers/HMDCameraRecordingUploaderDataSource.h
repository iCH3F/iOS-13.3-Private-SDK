//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraRecordingUploaderDataSource-Protocol.h>

@class NSURL;

@interface HMDCameraRecordingUploaderDataSource : HMFObject <HMDCameraRecordingUploaderDataSource>
{
}

- (void)submitOperationEvent:(id)arg1;
- (id)timerWithTimeInterval:(double)arg1 options:(NSUInteger)arg2;
- (void)appendData:(id)arg1 toStreamingAssetAppendContext:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)removeItemAtURL:(id)arg1 error:(id )arg2;
- (BOOL)writeData:(id)arg1 toFileAtURL:(id)arg2 error:(id )arg3;
- (BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 error:(id )arg3;
@property(readonly, copy) NSURL *storeDirectoryURL;

@end

