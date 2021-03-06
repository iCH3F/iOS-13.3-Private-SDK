//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraRecordingLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@interface HMDCameraRecordingClipNotificationEvent : HMDCameraRecordingLogEvent <HMDAWDLogEvent>
{
    NSUInteger _recordingEventTriggers;
}

+ (id)uuid;
@property(readonly) NSUInteger recordingEventTriggers; // @synthesize recordingEventTriggers=_recordingEventTriggers;
- (id)attributeDescriptions;
- (id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(NSUInteger)arg3 recordingEventTriggers:(NSUInteger)arg4;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

@end

