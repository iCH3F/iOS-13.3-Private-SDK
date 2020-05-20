//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMBLocalZone, HMCameraClipEncryptionManager, HMDCameraClipCreateOperation, HMDCameraClipFinalizeOperation, HMDCameraClipPosterFrameUploadOperation, HMDCameraClipSegmentMetadata, HMDCameraClipVideoSegmentUploadOperation, HMDCameraSignificantEventNotificationOperation, NSData, NSDate, NSDictionary, NSUUID;
@protocol HMDCameraRecordingUploaderDataSource;

@protocol HMDCameraRecordingUploaderFactory <NSObject>
@property(readonly) id <HMDCameraRecordingUploaderDataSource> dataSource;
- (HMDCameraClipFinalizeOperation *)createFinalizeOperationForModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 encryptionManager:(HMCameraClipEncryptionManager *)arg3 dataSource:(id <HMDCameraRecordingUploaderDataSource>)arg4;
- (HMDCameraSignificantEventNotificationOperation *)createSignificantEventOperationForModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 encryptionManager:(HMCameraClipEncryptionManager *)arg3 dateOfOccurrence:(NSDate *)arg4 significantEventReason:(NSUInteger)arg5 confidenceLevel:(NSUInteger)arg6 heroFrameData:(NSData *)arg7 offset:(double)arg8 homePresenceByPairingIdentity:(NSDictionary *)arg9 dataSource:(id <HMDCameraRecordingUploaderDataSource>)arg10;
- (HMDCameraClipPosterFrameUploadOperation *)createPosterFrameUploadOperationForModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 encryptionManager:(HMCameraClipEncryptionManager *)arg3 segmentData:(NSData *)arg4 segmentMetadata:(HMDCameraClipSegmentMetadata *)arg5 dataSource:(id <HMDCameraRecordingUploaderDataSource>)arg6;
- (HMDCameraClipVideoSegmentUploadOperation *)createVideoSegmentUploadOperationForModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 encryptionManager:(HMCameraClipEncryptionManager *)arg3 segmentData:(NSData *)arg4 segmentMetadata:(HMDCameraClipSegmentMetadata *)arg5 dataSource:(id <HMDCameraRecordingUploaderDataSource>)arg6;
- (HMDCameraClipCreateOperation *)createClipOperationForLocalZone:(HMBLocalZone *)arg1 targetFragmentDuration:(double)arg2 startDate:(NSDate *)arg3 dataSource:(id <HMDCameraRecordingUploaderDataSource>)arg4;
@end

